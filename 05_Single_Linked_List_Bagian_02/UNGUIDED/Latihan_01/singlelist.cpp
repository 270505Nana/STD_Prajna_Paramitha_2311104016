// body primitif -> pemanggilannya
// disini pemanggilan dan pengelolaannya
#include <iostream>
#include "list.h"

using namespace std;

//  prosedur CreateList( in/out L : List )
void createList (List &L){
    // inisialisasi list L
    L.first = NULL;
}

// fungsi alokasi( x : infotype ) : address
address allocate(infotype x){
    address p = new elmlist;
    info(p) = x;
    next(p) = NULL;

    return p;
}

// prosedur dealokasi( in/out P : address )
void dealokasi(List* &P) {
    delete P; // Mengembalikan memori yang digunakan oleh node
}

// prosedur insertFirst( in/out L : List, in P : address )
void insertFirst(List &L,address P){
    // next (P) = first(L);
    // first(L) = P;

    P -> next = L.first;
    L.first = P;
}

//  fungsi findElm
address findElm(List L, infotype x) {
    address P = L.first;
    while(P != NULL) {
        if(P->info == x) {
            return P;  // elemen ditemukan
        }
        P = P->next;
    }
    return NULL;  // elemen tidak ditemukan
}

int SumAllElements(List L){
    int total = 0;
    address P = L.first;
    while (P != NULL){
        total += P -> info;
        P = P -> next;
    }
    return total;
}


// prosedur printInfo( in L : List )
void printInfo(List L){
    address p = first(L);
    while (p != NULL){
        cout << info(p) << ",";
        p = next(p);
    }
    cout <<endl;
}