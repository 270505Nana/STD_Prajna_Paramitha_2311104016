// Soal 1: Mencari Elemen Tertentu dalam SLL
// Deskripsi Soal: Buatlah program yang mengizinkan pengguna memasukkan 6 elemen
// integer ke dalam list. Implementasikan function searchElement untuk mencari apakah
// sebuah nilai tertentu ada dalam list.

// Instruksi:
// 1. Minta pengguna untuk memasukan nilai yang ingin dicari.
// 2. Jika nilai ditemukan, tampilan alamat dan posisi dalam angka (contoh: urutan ke 4)
// pada list tersebut.
// 3. Jika nilai tidak ditemukan, tampilkan pesan bahwa elemen tersebut tidak ada dalam
// list tersebut.

#include <iostream>
using namespace std;

// Struktur untuk node
struct Node {
   int data;
   Node* next;
};

// Struktur untuk linked list
struct List {
   Node* head;
};

// Fungsi membuat list kosong
void createList_2311104016(List &L) {
   L.head = NULL;
}

// Fungsi alokasi node baru
Node* allocate_2311104016(int x) {
   Node* newNode = new Node();
   newNode->data = x;
   newNode->next = NULL;
   return newNode;
}

// Fungsi untuk menambah node di depan
void insertFirst_2311104016(List &L, Node* newNode) {
   if(L.head == NULL) {
       L.head = newNode;
   } else {
       newNode->next = L.head;
       L.head = newNode;
   }
}

// Fungsi untuk mencari elemen
void searchElement_2311104016(List L, int x) {
   Node* current = L.head;
   int position = 1;
   bool found = false;
   
   // Melakukan perulangan selama i belum ditemukan dan posisi current belum berada pada akhir list
   while(current != NULL && !found) {
       if(current->data == x) {
           found = true;
       } else {
           current = current->next;
           position++;
       }
   }
   
   // Jika i ditemukan maka tampilkan alamat dan posisi
   if(found) {
       cout << "\nElemen " << x << " ditemukan pada: " << endl;
       cout << "Alamat: " << current << endl;
       cout << "Posisi urutan ke-" << position << endl;
   } 
   // Jika tidak ditemukan maka tampilkan pesan
   else {
       cout << "\nElemen " << x << " tidak ditemukan dalam list" << endl;
   }
}

// Fungsi untuk menampilkan list
void printList_2311104016(List L) {
   cout << "\nIsi List: ";
   Node* current = L.head;
   while(current != NULL) {
       cout << current->data << " ";
       current = current->next;
   }
   cout << endl;
}

int main() {
   List L;
   createList_2311104016(L);
   
   // Memasukkan 6 elemen ke dalam list
   cout << "Masukkan 6 bilangan integer:\n";
   for(int i = 0; i < 6; i++) {
       int num;
       cout << "Bilangan ke-" << (i+1) << ": ";
       cin >> num;
       Node* newNode = allocate_2311104016(num);
       insertFirst_2311104016(L, newNode);
   }
   
   // Menampilkan isi list
   printList_2311104016(L);
   
   // Mencari elemen
   int searchNum;
   cout << "\nMasukkan nilai yang ingin dicari: ";
   cin >> searchNum;
   searchElement_2311104016(L, searchNum);
   
   return 0;
}