# include <iostream>

// 2.(Subprogram prosedur) Tuliskan kode berikut dan jalankan. 
//Masukkan 1 dan 2 pada input. 
//Screenshot kode dan hasilnya, lalu tempelkan pada jawaban.

using namespace std;

void tukar (int *a, int *b){
    //function yang tidak mengembalikan nilai apapun
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int bil1, bil2;

    cout <<"Masukkan bilangan pertama:";
    cin >> bil1;

    cout <<"Masukkan bilangan kedua:";
    cin >>bil2;

    cout <<"Sebelum pertukaran:\n";
    cout <<"Bil 1:" << bil1 << "bil 2 : " <<bil2 << endl;
    tukar (&bil1, &bil2); //penukaran alamat memori dari bil1 dan bil2

    cout <<"Setelah pertukaran: \n";
    cout <<"Bil 1 : " << bil1 << "Bil 2 : "<< bil2 << endl;
    return 0;
}