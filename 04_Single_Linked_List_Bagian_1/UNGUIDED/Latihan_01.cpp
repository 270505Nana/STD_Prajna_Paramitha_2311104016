#include <iostream>
using namespace std;

// Struktur untuk node
struct Node {
    int data;
    Node* next;
};

// Kelas untuk Linked List
class LinkedList {
private:
    Node* head;

public:
    LinkedList() {
        head = nullptr;
    }

    // Fungsi untuk menambah node di depan
    void insertDepan(int nilai) {
        //parameternya nilai
        // node itu nyesuaian sama yang diatas
        Node* newNode = new Node(); //proses buat bikin node baru
        newNode->data = nilai; //data dari newnode itu sesuai dengan nilai(parameter)
        newNode->next = head; 
        head = newNode;
    }

    // Fungsi untuk menambah node di belakang
    void insertBelakang(int nilai) { //penjelasannya sama kaya yang di atas
        Node* newNode = new Node(); //sama penjelasannya
        newNode->data = nilai;
        newNode->next = nullptr; //null soalnya kan dia itu node terakhir

        if (head == nullptr) {
            head = newNode;
            return;
        }

        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    // Fungsi untuk mencetak linked list
    void cetakList() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data;
            if (temp->next != nullptr) {
                cout << " -> ";
            }
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    LinkedList list;

    // Contoh penggunaan sesuai input yang diberikan
    list.insertDepan(10);     // Tambah node di depan (nilai: 10)
    list.insertBelakang(20);  // Tambah node di belakang (nilai: 20)
    list.insertDepan(5);      // Tambah node di depan (nilai: 5)

    cout << "Output:" << endl;
    list.cetakList();         // Cetak linked list

    return 0;
}