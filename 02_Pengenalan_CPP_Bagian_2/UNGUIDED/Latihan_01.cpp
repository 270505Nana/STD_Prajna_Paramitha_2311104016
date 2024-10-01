#include <iostream>
using namespace std;

int main() {
    int n;                         // Variabel untuk menyimpan jumlah elemen array
    cout << "Masukkan jumlah elemen array: ";
    cin >> n;                      // Input jumlah elemen array dari pengguna

    int dataArray[n];              // Deklarasi array biasa dengan ukuran n

    // Memasukkan data ke dalam array
    cout << "Masukkan elemen array: ";
    // Input setiap elemen array dari pengguna
    for (int i = 0; i < n; i++) {
        cin >> dataArray[i];        
    }

    // Menampilkan Data Array
    cout << "Data Array : ";
    for (int i = 0; i < n; i++) {
        cout << dataArray[i] << " ";  // Menampilkan setiap elemen array
    }
    cout << endl;

    // Menampilkan nomor genap
    cout << "Nomor Genap : ";
    for (int i = 0; i < n; i++) {
        if (dataArray[i] % 2 == 0) {   // Mengecek jika elemen array adalah genap
            cout << dataArray[i] << ", ";  // Menampilkan elemen genap
        }
    }
    cout << endl;

    // Menampilkan nomor ganjil
    cout << "Nomor Ganjil : ";
    for (int i = 0; i < n; i++) {
        if (dataArray[i] % 2 != 0) {   // Mengecek jika elemen array adalah ganjil
            cout << dataArray[i] << ", ";  // Menampilkan elemen ganjil
        }
    }
    cout << endl;

    return 0;
}
