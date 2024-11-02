# include <iostream>
using namespace std;

struct Node
{
    // membuat nodenya dulu, jadi DLL ada 3 bag data, prev sama next
    int data;
    Node* prev; //pointer prev elemen
    Node* next; //pointer next elemen
};

struct DoubleList
{
    // address
    Node* head;
    Node* tail;
};

//soal 2 menghapus elemen diawal dan diakhir
// delete first, delete last, menampilkan

// Fungsi untuk membuat list kosong
void createList_2311104016(DoubleList &L) {
    L.head = NULL;         
    L.tail = NULL;          
}

// Fungsi untuk membuat node baru
Node* createNode_2311104016(int angka) {
    Node* newNode = new Node();    // Alokasi memori untuk node baru
    newNode->data = angka;       
    newNode->next = NULL;
    // istilah dia node pertama jadi blm ada prev sma next 
    newNode->prev = NULL;         
    return newNode;               
}
void insertFirst_2311104016(DoubleList &L, Node* newNode){
    //jadi node baru akan menjadi prev dri node yang head(node pertama sebelumnya)

    if(L.head == NULL) {
        L.head = newNode;
        L.tail = newNode;
    } else {
        newNode->next = L.head;
        L.head->prev = newNode;
        L.head = newNode;
    }
}
// Fungsi untuk menambahkan buku di akhir list
void insertLast_2311104016(DoubleList &L, Node* newNode) {
    // address P == Node* newNode
    if (L.head == NULL) {         
        L.head = newNode;         
        L.tail = newNode;          
    } else {
        newNode->prev = L.tail;    
        L.tail->next = newNode;    
        L.tail = newNode;          
    }
}   

void DeleteFirst_2311104016(DoubleList &L) {
    if(L.head == NULL && L.tail == NULL) {
        cout << "Maaf cantik listnya kosong nih.." << endl;
    } else if (L.head == L.tail) {
        // klo node yang kita apus itu node satu satunya
        delete L.head;
        L.head = NULL;
        L.tail = NULL;
    } else {
        Node* temp = L.head;
        L.head = L.head->next;
        L.head->prev = NULL;
        delete temp;
    }
}

void DeleteLast_2311104016(DoubleList &L){
    if(L.head == NULL && L.tail == NULL) {
        cout << "Maaf cantik listnya kosong nih.." << endl;
    } else if (L.head == L.tail) {
        delete L.tail;
        L.head = NULL;
        L.tail = NULL;
    } else {
        Node* temp = L.tail;
        L.tail = L.tail->prev;  
        L.tail->next = NULL;    
        delete temp;            
    }
}
void display_2311104016(DoubleList L) {
    Node* current = L.head;
    cout << "DAFTAR ANGGOTA LIST: ";
    while (current != NULL) {
        cout << current->data;
        if (current->next != NULL) {
            cout << " <-> ";
        }
        current = current->next;
    }
    cout << endl;
}

int main() {
    DoubleList list;
    createList_2311104016(list);
    int elem1, elem2, elem3;
    
    // Input sesuai contoh
    cout << "Input: Masukkan elemen pertama = ";
    cin >> elem1;
    
    cout << "Input: Masukkan elemen kedua di awal = ";
    cin >> elem2;
    
    cout << "Input: Masukkan elemen ketiga di akhir = ";
    cin >> elem3;
    
    // Membuat node baru dan menambahkan ke list
    Node* node1 = createNode_2311104016(elem1);
    Node* node2 = createNode_2311104016(elem2);
    Node* node3 = createNode_2311104016(elem3);
    
    // Menambahkan elemen sesuai urutan
    insertFirst_2311104016(list, node1);  // Elemen pertama
    insertLast_2311104016(list, node2);  // Elemen kedua di awal
    insertLast_2311104016(list, node3);   // Elemen ketiga di akhir
    DeleteFirst_2311104016(list);
    DeleteLast_2311104016(list);
    
    // Menampilkan hasil
    display_2311104016(list);
    
    return 0;
}