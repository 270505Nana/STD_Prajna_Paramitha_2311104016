// nah hasilnya di sini
#include <iostream>
#include "pelajaran.h"

using namespace std;

int main(){

    string namapel = "Struktur data";
    string kodepel = "STD";

    // nah di mainnya tinggal manggil fungsinya aja yg udah dibikin sebelumnya
    pelajaran pel = create_pelajaran (namapel, kodepel);
    tampil_pelajaran(pel);

    return 0;
}
