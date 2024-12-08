# include <iostream>
# include <string>
using namespace std;

// soal
// 2. Sistem Manajemen Buku Perpustakaan
// Gunakan Multi Linked List untuk menyimpan data anggota perpustakaan 
// dan daftar buku yang dipinjam.
// - Setiap anggota memiliki data: Nama Anggota dan ID Anggota.
// - Setiap buku memiliki data: Judul Buku dan Tanggal Pengembalian.
// Instruksi:
// 1. Masukkan data anggota berikut:
//  - Anggota 1: Nama = "Rani", ID = "A001".
//  - Anggota 2: Nama = "Dito", ID = "A002".
//  - Anggota 3: Nama = "Vina", ID = "A003".
// 2. Tambahkan buku yang dipinjam:
// - Buku 1: Judul = "Pemrograman C++", Pengembalian = "01/12/2024"(Untuk Rani).
// - Buku 2: Judul = "Algoritma Pemrograman", Pengembalian = "15/12/2024" (Untuk
// Dito).
// 3. Tambahkan buku baru:
//  - Buku 3: Judul = "Struktur Data", Pengembalian = "10/12/2024" (Untuk Rani).
// 4. Hapus anggota Dito beserta buku yang dipinjam.
// 5. Tampilkan seluruh data anggota dan buku yang dipinjam. 

// jadi dia ada node yg nyimpan id 1, id 2.
// dn dari id 1 2 itu menurun kebwah nodenya menyimpan data nama, buku yg dipinjam

struct bukuDipinjam{
    string judulbuku;
    string tanggalpengembalian;
    bukuDipinjam* next;
};

//struct
struct anggotaPerpustakaan {
    string NamaAnggota;
    string id;
    bukuDipinjam* buku;
    anggotaPerpustakaan* next;
};


typedef anggotaPerpustakaan* addressanggotaPerpustakaan;
typedef bukuDipinjam* adressbukuDipinjam;

struct ListAnggota{
    addressanggotaPerpustakaan first;
};

void createListAnggota(ListAnggota& L){
    L.first = nullptr;
    //ngebikin listnya, listnya masih kosong. 
    // L itu semacem inisial ajah, klo mau diganti jadi P bisa aja
}

addressanggotaPerpustakaan allocateAnggota(const string& nama, const string& id) {
    addressanggotaPerpustakaan P = new anggotaPerpustakaan;
    P->NamaAnggota = nama;
    P->id = id;
    P->buku = nullptr;
    P->next = nullptr;
    return P;
}

adressbukuDipinjam allocateBuku(const string& judulbuku, string tanggalpengembalian) {
    adressbukuDipinjam P = new bukuDipinjam; // membuat objek untuk struct bukupinjam
    P->judulbuku = judulbuku; 
    // nama objeknya kan p trus nge get judul buku, untuk disimpan di judul buku (yang udah dibuat di stcruct sebelumnya)
    P->tanggalpengembalian = tanggalpengembalian;
    // sama kaya judul buku, dia juga nge get untuk disimpan
    P->next = nullptr;
    //next pointer null
    return P;
}

void insertAnggota(ListAnggota& L, addressanggotaPerpustakaan P) {
    // P dan L hanya sebagai inisial aja sebenernya
    // memanggil Listanggota : soalnya kita mau menambahkan datanya
    // manggil address soalnya kita perlu address buat nodenya
    if (L.first == nullptr) { 
        //kalau L.first artinya listnya kosong maka first dari listnya akan diupdate menjadi P
        L.first = P;
    } else {
        // kalau sudah ada isinya ya maka tetap aja 
        addressanggotaPerpustakaan temp = L.first;
        while (temp->next != nullptr) {
            temp = temp->next;
            // ini klo pointer nextnya ga kosong
        }
        // klo next pointernya kosong maka diisi dengan si P data yg kita tambah
        temp->next = P;
    }
}

void insertBuku(addressanggotaPerpustakaan anggota, adressbukuDipinjam P) {
    // anggota dan P juga hanya semacam inisial 
    if (anggota->buku == nullptr) {
        // ini kalau anggota buku yg dipinjamnya kosong maka langsung diupdate jadi P
        // data yang kita masukkan
        anggota->buku = P;
    } else {
        // tapi kalo ga kosong 
        adressbukuDipinjam temp = anggota->buku;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = P;
    }
}

void hapusBuku(addressanggotaPerpustakaan anggota, const string& judulbuku) {
    if (anggota->buku != nullptr) {
        // ini kalau anggotanya pinjem buku (buku != nullptr artinya ada yg dipinjam)
        adressbukuDipinjam temp = anggota->buku;
        adressbukuDipinjam prev = nullptr;
        while (temp != nullptr && temp->judulbuku != judulbuku) {
            prev = temp;
            temp = temp->next;
        }
        if (temp != nullptr) {
            if (prev == nullptr) {
                anggota->buku = temp->next;
            } else {
                prev->next = temp->next;
            }
            delete temp;
        }
    }
}

void hapusSemuaBuku(adressbukuDipinjam& buku) {
    while (buku != nullptr) {
        adressbukuDipinjam temp = buku;
        buku = buku->next;
        delete temp;
    }
}

void hapusAnggota(ListAnggota& L, const string& id) {
    if (L.first != nullptr) {
        addressanggotaPerpustakaan temp = L.first;
        addressanggotaPerpustakaan prev = nullptr;
        while (temp != nullptr && temp->id != id) {
            prev = temp;
            temp = temp->next;
        }
        if (temp != nullptr) {
            if (prev == nullptr) {
                L.first = temp->next;
            } else {
                prev->next = temp->next;
            }
            hapusSemuaBuku(temp->buku);
            delete temp;
        }
    }
}


void printListAnggota(const ListAnggota& L) {
    // L hanya inisial
    addressanggotaPerpustakaan P = L.first;
    while (P != nullptr) {
        cout << "Nama: " << P->NamaAnggota << ", ID: " << P->id << endl;
        adressbukuDipinjam Q = P->buku;
        if (Q == nullptr) {
            cout << "  Tidak ada buku yang dipinjam, silahkan pinjam buku.\n";
        } else {
            while (Q != nullptr) {
                cout << "  Judul buku yang dipinjam: " << Q->judulbuku << ", Tanggal pengembalian: " << Q->tanggalpengembalian << " bulan\n";
                Q = Q->next;
            }
        }
        P = P->next;
        cout << endl;
    }
}

int main() {
    ListAnggota L;
    createListAnggota(L);

    addressanggotaPerpustakaan A1 = allocateAnggota("Rani", "A001");
    addressanggotaPerpustakaan A2 = allocateAnggota("Dito", "A002");
    addressanggotaPerpustakaan A3 = allocateAnggota("Vina", "A003");

    insertAnggota(L, A1);
    insertAnggota(L, A2);
    insertAnggota(L, A3);

    insertBuku(A1, allocateBuku("Pemrograman C++", "01/12/2024"));
    insertBuku(A2, allocateBuku("Algoritma pemrograman", "15/12/2024"));
    insertBuku(A1, allocateBuku("Struktur Data", "10/12/2024"));
    
 // Hapus anggota Dito
    hapusAnggota(L, "A002");

    cout << "Data Anggota perpustakaan dan buku yang dipinjam:\n";
    printListAnggota(L);

    return 0;
}
