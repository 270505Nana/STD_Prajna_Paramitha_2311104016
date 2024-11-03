#include "stack.h"
#include <iostream>
using namespace std;
//implementasi ADT stack

// Membuat stack baru yang kosong
void createStack_2311104016(stack &S) {
    S.Top = 0;  // Set top ke 0 menandakan stack kosong
}

// Mengecek apakah stack kosong
bool isEmpty_2311104016(stack S) {
    if (S.Top == 0) {
        return true;
    } else {
        return false;
    }
}

// Mengecek apakah stack penuh
bool isFull_2311104016(stack S) {
    if (S.Top == 15) {
        return true;
    } else {
        return false;
    }
}

// Menambahkan elemen ke stack
void push_2311104016(stack &S, infotype x) {
    if (!isFull_2311104016(S)) {      // Jika stack belum penuh
        S.Top++;           // Naikkan nilai top
        S.info[S.Top] = x; // Masukkan elemen ke posisi top
    }
}

// Mengambil elemen teratas dari stack
infotype pop_2311104016(stack &S) {
    infotype x;
    x = S.info[S.Top];  // Ambil elemen teratas
    S.Top--;            // Kurangi nilai top
    return x;           // Kembalikan elemen yang diambil
}

// Menampilkan isi stack
void printInfo_2311104016(stack S) {
    for (int i = 1; i <= S.Top; i++) {
        cout << S.info[i];    // Cetak karakter
        if (i < S.Top) {      // Jika bukan karakter terakhir
            cout << " ";       // Tambahkan spasi
        }
    }
    cout << endl;
}