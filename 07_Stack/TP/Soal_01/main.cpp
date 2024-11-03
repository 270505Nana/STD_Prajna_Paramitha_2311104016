#include "stack.h"
#include <iostream>
#include <string>
using namespace std;

// Fungsi untuk memproses satu kasus output
void processCase_2311104016(string input, int popCount, string caseLabel) {
    stack S;
    createStack_2311104016(S);  // Inisialisasi stack kosong
    
    // Push semua karakter ke dalam stack
    for (char c : input) {
        push_2311104016(S, c);
    }
    
    cout << "Digit terakhir NIM MOD 4 sisa " << caseLabel << ":" << endl;
    cout << "Output:" << endl;
    
    // Tampilkan kondisi awal stack
    printInfo_2311104016(S);
    
    // Pop sejumlah karakter sesuai kebutuhan
    for (int i = 0; i < popCount; i++) {
        pop_2311104016(S);
    }
    
    // Tampilkan kondisi akhir stack
    printInfo_2311104016(S);
    cout << endl;  // Tambah baris kosong antara kasus
}

int main() {
    // Kasus 0: IFLABJAYA -> JAYA
    processCase_2311104016("IFLABJAYA", 7, "0");
    
    // Kasus 1: HALOBANDUNG -> BANDUNG
    processCase_2311104016("HALOBANDUNG", 4, "1");
    
    // Kasus 2: PERCAYADIRI -> DIRI
    processCase_2311104016("PERCAYADIRI", 7, "2");
    
    // Kasus 3: STRUKTURDATA -> DATA
    processCase_2311104016("STRUKTURDATA", 8, "3");
    
    return 0;
}