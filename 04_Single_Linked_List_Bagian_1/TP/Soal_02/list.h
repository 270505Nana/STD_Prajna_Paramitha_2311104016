#ifndef LIST_H
#define LIST_H

// Tambahkan procedure insertLast, insertAfter, deleteLast, deleteAfter pada list.h
// dan list.cpp

struct Element {
    int info;
    Element* next;
};

typedef Element* address;
typedef struct {
    address first;
} List;

// createList dengan parameter alamat L
void createList(List &L);
// untuk mengallocate
address allocate(int x);
// insert first
void insertFirst(List &L, address P);
// insertLast
void insertLast(List &L, address P);
// InsertAfter
void insertAfter(List &L, address Prec, address P);
// delete last
void deleteLast(List &L, address &P);
// delete after
void deleteAfter(List &L, address Prec, address &P);
// menambahkan function sesuai dengan ketentuan
address searchInfo(List L, int x);
void printInfo(List L);

#endif