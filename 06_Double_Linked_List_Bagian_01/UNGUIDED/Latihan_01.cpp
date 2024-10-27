#include <iostream>
#include <string>
using namespace std;

// Struktur untuk node dalam double linked list
struct Node {
    int idBuku;             // ID Buku
    string judulBuku;       // Judul Buku
    string penulisBuku;     // Penulis Buku
    Node* next;             // Pointer ke node berikutnya
    Node* prev;             // Pointer ke node sebelumnya
};

// Struktur untuk double linked list
struct DoubleList {
    Node* head;             // Pointer ke node pertama
    Node* tail;             // Pointer ke node terakhir
};

// Fungsi untuk membuat list kosong
void createList_2311104016(DoubleList &L) {
    L.head = NULL;         
    L.tail = NULL;          
}

// Fungsi untuk membuat node baru
Node* createNode_2311104016(int id, string judul, string penulis) {
    Node* newNode = new Node();    // Alokasi memori untuk node baru
    newNode->idBuku = id;          // Set ID buku
    newNode->judulBuku = judul;    // Set judul buku
    newNode->penulisBuku = penulis;// Set penulis buku
    newNode->next = NULL;         
    newNode->prev = NULL;         
    return newNode;               
}
// Fungsi untuk menambahkan buku di akhir list
void insertLast_2311104016(DoubleList &L, Node* newNode) {
    if (L.head == NULL) {         
        L.head = newNode;         
        L.tail = newNode;          
    } else {
        newNode->prev = L.tail;    
        L.tail->next = newNode;    
        L.tail = newNode;          
    }
}

// Fungsi untuk menampilkan buku dari awal ke akhir
void displayForward_2311104016(DoubleList L) {
    cout << "\nDaftar Buku (Awal ke Akhir):\n";
    Node* current = L.head;        // Mulai dari head
    while (current != NULL) {      // Selama belum mencapai akhir
        // Tampilkan informasi buku
        cout << "ID: " << current->idBuku << endl;
        cout << "Judul: " << current->judulBuku << endl;
        cout << "Penulis: " << current->penulisBuku << endl;
        cout << "------------------------\n";
        current = current->next;    
    }
}

// Fungsi untuk menampilkan buku dari akhir ke awal
void displayBackward_2311104016(DoubleList L) {
    cout << "\nDaftar Buku (Akhir ke Awal):\n";
    Node* current = L.tail;        // Mulai dari tail
    while (current != NULL) {      // Selama belum mencapai awal
        // Tampilkan informasi buku
        cout << "ID: " << current->idBuku << endl;
        cout << "Judul: " << current->judulBuku << endl;
        cout << "Penulis: " << current->penulisBuku << endl;
        cout << "------------------------\n";
        current = current->prev;    // Pindah ke node sebelumnya
    }
}

int main() {
    DoubleList L;
    createList_2311104016(L);      // Inisialisasi list kosong

    int pilihan;
    do {
        // Menu program
        cout << "\nProgram Manajemen Buku\n";
        cout << "1. Tambah Buku\n";
        cout << "2. Tampilkan Buku (Awal ke Akhir)\n";
        cout << "3. Tampilkan Buku (Akhir ke Awal)\n";
        cout << "4. Keluar\n";
        cout << "Pilihan: ";
        cin >> pilihan;

        switch(pilihan) {
            case 1: {
                // Input data buku baru
                int id;
                string judul, penulis;
                cout << "Masukkan ID Buku: ";
                cin >> id;
                cin.ignore(); 
                cout << "Masukkan Judul Buku: ";
                getline(cin, judul);
                cout << "Masukkan Penulis Buku: ";
                getline(cin, penulis);

                // Buat node baru dan tambahkan ke list
                Node* newNode = createNode_2311104016(id, judul, penulis);
                insertLast_2311104016(L, newNode);
                cout << "Buku berhasil ditambahkan!\n";
                break;
            }
            case 2:
                displayForward_2311104016(L);    // Tampilkan dari awal ke akhir
                break;
            case 3:
                displayBackward_2311104016(L);   // Tampilkan dari akhir ke awal
                break;
            case 4:
                cout << "Program selesai.\n";
                break;
            default:
                cout << "Pilihan tidak valid!\n";
        }
    } while (pilihan != 4);

    return 0;
}