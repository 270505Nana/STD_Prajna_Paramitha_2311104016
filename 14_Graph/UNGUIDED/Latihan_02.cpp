// soal
// 2.	Buatlah sebuah program C++ untuk merepresentasikan graf tidak berarah menggunakan adjacency matrix. Program harus dapat:
// •	Menerima input jumlah simpul dan jumlah sisi.
// •	Menerima input pasangan simpul yang terhubung oleh sisi.
// •	Menampilkan adjacency matrix dari graf tersebut.

// Input Contoh:
// Masukkan jumlah simpul: 4  
// Masukkan jumlah sisi: 4  
// Masukkan pasangan simpul:  
// 1 2  
// 1 3  
// 2 4  
// 3 4  

// Output Contoh:
// Adjacency Matrix:  
// 0 1 1 0  
// 1 0 0 1  
// 1 0 0 1  
// 0 1 1 0  


#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;  // n = jumlah simpul, m = jumlah sisi

    // Input jumlah simpul dan sisi
    cout << "Masukkan jumlah simpul: ";
    cin >> n;
    cout << "Masukkan jumlah sisi: ";
    cin >> m;

    // Membuat adjacency matrix dengan ukuran n x n
    vector<vector<int>> adjMatrix(n, vector<int>(n, 0));

    // Input pasangan simpul yang terhubung oleh sisi
    cout << "Masukkan pasangan simpul: " << endl;
    for (int i = 0; i < m; ++i) {
        int u, v;
        cin >> u >> v;

        // note: simpul dimulai dari 1, jadi indeks menguranginya 1
        adjMatrix[u - 1][v - 1] = 1;
        adjMatrix[v - 1][u - 1] = 1;  // Karena graf tidak berarah, sisi dari u ke v dan v ke u harus isi
    }

    // Menampilkan adjacency matrix
    cout << "Adjacency Matrix: " << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            //loop sebanyak si data yang kita masukin berapa simpul, dan sisi juga datanya
            cout << adjMatrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
