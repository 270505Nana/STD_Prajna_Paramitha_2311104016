#include <iostream> 
using namespace std;  

// Mendefinisikan struktur nodenya
struct Node {
    int data;  // Data yang disimpan dalam node
    Node* next;  // Pointer ke node berikutnya
};

class LinkedList {
private:
    Node* head;  // Pointer ke node pertama dilistnya

public:
    // Konstruktor untuk menginisialisasi list kosong
    LinkedList() {
        head = nullptr;  //headnya null, artinya dia tuh kosong
    }

    // Metode untuk nambah didepan
    void insertDepan(int nilai) {
        Node* newNode = new Node();  // bikin node baru
        newNode->data = nilai;  // data dri node baru itu nilai(parameternya)
        newNode->next = head;  // pointer next ke head saat ini
        head = newNode;  // head yg tadinya null ubah jadi newNode(yg baru dimasukin)
    }

    void insertBelakang(int nilai) {
        Node* newNode = new Node(); //sama kya diatas
        newNode->data = nilai; 
        newNode->next = nullptr;  
        if (head == nullptr) {  // klo list kosong
            head = newNode;  // Node baru menjadi head
            return;
        }
        Node* temp = head;  
        while (temp->next != nullptr) { 
            temp = temp->next;
        }
        temp->next = newNode;  // Menghubungkan node terakhir ke node baru
    }

    void deleteNode(int nilai) {
        Node* temp = head;  
        Node* prev = nullptr;  // Pointer untuk menyimpan node sebelumnya
        if (temp != nullptr && temp->data == nilai) {  
            head = temp->next;  
            delete temp;  // hapus node
            return;
        }
        while (temp != nullptr && temp->data != nilai) {  // Mencari node yang akan dihapus
            prev = temp;
            temp = temp->next;
        }
        if (temp == nullptr) {  // nilai tidak ditemukan
            cout << "Nilai " << nilai << " tidak ditemukan dalam list." << endl;
            return;
        }
        prev->next = temp->next;  // hubungin node sebelumnya ke node abis yang dihapus
        delete temp;  // Menghapus node
    }

    void cetakList() {
        Node* temp = head;  
        while (temp != nullptr) { 
            cout << temp->data;  // nyetak data node
            if (temp->next != nullptr) { 
                cout << " -> "; 
            }
            temp = temp->next;  // Pindah ke node berikutnya
        }
        cout << endl; 
    }
};

int main() {
    LinkedList list;  
    int nilai;  // Variabel untuk menyimpan input pengguna

    // Menambahkan node sesuai contoh input
    list.insertDepan(10);
    list.insertBelakang(20);
    list.insertDepan(5);

    // nampilin data dalam linked list
    cout << "Isi Linked List: ";
    list.cetakList();

    // minta user untuk memilih node yang akan dihapus
    cout << "Masukkan nilai node yang akan dihapus: ";
    cin >> nilai;

    // Menghapus node
    list.deleteNode(nilai);

    // nampilin linked list setelah penghapusan
    cout << "Isi Linked List setelah penghapusan: ";
    list.cetakList();

    return 0;
}