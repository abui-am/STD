#include <iostream>
#include "listpasien.cpp"
#include <string>

using namespace std;

int main() {
    List L;
    address P,temp;
    infotype pas;

    // createList_1304212137(L);
    // printList_1304212137(L);

    // pas = newPasien_1304212137("Yura", "320028397202", 30, "demam tinggi, flu");
    // P = newElement_1304212137(pas);
    // insertFirst_1304212137(L,P);

    // pas = newPasien_1304212137("Yuka", "320018397112", 23, "mual");
    // P = newElement_1304212137(pas);
    // insertLast_1304212137(L,P);

    // pas = newPasien_1304212137("Yama", "320021397112", 24, "batuk");
    // P = newElement_1304212137(pas);
    // insertLast_1304212137(L,P);

    // printList_1304212137(L);

    // deleteFirst_1304212137(L, temp);
    // deleteLast_1304212137(L, temp);

    // printList_1304212137(L);

    createList_1304212137(L);
    while(true) {
        // NIM 1304212137 > Ganjil
        cout << "Nama: ";
        cin >> pas.nama;
        if(pas.nama == "-") {
            break;
        }
        cout << "NIK: ";
        cin >> pas.nik;
        cout << "Umur: ";
        cin >> pas.umur;
        cout << "Keluhan: ";
        getline(cin >> ws, pas.keluhan);
        cout << endl;

        P = newElement_1304212137(pas);
        insertLast_1304212137(L,P);
    }

    while(L.First != NULL) {
        deleteLastWithLog_1304212137(L,temp);
        cout << endl;
    }

}

