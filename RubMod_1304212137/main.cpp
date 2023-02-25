#include <iostream>

using namespace std;

const int nMax = 10;

struct Himpunan {
    int anggota[nMax];
    int panjang;
};

bool anggotaHimpunan(Himpunan himp, int bil) {
    bool found;
    int i = 0;

    while(i <= himp.panjang && !found) {
        found = bil == himp.anggota[i];
        i++;
    }

    return found;
}

void inputAnggotaHimpunan(Himpunan &himp) {
    int bilangan;
    himp.panjang = -1;
    cin >> bilangan;
    while (himp.panjang < nMax - 1 && !anggotaHimpunan(himp,bilangan)) {
         himp.panjang++;
         himp.anggota[himp.panjang] = bilangan;
         cin >> bilangan;
    }
}

Himpunan irisan(Himpunan himp1, Himpunan himp2) {
    Himpunan intersect;
    int i,j;

    intersect.panjang = -1;
    i = 0;
    do {
        j = 0;
        do {
            if(himp1.anggota[i] == himp2.anggota[j]) {
                intersect.panjang++;
                intersect.anggota[intersect.panjang] = himp1.anggota[i];
            }
            j++;
        } while(j <= himp2.panjang);
        i++;
    } while(i <= himp1.panjang);
    return intersect;
}

void printHimp(Himpunan himp){
    int i = 0;
    do {
        cout << himp.anggota[i];
        i++;
    } while(i <= himp.panjang);
    cout << " ";
}

int main()
{
    Himpunan set1,set2,set3;
    cout << "Anggota himpunan 1: ";
    inputAnggotaHimpunan(set1);
    cout << "Anggota himpunan 2: ";
    inputAnggotaHimpunan(set2);

    printHimp(set1);
    printHimp(set2);

    set3 = irisan(set1,set2);
    printHimp(set3);

    return 0;
}
