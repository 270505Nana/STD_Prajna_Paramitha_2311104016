# include <iostream>

using namespace std;

int main(){
    //fungsi utama
    // array dengan nama bil dengan jumlah elemen 10

    //dalam array bil indeks ke 0 diisi dengan 1
    //dalam array bil indeks ke 1 diisi dengan 4
    //dalam array bil indeks ke 2 diisi dengan 5
    int bil[10];
    bil[0] = 1;
    bil[1] = 4;
    bil[2] = 5;

    cout << bil[0] <<endl;
    cout << bil[1] <<endl;
    cout << bil[2] <<endl;
    // menambahkan nilai pada indeks ke 0 + 1 + 2 = 10
    cout << bil[0] + bil[1] + bil[2] <<endl;
    return 0;
}