#ifndef PELAJARAN_H_INCLUDED
#define PELAJARAN_H_INCLUDED
#include <string>

// disini kita setting var dan functionnya
using namespace std;

struct pelajaran{

    string namapel;
    string kodepel;   
};

// settin gnama fungsinya mau apa terus parameter yang dikirim itu mau apa
pelajaran create_pelajaran (string namapel, string kodepel);
void tampil_pelajaran (pelajaran pel);

#endif