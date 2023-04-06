#include "DLL_First_Last.h"
#include "DLL_First_Last.cpp"

int main()
{
    List L;
    address P;
    address temp;

    // buatList(L);
    // buatElemen(P,72,"judul","karang1",789);
    // insertFirst(L,P);
    // buatElemen(P,1,"judul2","karang2",222);
    // insertLast (L,P);
    // buatElemen(P,7,"judul3","karang3",333);
    // temp = first(L);
    // insertAfter(L,P,temp);
    // lihatList(L);

    buatList(L);
    tambahData(L,72," judul ","karang1 ",789);
    tambahData(L,1," judul2 ","karang2 ",222);
    tambahData(L,7," judul3 ","karang3 ",333);
    lihatList(L);
    cout << "Frekuensi buku antara tahun tertentu " << FrekRangeTahun(L,100,333) << endl;
    hapusData(L, 72);
    lihatList(L);

    return 0;
}
