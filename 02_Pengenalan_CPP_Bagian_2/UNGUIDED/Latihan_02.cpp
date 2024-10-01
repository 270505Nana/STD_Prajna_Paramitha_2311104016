#include <iostream> 
using namespace std; 

int main() {
    int x, y, z; // Deklarasi variabel x, y, z untuk menyimpan ukuran array di setiap dimensi

    // Meminta input ukuran array dari user
    cout << "Masukkan ukuran dimensi pertama (x): ";
    cin >> x; // Menyimpan input dari pengguna untuk ukuran dimensi pertama (x)
    cout << "Masukkan ukuran dimensi kedua (y): ";
    cin >> y; // Menyimpan input dari pengguna untuk ukuran dimensi kedua (y)
    cout << "Masukkan ukuran dimensi ketiga (z): ";
    cin >> z; // Menyimpan input dari pengguna untuk ukuran dimensi ketiga (z)

    // Deklarasi array tiga dimensi dengan ukuran yang diinputkan oleh user
    int array3D[x][y][z]; // Array 3D dengan ukuran x, y, z (ditentukan dari input pengguna)

    // Meminta input nilai untuk setiap elemen array
    cout << "Masukkan elemen array 3D: " << endl;
    for (int i = 0; i < x; i++) { // Perulangan pertama untuk dimensi x
        for (int j = 0; j < y; j++) { // Perulangan kedua untuk dimensi y
            for (int k = 0; k < z; k++) { // Perulangan ketiga untuk dimensi z
                // Menampilkan posisi elemen yang sedang diminta, contohnya "Elemen [0][0][0]"
                cout << "Elemen [" << i << "][" << j << "][" << k << "] : ";
                cin >> array3D[i][j][k]; // Input nilai elemen array pada posisi [i][j][k]
            }
        }
    }

    // Menampilkan nilai array 3D
    cout << "\nNilai array 3D: " << endl; // Menampilkan pesan untuk memulai penampilan nilai array
    for (int i = 0; i < x; i++) { // Perulangan pertama untuk dimensi x
        for (int j = 0; j < y; j++) { // Perulangan kedua untuk dimensi y
            for (int k = 0; k < z; k++) { // Perulangan ketiga untuk dimensi z
                // Menampilkan nilai setiap elemen array dengan format posisi dan nilainya
                // Misalnya: "Elemen [0][0][0] = 1"
                cout << "Elemen [" << i << "][" << j << "][" << k << "] = " << array3D[i][j][k] << endl;
            }
        }
    }

    return 0;
}
