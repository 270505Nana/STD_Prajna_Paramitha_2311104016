#include <iostream>

using namespace std;

int main()
{
    //codingan TP


    //1.(Input/Output) Tuliskan kode berikut dan jalankan.
    // a) Masukkan nama lengkap anda dan nim anda.
    // b) masukkan nama depan anda dan nim anda.

    /*string nama, nim; //set var nama&nim tipe data string
    cout <<"Siapa nama anda?"; //output pertanyaan
    cin >>nama; //inputan disimpan di var nama
    cout << "Berapa nim anda?";
    cin>>nim; //input disimpan di var nim

    cout<<"Nama saya:"<<nama<<endl; //panggil var nama
    cout<<"NIM saya:"<<nim<<endl; //panggil var nim
    return 0;

    //--------------------------------------------------------------------------------------------------------------------------

    //2.	(Operasi aritmatika).
    //Tuliskan kode berikut dan jalankan.
    int bil1 = 3, bil2 = 4, hasil1; //setting nilai & var
    float bil3 = 3.0, bil4 = 4.0, hasil2;

    hasil1 = bil1 + bil2; //
    cout<<hasil1<<endl;

    hasil1 = bil1 - bil2;
    cout<<hasil1<<endl;

    hasil1 = bil1 * bil2;
    cout<<hasil1<<endl;

    hasil1 = bil1 / bil2; //integer didefinisikan
    cout<<hasil1<<endl;

    hasil1 = bil2 / bil1; //integer didefinisikan
    cout<<hasil1<<endl;

    hasil1 = bil1 % bil2; //modula
    cout<<hasil1<<endl;

    hasil1 = bil2 % bil1; //modula
    cout<<hasil1<<endl;

    hasil1 = bil3 / bil4;
    cout<<hasil2<<endl;
    return 0;

    //--------------------------------------------------------------------------------------------------------------------------

    //3. (Operasi perbandingan)
    int bil1 = 2, bil2 = 3, hasil;
    hasil = bil1 > bil2;
    cout << hasil << endl;

    hasil = bil1 >= bil2;
    cout <<hasil<<endl;

    hasil = bil1 < bil2;
    cout<<hasil<<endl;

    hasil = bil1 <= bil2;
    cout<<hasil<<endl;

    hasil = bil1 == bil2;
    cout<<hasil<<endl;

    hasil = bil1 != bil2;
    cout<<hasil<<endl;

    return 0;

    //--------------------------------------------------------------------------------------------------------------------------

    //4.    (Operasi logika)
    int bil1 = 2, bil2 = 3, hasil;
    hasil = bil1 <= bil2 and bil1 < bil2;
    cout << hasil<<endl;
    hasil = bil1 >= bil2 or bil1 < bil2;
    cout <<hasil<<endl;
    hasil = not (bil1>= bil2) or bil1 < bil2;
    cout <<hasil<<endl;
    return 0;

    //--------------------------------------------------------------------------------------------------------------------------

    //5. Percabangan if else
    int nilai;
    cin >> nilai;
    if (nilai > 80){
        //melakukan pengecekan inputan nilai
        cout <<"A"<<endl;
        //jika nilai lebih besar dari 80 maka A
    }else{
        //jika lebih kecil dari 80, maka bukan A
        cout <<"Bukan A"<<endl;
    }
    return 0;

    //--------------------------------------------------------------------------------------------------------------------------

    //6. Perulangan for-to-do
    int a,b, bilangan;
    //set var dengan tipedata int

    cout<<"Masukkan batas bawah : ";
    //user input bil, dan disimpan di var a
    cin>>a;
    cout <<"Masukkan batas atas : ";
    //user input, disimpan di var b
    cin>>b;

    for (bilangan = a; bilangan <=b; bilangan++){
        cout <<"Bilangan : "<<bilangan<<endl;
    }
    return 0;

    //--------------------------------------------------------------------------------------------------------------------------

    //7. Perulangan while - do
    int bilangan, asli, jumlah;
    //set var
    cout <<"Masukkan bilangan asli:";
    cin>>asli;
    //simpan inputan dalam var asli
    bilangan = 1;
    jumlah = 0;
    //jika bilangan lebih kecil dari inputan yaitu var asli
    //maka bilangan akan di %2
    while (bilangan <= asli){
        if (bilangan % 2 ==0){
            jumlah += bilangan;
        }
        bilangan++;
    }
    cout <<"Jumlah bilangan genap:" <<jumlah<<endl;
    return 0;*/

    //latihan
    //1.Buatlah program yang menerima input-an dua buah bilangan betipe float, kemudian
    //memberikan output-an hasil penjumlahan, pengurangan, perkalian, dan pembagian dari dua
    //bilangan tersebut.

    /*float bil1, bil2, hasil; //setting nilai & var

    //inputan
    cout <<"Masukkan bilangan pertama:";
    cin>>bil1;

    cout <<"Masukkan bilangan kedua:";
    cin>>bil2;

    //proses menghitung sesuai dengan value yg diinputkan
    hasil = bil1 + bil2;
    cout <<"Hasil penjumlahan:" <<hasil<<endl;

    //percabangan, cek angka terbesar
    if (bil1 > bil2){
         hasil = bil1 - bil2;
    cout <<"Hasil pengurangan:" <<hasil<<endl;

    }else{
         hasil = bil2 - bil1;
    cout <<"Hasil pengurangan:" <<hasil<<endl;

    }
    hasil = bil1 * bil2;
    cout <<"Hasil perkalian:" <<hasil<<endl;

    hasil = bil1 / bil2;
    cout <<"Hasil pembagian:" <<hasil<<endl;

    hasil = bil2 / bil1;
    cout <<"Hasil pembagian:" <<hasil<<endl;
    return 0;*/

    //2. Buatlah sebuah program yang menerima masukan angka dan mengeluarkan output nilai
    //angka tersebut dalam bentuk tulisan. Angka yang akan di- input-kan user adalah bilangan bulat
    //positif mulai dari 0 s.d 100

    //jadi nanti inputan disimpan ke arra, terus di cek berdasarkan indexnya menggunakan perulangan. misal 1 = satu

        int angka;
        string array[] = {"", "Satu", "Dua", "Tiga", "Empat", "Lima", "Enam", "Tujuh", "Delapan", "Sembilan", "Sepuluh",
            "sebelas", "dua belas", "tiga belas", "empatbelas", "limabelas", "enambelas", "tujuh belas", "delapan belas",
            "sembilan belas", "dua puluh", "tiga puluh", "empat puluh", "lima puluh", "enam puluh", "tujuh puluh",
            "delapan puluh", "sembilan puluh"};
            //list konversinya
        cout<< "Masukkan angka:";
        cin >>angka;
        if (angka >= 100){
            int leftdigit = angka / 100;
            cout << array[leftdigit] <<"seratus";
            angka -= leftdigit * 100;
        }
        //percabangan
        if (angka > 20){
            int leftdigit = angka / 10;
            //angka paling kiri dijadikan posisi array
            cout <<array [18 + leftdigit] <<""; //untuk angka30- 90
            angka -=leftdigit * 10;
        }
        cout << array[angka]; //untuk satuan *angka paling kanan
        return 0;

    //3.
    /*int a;
    cout << "Inputkan angka:"; //input angka
    cin >> a; //inputan di save

    for (int i = a; i >= 1; i--){
        //perulangan, jadi a di set mjg 1, perulangan berlanjut sampe nilai i lebih kecil dari sama dengan 1
        for (int k =i; k >=1; k--){
          cout <<k<<"";  //value k akan di decrement (pengurangan)
        }
            cout <<" *";
            for (int k=1; k<=i; k++){
                cout <<k<<"";
            }
            cout <<endl;
        }

        cout <<"*\a";
        return 0;*/
}


