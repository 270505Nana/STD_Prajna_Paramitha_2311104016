#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* prev;
    Node* next;
};

struct DoubleList {
    Node* head;
    Node* tail;
};

void createList_2311104016(DoubleList &L) {
    L.head = NULL;
    L.tail = NULL;
}

Node* createNode_2311104016(int angka) {
    Node* newNode = new Node();
    newNode->data = angka;
    newNode->next = NULL;
    newNode->prev = NULL;
    return newNode;
}

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

void displayForward_2311104016(DoubleList L) {
    Node* current = L.head;
    cout << "Daftar elemen dari depan ke belakang: ";
    while (current != NULL) {
        cout << current->data;
        if (current->next != NULL) {
            cout << " <-> ";
        }
        current = current->next;
        // jadi nampilinnya itu dari data yang ditampilin trus ke pointer next makanya dia urut ke depan
    }
    cout << endl;
}

void displayBackward_2311104016(DoubleList L) {
    Node* current = L.tail;
    cout << "Daftar elemen dari belakang ke depan: ";
    while (current != NULL) {
        cout << current->data;
        if (current->prev != NULL) {
            cout << " <-> ";
        }
        current = current->prev;
        // kalau ini kebalikan dari next dia ngambilnya ke prev makanya mundur
    }
    cout << endl;
}

int main() {
    DoubleList list;
    createList_2311104016(list);
    
    cout << "Input: Masukkan 4 elemen secara berurutan:\n";
    for(int i = 1; i <= 4; i++) {
        int elem;
        cout << "Masukkan elemen ke-" << i << ": ";
        cin >> elem;
        Node* newNode = createNode_2311104016(elem);
        insertLast_2311104016(list, newNode);
    }
    
    cout << "\nOutput:\n";
    displayForward_2311104016(list);
    displayBackward_2311104016(list);
    
    return 0;
}