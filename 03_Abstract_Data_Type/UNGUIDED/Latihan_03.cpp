#include <iostream>
using namespace std;

const int SIZE = 3;

// Fungsi untuk menampilkan isi sebuah array integer 2D
void tampilkanArray(int arr[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

// Fungsi untuk menukarkan isi dari 2 array integer 2D pada posisi tertentu
void tukarElemenArray(int arr1[SIZE][SIZE], int arr2[SIZE][SIZE], int baris, int kolom) {
    int temp = arr1[baris][kolom];
    arr1[baris][kolom] = arr2[baris][kolom];
    arr2[baris][kolom] = temp;
}

// Fungsi untuk menukarkan isi dari variabel yang ditunjuk oleh 2 buah pointer
void tukarPointer(int* ptr1, int* ptr2) {
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main() {
    // Inisialisasi 2 buah array 2D integer berukuran 3x3
    int array1[SIZE][SIZE] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int array2[SIZE][SIZE] = {{10, 11, 12}, {13, 14, 15}, {16, 17, 18}};

    // Inisialisasi 2 buah pointer integer
    int a = 100, b = 200;
    int *ptr1 = &a, *ptr2 = &b;

    cout << "Array 1 awal:" << endl;
    tampilkanArray(array1);

    cout << "Array 2 awal:" << endl;
    tampilkanArray(array2);

    // Menukarkan elemen pada posisi [1][1]
    tukarElemenArray(array1, array2, 1, 1);

    cout << "Array 1 setelah pertukaran:" << endl;
    tampilkanArray(array1);

    cout << "Array 2 setelah pertukaran:" << endl;
    tampilkanArray(array2);

    cout << "Nilai pointer awal: *ptr1 = " << *ptr1 << ", *ptr2 = " << *ptr2 << endl;

    // Menukarkan nilai yang ditunjuk oleh pointer
    tukarPointer(ptr1, ptr2);

    cout << "Nilai pointer setelah pertukaran: *ptr1 = " << *ptr1 << ", *ptr2 = " << *ptr2 << endl;

    return 0;
}