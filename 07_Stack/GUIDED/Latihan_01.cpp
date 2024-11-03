#include <iostream>
using namespace std;

string arrayBuku[5];
int maksimal = 5, top = 0;

//isFull
bool isFull(){
    return top == maksimal;
}

//isEmpty
bool isEmpty() {
    return top == 0;
}

// menambahkan elemen
void pushArrayBuku(string  data){
    if(isFull()) {
        cout << "Data telah penuh" << endl;
    } else{
        arrayBuku[top] = data;
        top++;
    }
}

//menghapus elemen dari posisi paling atas
void popArrayBuku(){
    if (isEmpty()){
        cout << "Tidak ada data yang dihapus" << endl;
    }else{
        arrayBuku[top - 1] = "";
        top--;
    }
}

// melihat elemen pada posisi tertentu, gak ngapus
void peekArrayBuku(int posisi){
    if (isEmpty()){
        cout << "Tidak ada data yang bisa dilihat" << endl;
    } else {
        int index = top - posisi;
        if(index >= 0 && index < top){
            cout << "Posisi ke " << posisi << "\nadalah\n" << arrayBuku[index];
        } else {
            cout << "Posisi di luar jangkauan" << endl;
        }
    }
}

// ini buat ngitung ada berapa banyak
int countStack(){
    return top;
}

//
void changeArrayBuku(int posisi, string data){
    int index = top - posisi;
    if (index >= 0 && index < top){
        arrayBuku[index] = data;
    } else {
        cout << "Posisi melebihi data yang ada" << endl;
    }
}

void destroyArrayBuku(){
    for (int i = top - 1; i >= 0; i--){
        arrayBuku[i] = "";
    }
    top = 0;
}

//ngeliat semua elemen
void cetakArrayBuku(){
    if (isEmpty()){
        cout << "Tidak ada data yang dicetak" << endl;
    } else {
        for (int i = top -1; i >= 0; i--){
            cout << arrayBuku[i] <<endl;
        }
    }
}

int main() {
    // masukin data
    pushArrayBuku("kalkulus");
    pushArrayBuku("Struktur Data");
    pushArrayBuku("Matematika Diskrit");
    pushArrayBuku("Dasar Multimedia");
    pushArrayBuku("Inggris");

    //nampilin sebelum diapa apain
    cetakArrayBuku();
    cout << "\n" << endl;

    // ngecek apakah stacknya kosong apa engga
    cout << "Apakah data stack penuh? " <<(isFull() ? "Ya" : "Tidak") << endl;
    cout << "Apakah data stack kosong? " <<(isEmpty() ? "Ya" : "Tidak") << endl;

    peekArrayBuku(2);
    popArrayBuku();

    cout << "Banyak data = " << countStack() << endl;

    // ganti jadi elemen ke 2 diganti ke bahasa jerman
    changeArrayBuku(2, "Bahasa Jerman");
    // nyetak abis diubah
    cetakArrayBuku();
    cout << "\n" << endl;

    // clear stack
    destroyArrayBuku();
    cout << "Top setelah destroy: " << top << endl;
    cetakArrayBuku();

    return 0;
}