# include <iostream>
# include <string>
using namespace std;

// soal
// 1. Manajemen Data Pegawai dan Proyek
// Buatlah program menggunakan Multi Linked List untuk menyimpan data pegawai
// dan proyek yang dikelola setiap pegawai.
// - Setiap pegawai memiliki data: Nama Pegawai dan ID Pegawai.
// - Setiap proyek memiliki data: Nama Proyek** dan **Durasi (bulan).
// Instruksi:
// 1. Masukkan data pegawai berikut:
//  - Pegawai 1: Nama = "Andi", ID = "P001".
//  - Pegawai 2: Nama = "Budi", ID = "P002".
//  - Pegawai 3: Nama = "Citra", ID = "P003".
// 2. Tambahkan proyek ke pegawai:
//  - Proyek 1: Nama = "Aplikasi Mobile", Durasi = 12 bulan (Untuk Andi).
//  - Proyek 2: Nama = "Sistem Akuntansi", Durasi = 8 bulan (Untuk Budi).
//  - Proyek 3: Nama = "E-commerce", Durasi = 10 bulan (Untuk Citra).
// 3. Tambahkan proyek baru:
//  - Proyek 4: Nama = "Analisis Data", Durasi = 6 bulan (Untuk Andi).
// 4. Hapus proyek "Aplikasi Mobile" dari Andi.
// 5. Tampilkan data pegawai dan proyek mereka. 

//struct 
#include <iostream>
#include <string>
using namespace std;

struct Proyek {
    string namaProyek;
    int durasi;
    Proyek* next;
};

struct Pegawai {
    string namaPegawai;
    string idPegawai;
    Proyek* proyek;
    Pegawai* next;
};

typedef Pegawai* addressPegawai;
typedef Proyek* addressProyek;

struct ListPegawai {
    addressPegawai first;
};

void createListPegawai(ListPegawai& L) {
    L.first = nullptr;
}

addressPegawai allocatePegawai(const string& nama, const string& id) {
    addressPegawai P = new Pegawai;
    P->namaPegawai = nama;
    P->idPegawai = id;
    P->proyek = nullptr;
    P->next = nullptr;
    return P;
}

addressProyek allocateProyek(const string& namaProyek, int durasi) {
    addressProyek P = new Proyek;
    P->namaProyek = namaProyek;
    P->durasi = durasi;
    P->next = nullptr;
    return P;
}

void insertPegawai(ListPegawai& L, addressPegawai P) {
    if (L.first == nullptr) {
        L.first = P;
    } else {
        addressPegawai temp = L.first;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = P;
    }
}

void insertProyek(addressPegawai pegawai, addressProyek P) {
    if (pegawai->proyek == nullptr) {
        pegawai->proyek = P;
    } else {
        addressProyek temp = pegawai->proyek;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = P;
    }
}

void hapusProyek(addressPegawai pegawai, const string& namaProyek) {
    if (pegawai->proyek != nullptr) {
        addressProyek temp = pegawai->proyek;
        addressProyek prev = nullptr;
        while (temp != nullptr && temp->namaProyek != namaProyek) {
            prev = temp;
            temp = temp->next;
        }
        if (temp != nullptr) {
            if (prev == nullptr) {
                pegawai->proyek = temp->next;
            } else {
                prev->next = temp->next;
            }
            delete temp;
        }
    }
}

void printListPegawai(const ListPegawai& L) {
    addressPegawai P = L.first;
    while (P != nullptr) {
        cout << "Nama Pegawai: " << P->namaPegawai << ", ID: " << P->idPegawai << endl;
        addressProyek Q = P->proyek;
        if (Q == nullptr) {
            cout << "  Tidak ada proyek.\n";
        } else {
            while (Q != nullptr) {
                cout << "  Nama Proyek: " << Q->namaProyek << ", Durasi: " << Q->durasi << " bulan\n";
                Q = Q->next;
            }
        }
        P = P->next;
        cout << endl;
    }
}

int main() {
    ListPegawai L;
    createListPegawai(L);

    // Tambahkan data pegawai
    addressPegawai p1 = allocatePegawai("Andi", "P001");
    addressPegawai p2 = allocatePegawai("Budi", "P002");
    addressPegawai p3 = allocatePegawai("Citra", "P003");

    insertPegawai(L, p1);
    insertPegawai(L, p2);
    insertPegawai(L, p3);

    // Tambahkan proyek ke pegawai
    insertProyek(p1, allocateProyek("Aplikasi Mobile", 12));
    insertProyek(p2, allocateProyek("Sistem Akuntansi", 8));
    insertProyek(p3, allocateProyek("E-commerce", 10));
    insertProyek(p1, allocateProyek("Analisis Data", 6));

    // Hapus proyek "Aplikasi Mobile" dari Andi
    hapusProyek(p1, "Aplikasi Mobile");

    // Cetak data pegawai da
    cout << "Data Pegawai dan Proyek:\n";
    printListPegawai(L);

    return 0;
}
