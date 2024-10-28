#ifndef DOUBLELIST_H
#define DOUBLELIST_H

#include <string>
using namespace std;

// Type infotype : kendaraan <
// nopol : string
// warna : string
// thnBuat : integer
// >
struct kendaraan {
    string nopol;
    string warna;
    int thnBuat;
};

// Type ElmList <
// info : infotype
// next :address
// prev : address
// >
struct elmList {
    kendaraan info;
    elmList* next;
    elmList* prev;
};

// Type address : pointer to ElmList
typedef elmList* address;

// Type List <
// First : address
// Last : address
// >
struct List {
    address First;
    address Last;
};

// prosedur CreateList( in/out L : List )
void CreateList(List &L);

// fungsi alokasi( x : infotype ) : address
address alokasi(kendaraan x);

// prosedur dealokasi( in/out P : address )
void dealokasi(address &P);

// prosedur printInfo( in L : List )
void printInfo(List L);

// prosedur insertLast( in/out L : List, in P : address )
void insertLast(List &L, address P);

// fungsi findElm( L : List, x : infotype ) : address
address findElm(List L, string nopol);

// prosedur deleteFirst( in/out L : List, in/out P : address )
void deleteFirst(List &L, address &P);

// prosedur deleteLast( in/out L : List, in/out P : address )
void deleteLast(List &L, address &P);

// prosedur deleteAfter( in Prec : address, in/out: P : address )
void deleteAfter(address Prec, address &P);

#endif