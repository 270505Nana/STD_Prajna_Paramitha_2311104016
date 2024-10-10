// 07/10/24
# include <iostream>
# include <conio.h>
# include <stdlib.h>

using namespace std;

struct mahasiswa{ // untuk menyimpan
    //  struct kumpulan dari beberapa tipe data
    char nim[10];
    int nilai1, nilai2;
};

void inputMhs(mahasiswa &m);
// mengirim ref langsung ke data asli
float rata2 (mahasiswa m);
// mengirimkan data salinan ke fungsi
// nama M bebas terserah kita, mau a atau yang lainnya

int main(){
    mahasiswa (mhs);
    inputMhs(mhs);
    cout<<"rata-rata = "<<rata2(mhs);
    return 0;
}

void inputMhs(mahasiswa &m){
    cout <<"input nim = ";
    cin>>m.nim;
    cout <<"input nilai 1= ";
    cin>>m.nilai1;
    cout <<"input nilai 2 = ";
    cin>>m.nilai2;
}

float rata2(mahasiswa m){
    return(m.nilai1 + m.nilai2) / 2.0;
    // membagi dengan 2.0 untuk pembagian float
}