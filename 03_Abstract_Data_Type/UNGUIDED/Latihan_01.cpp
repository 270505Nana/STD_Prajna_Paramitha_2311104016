#include <iostream> 
#include <string>
#include <iomanip> 

using namespace std;

// penjelasan
// Struct untuk menyimpan data, struct merupakan kumpulan dari beberapa tipe data, dan didalamnya ada variable : nama, nim, uts, uas, tugas, dan nilai akhir yang disertai dengan tipe datanya.
// Float hitung_nilai_akhir : fungsi untuk menghitung nilai akhirnya, mengambil parameter uts, uas, dan tugas sesuai dengan inputan user.
// Fungsi void input_data_mahasiswa : merupakan fungsi untuk menerima inputan user. Dimulai dari nama, nim, nilai uts, nilai uas, nilai tugas.
// Mahasiswa &mhs : mengirim ref langsung data asli
// Mahasiswa m : mengirimkan data Salinan ke fungsi
// Void tampilkan_data_mahasiswa : untuk menampilkan data mahasiswa yang telah diinputkan. 
// Int main : merupakan fungsi utama. 
// Const int MAX_MAHASISWA = 10 artinya maksimal diisi dengan 10 data mahasiswa tidak bisa lebih.
// Didalam fungsi main berisi perulangan untuk input mahasiswa sampai menyentuh batas limit yaitu 10.


// Struktur untuk menyimpan data mahasiswa
struct Mahasiswa {
    string nama;        // Nama mahasiswa
    string nim;         // Nomor Induk Mahasiswa
    float uts;          // Nilai UTS
    float uas;          // Nilai UAS
    float tugas;        // Nilai Tugas
    float nilai_akhir;  // Nilai akhir (akan dihitung)
};

// Fungsi untuk menghitung nilai akhir
float hitung_nilai_akhir(float uts, float uas, float tugas) {
    return 0.3 * uts + 0.4 * uas + 0.3 * tugas;  // Rumus perhitungan nilai akhir
}

// Fungsi untuk input data mahasiswa
void input_data_mahasiswa(Mahasiswa &mhs) {
    cout << "Masukkan nama mahasiswa: ";
    cin.ignore();                  
    getline(cin, mhs.nama);         // Membaca nama lengkap termasuk spasi
    cout << "Masukkan NIM mahasiswa: ";
    cin >> mhs.nim;
    cout << "Masukkan nilai UTS: ";
    cin >> mhs.uts;
    cout << "Masukkan nilai UAS: ";
    cin >> mhs.uas;
    cout << "Masukkan nilai Tugas: ";
    cin >> mhs.tugas;
    mhs.nilai_akhir = hitung_nilai_akhir(mhs.uts, mhs.uas, mhs.tugas);  // Menghitung nilai akhir
}

// Fungsi untuk menampilkan data mahasiswa
void tampilkan_data_mahasiswa(Mahasiswa mhs[], int jumlah) {
    cout << "\nDaftar Mahasiswa:" << endl;
    cout << "No. | Nama | NIM | UTS | UAS | Tugas | Nilai Akhir" << endl;
    cout << string(60, '-') << endl;  // Garis pisah
    for (int i = 0; i < jumlah; i++) {
        cout << i + 1 << ". | "        // Nomor urut
             << mhs[i].nama << " | "   // Nama mahasiswa
             << mhs[i].nim << " | "    // NIM
             << mhs[i].uts << " | "    // Nilai UTS
             << mhs[i].uas << " | "    // Nilai UAS
             << mhs[i].tugas << " | "  // Nilai Tugas
             << fixed << setprecision(2) << mhs[i].nilai_akhir << endl;  // Nilai akhir dengan 2 desimal
    }
}

// Fungsi utama
int main() {
    const int MAX_MAHASISWA = 10;                  // Maksimum jumlah mahasiswa
    Mahasiswa daftar_mahasiswa[MAX_MAHASISWA];     // Array untuk menyimpan data mahasiswa
    int jumlah_mahasiswa = 0;                      // Jumlah mahasiswa saat ini
    char lanjut;                                   // Untuk menyimpan pilihan user melanjutkan input atau tidak

    do {
        if (jumlah_mahasiswa >= MAX_MAHASISWA) {
            cout << "Batas maksimum mahasiswa telah tercapai." << endl;
            break;  // Keluar dari loop jika sudah mencapai batas maksimum
        }

        cout << "\nMenambahkan data mahasiswa ke-" << jumlah_mahasiswa + 1 << endl;
        input_data_mahasiswa(daftar_mahasiswa[jumlah_mahasiswa]);  // Input data mahasiswa
        jumlah_mahasiswa++;  // Menambah jumlah mahasiswa

        cout << "Apakah Anda ingin menambahkan data mahasiswa lagi? (y/n): ";
        cin >> lanjut;
    } while (lanjut == 'y' || lanjut == 'Y');  // Lanjut jika user memilih 'y' atau 'Y'

    tampilkan_data_mahasiswa(daftar_mahasiswa, jumlah_mahasiswa);  // Menampilkan semua data mahasiswa

    return 0; 
}