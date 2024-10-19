// body primitif -> pemanggilannya
// disini pemanggilan dan pengelolaannya
#include <iostream>
#include "list.h"

using namespace std;

void createList (List &L){
    // inisialisasi list L
    first(L) = NULL;
}

// implementasi dari fungsi allocate di file list.h
address allocate(infotype x){
    address p = new elmlist;
    info(p) = x;
    next(p) = NULL;

    return p;
}

// implementasi dari procedure insertfirst
void insertFirst(List &L,address P){
    next (P) = first(L);
    first(L) = P;
}

// implementasi dari procedure printInfo
void printInfo(List L){
    address p = first(L);
    while (p != NULL){
        cout << info(p) << ",";
        p = next(p);
    }
    cout <<endl;
}