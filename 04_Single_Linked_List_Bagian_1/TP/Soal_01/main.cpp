#include <iostream>
#include "list.h" //include file list.h

using namespace std;

int main(){
    // 1. panggil create list
    //pendeklarasian sesuai dgn yg kita buat di list
    //jadi p -> menyimpan alamat
    // x -> data
    List L;
    address P;
    infotype x;

    createList(L);

    // 2. buat syntax tanya angka pertama yg mau diinputkan user ke list
    cout <<"Masukkan angka pertama yang akan dimasukkan:" <<endl;
    cin >> x;

    // 3. panggil fungsi allocate agar data tsb dijadikan elemen
    P = allocate(x);

    // 4. panggil procedure insert first yg dibuat
    insertFirst(L, P);

    // 5. panggil procedure show info untuk cek apakah angka tsb berhasil menjadi elemen
    cout <<"Isi list:";
    //menampilkan data dengan parameter L : datanya
    printInfo(L);

    // 6. buat kembali syntaxt no 2 s/d no 5 untuk data angka kedua dari user -> untuk input data
    cout <<"Masukkan angka kedua yang akan dimasukkan:"<<endl;
    cin>> x;
    P = allocate(x);
    insertFirst(L,P);
     cout <<"Isi list:";
    //menampilkan data dengan parameter L : datanya
    printInfo(L);

    // 7. buat kembali syntax no 2 s/d no 5 untuk data angka ketiga dari user -> untuk input data
    cout <<"Masukkan angka ketiga yang akan dimasukkan:"<<endl;
    cin>> x;
    P = allocate(x);
    insertFirst(L,P);
     cout <<"Isi list:";
    //menampilkan data dengan parameter L : datanya
    printInfo(L);
    return 0;
}