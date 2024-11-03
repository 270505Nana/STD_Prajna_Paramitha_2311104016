#ifndef STACK_H
#define STACK_H

// Mendefinisikan tipe data dasar untuk stack
typedef char infotype;

// Mendefinisikan struktur stack
struct stack {
    infotype info[15];  // Array untuk menyimpan data dengan ukuran 15
    int Top;            // Menunjukkan indeks teratas dari stack
};

// Deklarasi fungsi-fungsi yang akan digunakan
void createStack_2311104016(stack &S);    // Membuat stack kosong
bool isEmpty_2311104016(stack S);         // Mengecek stack kosong
bool isFull_2311104016(stack S);         // Mengecek stack penuh
void push_2311104016(stack &S, infotype x); // Menambah elemen
infotype pop_2311104016(stack &S);        // Mengambil elemen teratas
void printInfo_2311104016(stack S);       // Mencetak isi stack

#endif