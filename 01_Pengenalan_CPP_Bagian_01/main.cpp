#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int b = 27;
    int c = 60;
    int *pA = nullptr; 
    // Jadi disini kita memanggil value dari var a
    int *pB = nullptr;
    // Jadi disini kita memanggil value dari var b
    int *pC = nullptr;
    // Jadi disini kita memanggil value dari var c
    pA = &a;

    cout <<"Nilai dari a adalah : " << a << endl;
    cout <<"Lokasi memori var a adalah : " << &a << endl;
    cout <<"--------------------------------------"<< endl;
    cout <<"Nilai dari b adalah : " << b << endl;
    cout <<"Lokasi memori var b adalah : " << &b << endl;
    cout <<"--------------------------------------"<< endl;
    cout <<"Nilai dari c adalah : " << c << endl;
    cout <<"lokasi memori var c adalah : " << &c << endl;
    // cout <<"--------------------------------------"<< endl;
    // cout <<"Nilai dari pointer pA adalah : " << pA << endl;
    // cout <<"Nilai dari pointer pB adalah : " << pB << endl;
    // cout <<"Nilai dari pointer pC adalah : " << pC << endl;
    cout <<"--------------------------------------"<< endl;
    
    // pA = &a;
    cout <<"Nilai dari A adalah : " << a << endl;
    cout <<"Nilai dari B adalah : " << b << endl;
    cout <<"Nilai dari C adalah : " << c << endl;
    cout <<"Nilai dari pointer pA adalah : " << pA << endl;
    cout <<"Nilai dari pointer pB adalah : " << pB << endl;
    cout <<"Nilai dari pointer pC adalah : " << pC << endl;
    // Artinya var pA diisi dengan lokasi memori var b
    // Menampilkan output nilai yg kita panggil, dari var a
    // dan dari var pointernya, kalau dirun maka dia itu akan 0
    return 0;
}