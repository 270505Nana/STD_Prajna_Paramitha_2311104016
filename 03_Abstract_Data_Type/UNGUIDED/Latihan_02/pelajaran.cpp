// pelajaran.cpp
#include <iostream>
#include "pelajaran.h"
// jangan lupa add dulu, klo engga nanti error
using namespace std;

pelajaran create_pelajaran(string namapel, string kodepel) {
    // manggil struct yg udah dibuat terus manggil create pelajaran dan parameternya
    pelajaran pel;
    pel.namapel = namapel; //obj
    pel.kodepel = kodepel;
    return pel;
}

void tampil_pelajaran(pelajaran pel) {
    // disini penjabaran dari fungsi yang udah dibuat
    // jaid kaya dipisah, di .h cuma spesifikasi klo disini dia dipakai.
    cout << "nama pelajaran : " << pel.namapel << endl;
    cout << "nilai : " << pel.kodepel << endl;
}