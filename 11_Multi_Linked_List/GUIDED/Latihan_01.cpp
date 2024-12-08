# include <iostream>
# include <string>
using namespace std;
 
// Struktur mahasiswa
struct Mahasiswa{
    string nama;
    string nim;
    char jenis_kelamin;
    float ipk;
};

typedef Mahasiswa infotype;
typedef struct ElmList *address;

struct ElmList {
    infotype info;
    address next; //Pointer ke elemen berikutnya
};

struct List{
    address first; // menyimpan pointer ke elemen head
};

// membuat list kosong dengan pointer first
void createList(List &L){
    L.first = nullptr;
}

//membuat elemen(node) baru pd list
address allocate(infotype data){
    address P = new ElmList;
    P -> info = data;
    P -> next = nullptr;
    return P;
}

//menambah elemen di awal
void insertFirst(List &L, address P){
    if(L.first == nullptr){
        L.first = P;
    }else{
        P -> next = L.first;
        L.first = P;
    }
}

//menambahkan elemen di akhir
void insertLast(List &L, address P){
    if(L.first == nullptr){
        L.first = P;
    }else{
        address Q = L.first;
        while (Q -> next != nullptr){
            Q = Q->next;
        }
        Q -> next = P;
    }
}

// menambahkan elemen setelah elemen tertentu
void insertAfter(address prec, address P){
    if(prec != nullptr){
        P -> next = prec -> next;
        prec -> next = P;
    }
}

//menampilkan isi list
void printList (const List &L){
    address P = L.first;
    while(P != nullptr){
        cout <<"Nama : " << P->info.nama <<endl;
        cout <<"NIM : " << P->info.nim <<endl;
        cout <<"L/P : " << P->info.jenis_kelamin <<endl;
        cout <<"IPK : " << P->info.ipk <<endl;
        cout << endl;
        P = P->next;
    }
}

int main(){
    List L;
    createList(L);

    //membuat data mahasiswa
    infotype m1 = {"Ali","01",'L',3.3};
    infotype m2 = {"Bobi","02",'L',3.35};
    infotype m3 = {"Cindy","03",'P',3.7};
    infotype m4 = {"Danu","04",'L',3.89};
    infotype m5 = {"Nana","05",'P',3.8};
    infotype m6 = {"Meilani","06",'P',3.7};
    infotype m7 = {"Putri","07",'P',3.5};
    infotype m8 = {"Nopi","08",'P',3.38};

    // ALOKASI MEMORI
    address p1 = allocate(m1);
    address p2 = allocate(m2);
    address p3 = allocate(m3);
    address p4 = allocate(m4);
    address p5 = allocate(m5);
    address p6 = allocate(m6);
    address p7 = allocate(m7);
    address p8 = allocate(m8);

    //memasukkan elemen ke list
    insertFirst(L,p1);
    insertLast(L,p2);
    insertLast(L,p4);
    insertAfter(p2,p3);
    insertLast(L,p5);
    insertLast(L,p6);
    insertLast(L,p7);
    insertLast(L,p8);

    // cetak isi list
    cout << "Coba insert first, last, dan after \n" << endl;
    printList(L);

    return 0;
}