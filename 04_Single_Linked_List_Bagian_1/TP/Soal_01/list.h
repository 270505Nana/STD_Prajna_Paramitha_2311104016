// spesifikasi tipe dan primitif -> spesifikasinya
// nama nama method nya apa aja gtu
# include <iostream>
# define first(L) L.first
# define next(P) P -> next
# define info(P) P -> info

// buat misahin 

using namespace std;

typedef int infotype;
typedef struct elmlist *address;

struct elmlist{
    infotype info;
    address next;
};

struct List{
    address first;
};

// implementasi dari procedure createList
void createList (List &L);

// fungsi allocate
address allocate(infotype x); // nanti dia bakal dipanggil di list.cpp

// proses insert dapat menggunkana procedure insert first 
void insertFirst(List &L, address P); //nant dia bakal dipanggil di list.cpp

// buat ngecek apakah elemen berhasil di insertkan maka perlu menampilkan isi listnya dulu
// show data
void printInfo(List L); //nanti dia bakal dipanggil di list.cpp