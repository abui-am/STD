#include "DLL_First_Last.h"
#include "DLL_First_Last.cpp"

int main()
{
    List L;
    address P;
    address temp;

    // buatList_1304212137(L);
    // buatElemen_1304212137(P,72,"judul","karang1",789);
    // insertFirst_1304212137(L,P);
    // buatElemen_1304212137(P,1,"judul2","karang2",222);
    // insertLast_1304212137 (L,P);
    // buatElemen_1304212137(P,7,"judul3","karang3",333);
    // temp = first(L);
    // insertAfter_1304212137(L,P,temp);
    // lihatList_1304212137(L);

    buatList_1304212137(L);
    tambahData_1304212137(L,72," judul ","karang1 ",789);
    tambahData_1304212137(L,1," judul2 ","karang2 ",222);
    tambahData_1304212137(L,7," judul3 ","karang3 ",333);
    lihatList_1304212137(L);
    cout << "Frekuensi buku antara tahun tertentu " << FrekRangeTahun_1304212137(L,100,333) << endl;
    hapusData_1304212137(L, 72);
    lihatList_1304212137(L);

    return 0;
}
