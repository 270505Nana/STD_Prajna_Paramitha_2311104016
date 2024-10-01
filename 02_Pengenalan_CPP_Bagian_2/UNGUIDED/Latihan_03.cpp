#include <iostream>
using namespace std;

int main() { 
    int n; 
    
    //input jumlah elemen array
    cout << "Masukkan jumlah elemen array: "; 
    cin >> n; //menyimpan inputan ke var n

    int arr[n]; // pendeklarasian array arr dengan ukuran n -> sesuai dengan inputan usernya
    
    //input elemen array dari pengguna
    cout << "Masukkan elemen array: ";
    for (int i = 0; i < n; i++) { // Perulangan untuk membaca setiap elemen array
        cin >> arr[i]; //menyimpan inputan ke arr[i]
    }

    // Menampilkan menu
    int pilihan; // var untk nyimpen inputan pilihan menu
    do {
        cout << "\nPilih Operasi:\n"; 
        cout << "1. Cari Nilai Maksimum\n";
        cout << "2. Cari Nilai Minimum\n";
        cout << "3. Hitung Rata-rata\n";
        cout << "4. Keluar\n";
        cout << "Masukkan pilihan (1-4): "; //user input pilihan
        cin >> pilihan; //simpan inputan

        switch (pilihan) {
            case 1: { // Jika pilihan 1
                // Mencari nilai maksimum
                int maks = arr[0]; // Menginisialisasi maks dengan elemen pertama
                for (int i = 1; i < n; i++) { // looping untuk memeriksa elemen lainnya
                    if (arr[i] > maks) { // Jika elemen saat ini lebih besar dari maks
                        maks = arr[i]; // ganti nilai maks
                    }
                }
                cout << "Nilai maksimum: " << maks << endl;
                break;
            }
            case 2: {
                // Mencari nilai minimum
                int min = arr[0]; // Menginisialisasi min dengan elemen pertama
                for (int i = 1; i < n; i++) { // Perulangan untuk memeriksa elemen lainnya
                    if (arr[i] < min) { // Jika elemen saat ini lebih kecil dari min
                        min = arr[i];
                    }
                }
                cout << "Nilai minimum: " << min << endl; // Menampilkan nilai minimum
                break;
            }
            case 3: {
                // Menghitung rata-rata
                int sum = 0; // Menginisialisasi sum untuk menyimpan total
                for (int i = 0; i < n; i++) { // Perulangan untuk menjumlahkan elemen
                    sum += arr[i];
                }
                double rataRata = static_cast<double>(sum) / n; // Menghitung rata-rata
                cout << "Nilai rata-rata: " << rataRata << endl;
                break;
            }
            case 4:
                cout << "Keluar dari program.\n";
                break;
            default:
                cout << "Pilihan tidak valid! Silakan coba lagi.\n";
                break; // Keluar
        }

    } while (pilihan != 4); // looping sampai user exit

    return 0;
}
