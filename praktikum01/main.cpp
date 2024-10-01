#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    // 1.
    //int inp;
    //cin >> inp;
    //buat inputan nilai
    //cout << "nilai = " << inp;
    //buat nampilin nilai inputan sesuai usernya
    //return 0;

    //2.
    /*int W, X, Y; float Z;
    X = 11; Y = 3; W =1;
    Z = (X + Y)/(Y + W);
    //pengolahan angka"nya
    cout << "nilai = " << Z <<endl;
    /*buat nampilin nilai
    return 0;*/

    //3.
    /*double tot_pembelian, diskon;
    cout <<"total pembelian: Rp";
    cin>>tot_pembelian;
    diskon = 0;
    if(tot_pembelian >= 100000)
        diskon = 0.05 * tot_pembelian;
    else
        diskon = 0;
    cout<<"besar diskon = Rp" << diskon;*/

    //4.perulangan yg masukin bilangan
    /*contoh penggunaan do while*/
    /*int I =1;
    int jum;
    cin >> jum;
    do{
        cout <<"baris ke-"<<I + 1<<endl;
        I++;

    }while(I < jum);
    getch();
    return 0;*/

    //5.
    /*char x;
    float y;
    cout << "ukuran variabel char " <<sizeof(x)<<endl;
    cout << "ukuran variabel float " <<sizeof(y)<<endl;
    cout << "ukuran variabel int " <<sizeof(int)<<endl;
    getch();
    return 0;*/

    //6.
    int kode_hari;
    puts("Menentukan hari\n");
    puts("1=Senin 3=Rabu 5=Jumat 7=Minggu ");
    puts("2=Selasa 4=Kamis 6=Sabtu ");
    cin>>kode_hari;
    switch(kode_hari){
    case 1:
        puts("Hari Senin");
        break;
    case 2:
        puts("Hari Selasa");
        break;
    case 3:
        puts("Hari Rabu");
        break;
    case 4:
        puts("Hari Kamis");
        break;
    case 5:
        puts("Hari Jumat");
        break;
    case 6:
        puts("Hari Sabtu");
        break;
    case 7:
        puts("Hari Minggu");
        break;
    default:
        puts("Kode yang anda masukan salah!!!");
        }
        return 0;

}
