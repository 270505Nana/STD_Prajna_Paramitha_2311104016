# include <iostream>

using namespace std;

int kendaraan(int kapasitas_kendaraaan, int jumlah_penumpang){
    // fungsi kendaraan dengan parameter kapasitas_kendaraan, jumlah_penumpang
    int jumlah;
    jumlah = jumlah_penumpang / kapasitas_kendaraaan;
    if(jumlah_penumpang % kapasitas_kendaraaan > 0){
        jumlah ++;
        // jika sisa bagi dari jumlah penumpang dan kapasitas kendaraan 
        // lebih besar dari 0 maka jumlah ++
    }
    return jumlah;
}

int main(){
    int kap_kendaraan, jum_penumpang, banyak_kendaraan;
    //var dgn tipe integer

    cout <<"Masukkan kapasitas kendaraan : ";
    cin >> kap_kendaraan;
    //user input kapasitas kendaraan

    cout<<"Masukkan jumlah penumpang : ";
    cin >> jum_penumpang;
    // user input jumlah penumpangnya

    banyak_kendaraan = kendaraan (kap_kendaraan, jum_penumpang);
    cout <<"Banyak kendaraan yang disewa"<<banyak_kendaraan << endl;
    //banyak kendaraan didapat dari kendaraan diatas yg kita buat

    return 0;
}