#include <iostream>     
using namespace std;    

// Struktur untuk node dalam linked list
struct Node {
    int data;          // Menyimpan nilai integer dalam node
    Node* next;        // Pointer yang menunjuk ke node berikutnya
};

// Struktur untuk linked list
// Menyimpan pointer ke node pertama (head) dari list
struct List {
    Node* head;        // Pointer yang menunjuk ke node pertama dalam list
};

// Fungsi untuk menginisialisasi list kosong
// Parameter: L - reference ke list yang akan diinisialisasi
void createList_2311104016(List &L) {
    L.head = NULL;     // Set head ke NULL untuk menandakan list kosong
}

// Fungsi untuk mengalokasikan node baru
// Parameter: x - nilai integer yang akan disimpan dalam node baru
Node* allocate_2311104016(int x) {
    Node* newNode = new Node();    // Alokasi memori buta node baru
    newNode->data = x;             // Set nilai data node sesuai sma paramnya
    newNode->next = NULL;          // Set pointer next ke NULL
    return newNode;               
}

// Fungsi untuk menambahkan node di awal list
// Parameter: L - reference ke list
void insertFirst_2311104016(List &L, Node* newNode) {
    if(L.head == NULL) {           // kalo listnya itu kosong
        L.head = newNode;          // node yg baru ditambahin jadi yg pertama
    } else {                      
        newNode->next = L.head;    // Set next dari node baru ke head lama
        L.head = newNode;          // Update head ke node baru
    }
}

// Fungsi untuk menampilkan semua elemen dalam list
void printList_2311104016(List L) {
    cout << "Isi List: ";
    Node* current = L.head;        // Mulai dari head
    while(current != NULL) {       // akan terus berjalan sampai akhir list
        cout << current->data << " "; // Cetak data node saat ini
        current = current->next;  
    }
    cout << endl;
}

// Fungsi untuk mengurutkan list menggunakan bubble sort
void bubbleSortList_2311104016(List &L) {
    // Jika list kosong atau hanya memiliki satu elemen jaidnya gausah diurutin
    if(L.head == NULL || L.head->next == NULL) 
        return;

    bool swapped;              // buat mengecek ada pertukaran atau engga
    Node* current;             // Pointer untuk traversing list
    Node* last = NULL;         // Pointer untuk nandain batas akhir pengurutan

    do {
        swapped = false;
        current = L.head;

        // Traverse list sampai elemen terakhir yang belum terurut
        while(current->next != last) {
            // ini if kalo elemen saat ini > dari elemen berikutnya
            if(current->data > current->next->data) {
                // Tukar nilai data
                int temp = current->data;
                current->data = current->next->data;
                current->next->data = temp;
                swapped = true;     // Set flag bahwa ada pertukaran
            }
            current = current->next; // Pindah ke node berikutnya
        }
        last = current;             // Update batas akhir pengurutan
    } while(swapped);              /// dia akan ada perulangan klo ada pertukran lagi
}

int main() {
    List L;                        // Deklarasi list
    createList_2311104016(L);      // Inisialisasi list kosong

    // Input 5 bilangan dari pengguna
    cout << "Masukkan 5 bilangan integer:\n";
    for(int i = 0; i < 5; i++) {
        int num;
        cout << "Bilangan ke-" << (i+1) << ": ";
        cin >> num;              
        // Buat node baru dan masukkan ke awal list
        Node* newNode = allocate_2311104016(num);
        insertFirst_2311104016(L, newNode);
    }

    // Tampilkan list sebelum pengurutan
    cout << "\nSebelum diurutkan:\n";
    printList_2311104016(L);

    // Urutkan list
    bubbleSortList_2311104016(L);

    // Tampilkan list setelah pengurutan
    cout << "\nSetelah diurutkan (ascending):\n";
    printList_2311104016(L);

    return 0;                      
}