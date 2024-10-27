# include <iostream>

using namespace std;

// deklarasi record dan struktur data list
struct Elemen{
    int data;
    Elemen* next;
};

// definisi tipe data untuk list
struct List{
    Elemen* first;
};

// fungsi untuk membuat list
void createList(List &L){
    L.first = NULL;
}

Elemen* alokasi(int x){
    Elemen* P = new Elemen;
    if (P != NULL){
        P -> data = x;
        P -> next = NULL;
    }
    return P;
}

// fungsi untuk menambahkan elemen diawal list
void insertFirst(List &L, Elemen* P){
    P -> next = L.first;
    L.first = P;
}

// fungsi untui mencetak semua elemen
void printInfo(List L){
    Elemen* P = L.first;
    while (P !=NULL){
        cout<< P -> data << "";
        P = P -> next;
    }

    cout <<endl;
}

// Elemen* : struct elemen
// L : List L
Elemen* findElm(List L, int x){
    Elemen* P = L.first;
    // dari Elemen pertama dari list ditunjuk

    // *p
    // != : tidak sama dengan Null artinya dia ada datanya
    // while : maka pengecekan terjadi jika data P(data pertama) tidak null
    while(P != NULL){
        // pointer dari elemen
        // datanya dari pointer itu sama dengan x(yg dicari)
        if (P -> data ==x){
            return P; //elemen nemu
        }
        //ini kalo kosong maka dia akan lanjut ke elemen selanjutnya
        P = P-> next;
    }
    return NULL; //gak ditemuin
}

// fungsi untuk menghitung total nilai semua elemen
int SumAllElements(List L){
    int total = 0;
    Elemen* P = L.first;
    while (P != NULL){
        total += P -> data;
        P = P -> next;
    }
    return total;
}