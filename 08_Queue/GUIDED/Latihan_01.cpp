# include<iostream>

using namespace std;

//penginialisasian
const int maksimalQueue = 5; // maksimal antrian
int front = 0; //penanda antrian
int back = 0;//penanda
string queueTeller[5]; //fungsi pengecekan

bool isFull()
{
    //pengecekan antrian penuh
    if(back == maksimalQueue)
    {
        return true;//-1
    }else{
        return false;
    }
}

bool isEmpty(){
    //antirn kosong atau tidak
    if(back == 0 ){
        return true;
    }else{
        return false;
    }
}
void enqueueAntrian(string data){
    //fungsi menambahkan antrian
    if(isFull()){
        cout <<"Antrian penuh"<<endl;
    }else{
        if(isEmpty()){
            //kondisi ketika queue kosong
            queueTeller[0] = data;
            front++;
            back++;
        }else{
            queueTeller[back] = data;
            back++;
        }
    }
}

void dequeueAntrian(){
    //fungsi untuk mengurangu antrian
    if(isEmpty()){
        cout <<"Antrian kosong" <<endl;
    }else{
        for(int i= 0; i < back -1; i++) //pindahkan elemen kedepan
        {
            queueTeller[i]= queueTeller[i+1];
        }
        queueTeller[back - 1] = "";//kosongkan elemen terakhir
        back--;
    }
}

int countQueue(){
    //fungsi untuk menghitung banyak antrian
    return back;
}

void clearQueue(){
    //fungsi untuk menghapus semua antrian
    if(isEmpty()){
        cout<<"Antrian kosong"<<endl;
    }else{
        // kalo ga kosong maka proses penghapusan semua antrian
        for(int i = 0; i < back; i++){
            queueTeller[i] = "";
        }
        back = 0;
        front = 0;
    }
}

void viewQueue(){
    //fungsi untuk melihat antrian
    cout <<"Data antrian teller:" <<endl;
    for(int i = 0; i < maksimalQueue; i++){
        if(queueTeller[i] != ""){
            cout << i + 1 << "." << queueTeller[i]<<endl;
        }else{
            cout << i + 1 << ". (kosong)" << endl;
        }
    }
}

int main(){
    enqueueAntrian("Andi"); //nambahin
    enqueueAntrian("Maya"); //nambahin
    viewQueue(); //liat
    cout <<"Jumlah antrian: " << countQueue() <<endl; //ngitung
    dequeueAntrian(); //ngeluarin, delete first
    viewQueue();
    cout <<"Jumlah antrian: " << countQueue() <<endl;
    clearQueue();
    viewQueue();
    cout <<"Jumlah antrian: " << countQueue() <<endl;
    return 0;
}