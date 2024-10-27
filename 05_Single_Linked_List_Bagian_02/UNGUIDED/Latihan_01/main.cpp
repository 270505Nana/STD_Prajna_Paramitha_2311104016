# include <iostream>
# include "list.h"

using namespace std;

int main(){

    List L;
    address P1, P2, P3, P4, P5 = NULL;

    createList(L);
    P1 = allocate(2);
    insertFirst(L,P1);
    P2 = allocate(0);
    insertFirst(L,P2);
    P3 = allocate(8);
    insertFirst(L,P3);
    P4 = allocate(12);
    insertFirst(L,P4);
    P5 = allocate(9);
    insertFirst(L,P5);
    
    cout << "List isi data dalam list:" <<endl;
    printInfo(L);

    address result = findElm(L, 8);
    if (result != NULL) {
        cout << "Element ditemukan: " << info(result) << endl;
    } else {
        cout << "Element tidak ditemukan" << endl;
    }

     // menghitunng
    int total = SumAllElements(L);
    cout << "total info dari kelima elemen adalah: " << total <<endl;

    return 0;
}