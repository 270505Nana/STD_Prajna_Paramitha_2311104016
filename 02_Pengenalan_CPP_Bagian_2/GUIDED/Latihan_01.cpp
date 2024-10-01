// Array 1 d -> 1 baris aja
# include <iostream> 
# include <conio.h>
# include <stdlib.h>

#define MAX 5

using namespace std;

//int main(){
    // 1. pointer 
    // int x,y;
    // int *px;
    // x = 87;
    // px = &x;
    // y = *px;

    // cout << "Alamat x = " << &x <<endl;
    // cout << "isi px = " << px <<endl;
    // cout << "isi x = " << x <<endl;
    // cout << "nilai yg dituju px = " << *px <<endl;
    // cout << "nilai y = " << y <<endl;
    // getch();
    // return 0;

    // 2. pointer dan array
    // int i,j;
    // float nilai_total, rata_rata;
    // float nilai[MAX];

    // // tipe array 2d, maks 5 sesuai dengan yg udah kita set
    // static int nilai_tahun[MAX][MAX] = 
    // {
    //     {0,2,2,0,0},
    //     {0,1,1,1,0},
    //     {0,3,3,3,0},
    //     {4,4,0,0,4},
    //     {5,0,0,0,5}
    // };

    // for (i = 0; i<MAX; i++){
    //     cout <<"masukkan nilai ke- : "<< i + 1<<endl;
    //     cin>>nilai[i];
    // }
    // cout << "\ndata nilai siswa : \n";

    // // nilai yg disimpan dimasukkan ke array 1d

    // // menampilkan array satu dimensi
    // for (i=0; i<MAX; i++)
    // cout<<"nilai k-"<<i + 1<< "=" <<nilai[i]<<endl;
    // cout <<"\n nilai tahunan: \n";

    // for (i=0; i<MAX; i++){
    //     for (j=0; j<MAX; j++)
    //         cout <<nilai_tahun[i][j];
    //     cout<<"\n";
    // }
    // getch();
    // return 0;

    // array 1 d -> nilai siswa
    // array 2d -> nilai tahunan


    // 3. pointer dan string gak dipraktekin
    // 4. fungsi
    int maks3(int a, int b, int c); //mendeklarasikan prototype fungsi

    int main(){
        system ("cls");
        int x,y,z;
        cout <<"masukkan nilai bilangan ke -1 = ";
        cin >> x;
        
        cout <<"masukkan nilai bilangan ke -2 = ";
        cin >> y;

        cout <<"masukkan nilai bilangan ke -3 = ";
        cin >> z;

        cout <<"nilai maksimumnya adalah = " << maks3 (x,y,z);

        getche();
        return 0;
    }
    // badan fungsi
    int maks3 (int a, int b, int c){
        // deklarasi var lokal dalam fungsi

        int temp_max = a;
        if (b>temp_max)
            temp_max = b ;
        if (c>temp_max)
            temp_max = c ;
        return (temp_max);
    }

    // 5.prosedur
    
//}
    // 1 d
    // nilai[4] = 50;
    // cin << nilai[4];