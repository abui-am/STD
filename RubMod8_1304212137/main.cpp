#include "CSLL.cpp"

using namespace std;

int main()
{
    listLagu L;
    infotype temp;
    adr tempAdr;

    create_List(L);
    // IF 45, NIM akhir 7 = 13
    for(int i=0;i < 13;i++) {
        cin >> temp.artis;
        cin >> temp.genre;
        cin >> temp.judul;
        cin >> temp.playtime;
        createElemen(temp,tempAdr);
        tambahLagu(L,tempAdr,"awal");
    }
    showSemuaLagu(L);
    showMostPlay(L);
    resetPlaylist(L);
}
