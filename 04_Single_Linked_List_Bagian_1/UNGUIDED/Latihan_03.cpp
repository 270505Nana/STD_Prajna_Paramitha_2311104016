#include <iostream>  
using namespace std; 

// Mendefinisikan struktur Node untuk linked list
struct Node {
    int data;  // buat nyimpen nilai data
    Node* next;  // Pointer ke node berikutnya
};

class LinkedList {
private:
    Node* head;  // Pointer ke node pertama dalam list

public:
    // Konstruktor untuk inisialisasi LinkedList
    LinkedList() {
        head = nullptr;  // Inisialisasi head dengan nullptr artinya listnya kosong
    }

    void insertDepan(int nilai) {
        Node* newNode = new Node();  // bikin node baru
        newNode->data = nilai;  // atur nilai data node baru
        newNode->next = head;  // ngehubungin node baru ke head saat ini
        head = newNode;  // ngubah headnya ke node baru
    }

    void insertBelakang(int nilai) {
        Node* newNode = new Node(); 
        newNode->data = nilai; // sama aja kaya diatas
        newNode->next = nullptr;

        if (head == nullptr) {  // klo listnya kosong nanti si nodebarunya jadi head
            head = newNode; 
            return;
        }

        Node* temp = head;  // Mulai dari head
        while (temp->next != nullptr) {  // nyari node terakhir
            temp = temp->next;
        }
        temp->next = newNode;  
    }

    bool cariNode(int nilai) {
        Node* temp = head; 
        while (temp != nullptr) {  
            if (temp->data == nilai) {  // Jika nilai ditemukan
                return true;  //  true
            }
            temp = temp->next;  // Pindah ke node berikutnya
        }
        return false;  // false jika nilai tidak ditemukan
    }

    int hitungPanjang() {
        int count = 0; 
        Node* temp = head; 
        while (temp != nullptr) { 
            count++;  
            temp = temp->next; 
        }
        return count; 
    }

    void cetakList() {
        Node* temp = head; 
        while (temp != nullptr) { 
            cout << temp->data; 
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

    // Menambahkan node sesuai input
    list.insertDepan(10);
    list.insertBelakang(20);
    list.insertDepan(5);

    // nampilin isi linked list
    cout << "Isi Linked List: ";
    list.cetakList();

    // nyari node nilai 20
    int nilaiCari = 20;
    if (list.cariNode(nilaiCari)) {
        cout << "Node dengan nilai " << nilaiCari << " ditemukan." << endl;
    } else {
        cout << "Node dengan nilai " << nilaiCari << " tidak ditemukan." << endl;
    }

    // buat nampilin panjangnya
    cout << "Panjang linked list: " << list.hitungPanjang() << endl;

    return 0;
}