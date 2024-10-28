#include "doublelist.h"
#include <iostream>

// penerapan dari yg ada di .h
// nama fungsi harus dama

void CreateList(List &L) {
    L.First = NULL;
    L.Last = NULL;
}

address alokasi(kendaraan x) {
    address P = new elmList;
    P->info = x;
    P->next = NULL;
    P->prev = NULL;
    return P;
}

void dealokasi(address &P) {
    delete P;
}

void printInfo(List L) {
    cout << "\nDATA LIST 1" << endl;
    address P = L.First;
    while (P != NULL) {
        cout << "no polisi : " << P->info.nopol << endl;
        cout << "warna     : " << P->info.warna << endl;
        cout << "tahun     : " << P->info.thnBuat << endl;
        cout << endl;
        P = P->next;
    }
}

void insertLast(List &L, address P) {
    if (L.First == NULL) {
        L.First = P;
        L.Last = P;
    } else {
        P->prev = L.Last;
        L.Last->next = P;
        L.Last = P;
    }
}

address findElm(List L, string nopol) {
    address P = L.First;
    while (P != NULL) {
        if (P->info.nopol == nopol) {
            cout << "Nomor polisi : " << P->info.nopol << endl;
            cout << "Warna        : " << P->info.warna << endl;
            cout << "Tahun        : " << P->info.thnBuat << endl;
            return P;
        }
        P = P->next;
    }
    cout << "Nomor polisi : " << endl;
    cout << "Warna        : " << endl;
    cout << "Tahun        : 0" << endl;
    return NULL;
}

void deleteFirst(List &L, address &P) {
    if (L.First == NULL) {
        P = NULL;
    } else if (L.First == L.Last) {
        P = L.First;
        L.First = NULL;
        L.Last = NULL;
    } else {
        P = L.First;
        L.First = P->next;
        L.First->prev = NULL;
        P->next = NULL;
    }
}

void deleteLast(List &L, address &P) {
    if (L.First == NULL) {
        P = NULL;
    } else if (L.First == L.Last) {
        P = L.First;
        L.First = NULL;
        L.Last = NULL;
    } else {
        P = L.Last;
        L.Last = P->prev;
        L.Last->next = NULL;
        P->prev = NULL;
    }
}

void deleteAfter(address Prec, address &P) {
    if (Prec != NULL) {
        P = Prec->next;
        if (P != NULL) {
            if (P->next == NULL) { // P is last element
                Prec->next = NULL;
                P->prev = NULL;
            } else {
                Prec->next = P->next;
                P->next->prev = Prec;
                P->next = NULL;
                P->prev = NULL;
            }
        }
    }
}