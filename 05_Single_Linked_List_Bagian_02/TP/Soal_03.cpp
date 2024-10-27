#include <iostream>
using namespace std;

// Struktur untuk node dalam linked list
struct Node {
    int data;          // Menyimpan nilai integer
    Node* next;        // Pointer ke node berikutnya
};

// Struktur untuk linked list
struct List {
    Node* head;        // Pointer ke node pertama
};

// Fungsi untuk membuat list kosong
void createList_2311104016(List &L) {
    L.head = NULL;     // Set head ke NULL untuk list kosong
}

// Fungsi untuk mengalokasi node baru
Node* allocate_2311104016(int x) {
    Node* newNode = new Node();    // Alokasi memori untuk node baru
    newNode->data = x;             // data buat newnode -> x (inputan)
    newNode->next = NULL;          
    return newNode;                
}

// Fungsi untuk menampilkan isi list
void printList_2311104016(List L) {
    cout << "Isi List: ";
    Node* current = L.head;        // Mulai dari head
    while(current != NULL) {       // perulangan terus berjalan selama dia belum sampai akhir
        cout << current->data << " "; 
        current = current->next;   
    }
    cout << endl;
}

// Fungsi untuk menambah elemen secara terurut
void insertSorted_2311104016(List &L, Node* P) {
    // Jika list kosong atau data baru lebih kecil dari head
    if (L.head == NULL || P->data < L.head->data) {
        P->next = L.head;          
        L.head = P;                // Update head ke P
        return;
    }

    // Mencari posisi yang tepat untuk menyisipkan node baru
    Node* current = L.head;
    while (current->next != NULL && current->next->data < P->data) {
        current = current->next;
    }

    // Sisipkan node P setelah posisi current
    P->next = current->next;
    current->next = P;
}

int main() {
    List L;
    createList_2311104016(L);      // Inisialisasi list kosong

    // Input 4 elemen pertama
    cout << "Masukkan 4 bilangan integer untuk list awal:\n";
    for(int i = 0; i < 4; i++) {
        int num;
        cout << "Bilangan ke-" << (i+1) << ": ";
        cin >> num;
        // mbuat node baru trus masukin secara terurut
        Node* newNode = allocate_2311104016(num);
        insertSorted_2311104016(L, newNode);
        
        cout << "List setelah penambahan: ";
        printList_2311104016(L);
    }

    // Input elemen tambahan
    cout << "\nMasukkan bilangan tambahan: ";
    int tambahan;
    cin >> tambahan;
    Node* newNode = allocate_2311104016(tambahan);
    insertSorted_2311104016(L, newNode);

    // Tampilkan hasil akhir
    cout << "\nList setelah penambahan elemen baru:\n";
    printList_2311104016(L);

    return 0;
}