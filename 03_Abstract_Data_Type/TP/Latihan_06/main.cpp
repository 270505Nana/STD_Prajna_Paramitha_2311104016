#include <iostream>
#include "kerucut.h"
// include library file kerucut h yg berisikan hitungan"

int main() {
    Kerucut kerucutSaya(0, 0);  // set nilai awal data 0, karena akan diinputkan oleh user
    
    // main cpp ini hanya untuk menampilkan aja
    std::cout << "Kalkulator Kerucut" << std::endl;
    // memanggil kerucutSaya biar bisa menginputkan jari" dll
    kerucutSaya.input();
    // menginputkan angka 
    
    std::cout << std::endl;
    kerucutSaya.tampilkan();

    return 0;
}