// LIST.H itu isinya apa : 
// spesifikasi tipe dan primitif -> spesifikasinya
// nama nama method nya apa aja gtu
# include <iostream>
# define first(L) L.first
# define next(P) P -> next
# define info(P) P -> info

using namespace std;

typedef int infotype;
typedef struct elmlist *address;
// Type infotype : int
// Type address : pointer to ElmList


// Type ElmList <
// info : infotype
// next : address
// >
struct elmlist{
    infotype info;
    address next;
};

// Type List : < First : address >
struct List{
    address first;
};

// prosedur createlist
void createList (List &L);

// fungsi alokasi( x : infotype ) : address
address allocate(infotype x);

// prosedur dealokasi( in/out P : address )
// prosedur pake void
void dealokasi(List* &P);

// prosedur insertFirst( in/out L : List, in P : address )
void insertFirst(List &L, address P); 

// fungsi findElm( L : List, x : infotype ) : address
address findElm(List L, infotype x);

// prosedur printInfo( in L : List )
void printInfo(List L);

int SumAllElements(List L);