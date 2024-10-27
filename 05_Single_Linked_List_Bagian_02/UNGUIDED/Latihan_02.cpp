#include <iostream>
#include <string>
using namespace std;

// Struktur untuk node mahasiswa
struct Mahasiswa {
    int NIM;
    string Nama;
    Mahasiswa* next;
};

// Struktur untuk Linked List
struct LinkedList {
    Mahasiswa* head;
    
    // Constructor
    LinkedList() {
        head = NULL;
    }
    
    // Fungsi untuk menambah data mahasiswa
    void tambahMahasiswa(int nim, string nama) {
        Mahasiswa* newMhs = new Mahasiswa();
        newMhs->NIM = nim;
        newMhs->Nama = nama;
        newMhs->next = NULL;
        
        if (head == NULL) {
            head = newMhs;
        } else {
            Mahasiswa* current = head;
            while (current->next != NULL) {
                current = current->next;
            }
            current->next = newMhs;
        }
        cout << "\nData mahasiswa berhasil ditambahkan!\n";
    }
    
    // Fungsi untuk mencari mahasiswa berdasarkan NIM
    void cariMahasiswa(int nim) {
        Mahasiswa* current = head;
        bool ditemukan = false;
        
        while (current != NULL) {
            if (current->NIM == nim) {
                cout << "\nMahasiswa ditemukan!\n";
                cout << "NIM   : " << current->NIM << endl;
                cout << "Nama  : " << current->Nama << endl;
                ditemukan = true;
                break;
            }
            current = current->next;
        }
        
        if (!ditemukan) {
            cout << "\nMahasiswa dengan NIM " << nim << " tidak ditemukan\n";
        }
    }
};

int main() {
    LinkedList list;
    int pilihan;
    
    do {
        cout << "\n=== PROGRAM DATA MAHASISWA ===\n";
        cout << "1. Tambah Data Mahasiswa\n";
        cout << "2. Cari Data Mahasiswa\n";
        cout << "3. Keluar\n";
        cout << "Pilih menu (1-3): ";
        cin >> pilihan;
        
        switch (pilihan) {
            case 1: {
                int nim;
                string nama;
                cout << "\nMasukkan NIM  : ";
                cin >> nim;
                cout << "Masukkan Nama : ";
                cin.ignore(); // Membersihkan buffer
                getline(cin, nama);
                list.tambahMahasiswa(nim, nama);
                break;
            }
            case 2: {
                int nim;
                cout << "\nMasukkan NIM yang dicari: ";
                cin >> nim;
                list.cariMahasiswa(nim);
                break;
            }
            case 3:
                cout << "\nTerima kasih telah menggunakan program ini!\n";
                break;
            default:
                cout << "\nPilihan tidak valid!\n";
        }
    } while (pilihan != 3);
    
    return 0;
}