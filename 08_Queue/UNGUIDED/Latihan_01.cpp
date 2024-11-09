#include <iostream>
#include <string>
using namespace std;

// Definisi struktur untuk elemen list
struct Node {
    string data;    
    Node* next;     // Pointer ke elemen berikutnya
};

// Fungsi untuk alokasi node baru
Node* alokasi(string value) {
    Node* newNode = new Node;
    if (newNode != nullptr) {
        newNode->data = value;
        newNode->next = nullptr;
    }
    return newNode;
}

// Fungsi untuk dealokasi node
void dealokasi(Node* node) {
    delete node;
}

// Fungsi untuk mengecek apakah list kosong
// konversi dari is empty di guided
bool isListEmpty(Node* head) {
    return head == nullptr;
}

// Fungsi untuk mengecek apakah antrian penuh (maksimal 5)
// konversi dari is full di guided juga
bool isListFull(Node* head) {
    int count = 0;
    Node* temp = head;
    while (temp != nullptr) {
        count++;
        temp = temp->next;
    }
    return count >= 5;  // Maksimal 5 antrian
}

// Fungsi untuk menambah antrian (enqueue)
// konversi dati enqueue antrian di guided
void enqueueAntrian(Node* &head, string value) {
    if (isListFull(head)) {
        cout << "Antrian penuh" << endl;
        return;
    }

    Node* newNode = alokasi(value);
    if (newNode != nullptr) {
        if (isListEmpty(head)) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }
}

// Fungsi untuk mengurangi antrian (dequeue)
// konversi dari dequeue antrian di guided
void dequeueAntrian(Node* &head) {
    if (isListEmpty(head)) {
        cout << "Antrian kosong" << endl;
        return;
    }

    Node* temp = head;
    head = head->next;
    dealokasi(temp);
}

// Fungsi untuk menghitung jumlah antrian
// konversi dari count antrian di guided
int countQueue(Node* head) {
    int count = 0;
    Node* temp = head;
    while (temp != nullptr) {
        count++;
        temp = temp->next;
    }
    return count;
}

// Fungsi untuk menghapus semua antrian
// konversi dari clear antrian di guided
void clearQueue(Node* &head) {
    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        dealokasi(temp);
    }
}

// Fungsi untuk menampilkan antrian
// konversi dari view antrian di guided
void viewQueue(Node* head) {
    cout << "Data antrian teller:" << endl;
    Node* temp = head;
    for (int i = 0; i < 5; i++) {  // Maksimal 5 antrian
        if (temp != nullptr) {
            cout << i + 1 << ". " << temp->data << endl;
            temp = temp->next;
        } else {
            cout << i + 1 << ". (kosong)" << endl;
        }
    }
}

int main() {
    Node* head = nullptr; 
    
    // Test fungsi-fungsi
    enqueueAntrian(head, "Andi"); //nambahin
    enqueueAntrian(head, "Maya"); //nambahin
    viewQueue(head);
    cout << "Jumlah antrian: " << countQueue(head) << endl;
    
    dequeueAntrian(head);
    viewQueue(head);
    cout << "Jumlah antrian: " << countQueue(head) << endl;
    
    clearQueue(head);
    viewQueue(head);
    cout << "Jumlah antrian: " << countQueue(head) << endl;
    
    return 0;
}