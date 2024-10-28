#include "doublelist.h"
#include <iostream>
#include <string>

using namespace std;

void inputKendaraan(List &L) {
    kendaraan mobil;
    string input;
    
    cout << "Masukkan nomor polisi: ";
    getline(cin >> ws, mobil.nopol);
    cout << "Masukkan warna kendaraan: ";
    getline(cin >> ws, mobil.warna);
    cout << "Masukkan tahun kendaraan: ";
    if (cin.peek() == '\n') {
        mobil.thnBuat = 0;
        cin.ignore();
    } else {
        cin >> mobil.thnBuat;
    }
    
    address P = alokasi(mobil);
    insertLast(L, P);
}

void searchKendaraan(List L) {
    string nopol;
    cout << "Masukkan Nomor Polisi yang dicari : ";
    getline(cin >> ws, nopol);
    findElm(L, nopol);
}

void deleteKendaraan(List &L) {
    string nopol;
    cout << "Masukkan Nomor Polisi yang akan dihapus: ";
    getline(cin >> ws, nopol);
    
    address P = findElm(L, nopol);
    
    if (P != NULL) {
        if (P == L.First) {
            deleteFirst(L, P);
        } else if (P == L.Last) {
            deleteLast(L, P);
        } else {
            deleteAfter(P->prev, P);
        }
        dealokasi(P);
        cout << "Data berhasil dihapus." << endl;
    } else {
        cout << "Data tidak ditemukan." << endl;
    }
}

void showMenu() {
    cout << "\nMenu:" << endl;
    cout << "1. Tambah Kendaraan" << endl;
    cout << "2. Tampilkan Semua Kendaraan" << endl;
    cout << "3. Cari Kendaraan" << endl;
    cout << "4. Hapus Kendaraan" << endl;  // New option
    cout << "5. Keluar" << endl;
    cout << "Pilihan: ";
}

int main() {
    List L;
    CreateList(L);
    int choice;
    
    do {
        showMenu();
        cin >> choice;
        cin.ignore();
        
        switch(choice) {
            case 1:
                inputKendaraan(L);
                break;
            case 2:
                printInfo(L);
                break;
            case 3:
                searchKendaraan(L);
                break;
            case 4:
                deleteKendaraan(L);
                break;
            case 5:
                cout << "Program selesai" << endl;
                break;
            default:
                cout << "Pilihan tidak valid" << endl;
        }
    } while (choice != 4);
    
    return 0;
}