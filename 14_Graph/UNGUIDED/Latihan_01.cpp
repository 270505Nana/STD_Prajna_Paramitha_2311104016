// soal
// Buatlah program graph dengan menggunakan inputan user untuk menghitung jarak dari sebuah kota ke kota lainnya.  
// Output Program  
// Silakan masukan jumlah simpul : 2  
// Silakan masukan nama simpul  
// Simpul 1 : BALI  
// Simpul 2 : PALU  
// Silakan masukan bobot antar simpul  
// BALI --> BALI = 0  
// BALI --> PALU = 3  
// PALU --> BALI = 4  
// PALU --> PALU = 0  

#include <iostream>
#include <vector>
#include <string>
#include <limits>

using namespace std;

int main() {
    int n; // Jumlah simpul
    cout << "Silakan masukan jumlah simpul: ";
    cin >> n;
    
    // Menyimpan nama simpul (kota)
    vector<string> kota(n);
    cout << "Silakan masukan nama simpul\n";
    for (int i = 0; i < n; ++i) {
        cout << "Simpul " << i + 1 << " : ";
        cin >> kota[i];
    }

    // Matriks bobot antar simpul
    vector<vector<int>> jarak(n, vector<int>(n, 0));

    // Input bobot antar simpul
    cout << "Silakan masukan bobot antar simpul\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << kota[i] << " --> " << kota[j] << " = ";
            cin >> jarak[i][j];
        }
    }

    return 0;
}
