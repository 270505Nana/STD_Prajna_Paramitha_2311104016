//  insertLast, insertAfter, deleteLast, deleteAfter
#include "list.h"
#include <iostream>
using namespace std;

void createList(List &L) {
    L.first = nullptr;
}

address allocate(int x) {
    address P = new Element;
    P->info = x;
    P->next = nullptr;
    return P;
}

void insertFirst(List &L, address P) {
    P->next = L.first;
    L.first = P;
}

void insertLast(List &L, address P) {
    if (L.first == nullptr) {
        L.first = P;
    } else {
        address Q = L.first;
        while (Q->next != nullptr) {
            Q = Q->next;
        }
        Q->next = P;
    }
}

void insertAfter(List &L, address Prec, address P) {
    if (Prec != nullptr) {
        P->next = Prec->next;
        Prec->next = P;
    }
}

void deleteLast(List &L, address &P) {
    if (L.first != nullptr) {
        if (L.first->next == nullptr) {
            P = L.first;
            L.first = nullptr;
        } else {
            address Q = L.first;
            while (Q->next->next != nullptr) {
                Q = Q->next;
            }
            P = Q->next;
            Q->next = nullptr;
        }
    }
}

void deleteAfter(List &L, address Prec, address &P) {
    if (Prec != nullptr && Prec->next != nullptr) {
        P = Prec->next;
        Prec->next = P->next;
        P->next = nullptr;
    }
}

address searchInfo(List L, int x) {
    address P = L.first;
    while (P != nullptr) {
        if (P->info == x) {
            return P;
        }
        P = P->next;
    }
    return nullptr;
}

void printInfo(List L) {
    address P = L.first;
    while (P != nullptr) {
        cout << P->info;
        P = P->next;
    }
    cout << endl;
}