#include <iostream>
#include "list.h"
using namespace std;

int main() {
    List L;
    address P;
    int digit;

    createList(L);

    cout << "Masukkan NIM perdigit" << endl;
    for (int i = 1; i <= 10; i++) {
        cout << "Digit " << i << " : ";
        cin >> digit;
        P = allocate(digit);
        insertLast(L, P);  // Menggunakan insertLast agar urutan tidak terbalik
    }

    cout << "Isi list : ";
    printInfo(L);

    return 0;
}