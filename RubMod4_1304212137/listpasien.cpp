#include "singleLL.h"

void createList_1304212137(List &L) {
    L.First = NULL;
}

infotype newPasien_1304212137(string nama, string nik, int umur, string keluhan) {
    infotype pas;

    pas.nama = nama;
    pas.nik = nik;
    pas.umur = umur;
    pas.keluhan = keluhan;

    return pas;
}


address newElement_1304212137(infotype dataBaru) {
    address P = new elmList;
    P->info = dataBaru;
    P->next = NULL;

    return P;
}

void insertFirst_1304212137(List& L, address P) {
    if(L.First == NULL) {
        L.First = P;
    } else {
        P->next = L.First;
        L.First = P;
    }
}

void deleteFirst_1304212137(List& L, address &P) {
    P = L.First;
    if(L.First->next == NULL) {
        L.First = NULL;
    } else {
        L.First = L.First->next;
    }

    P->next = NULL;
}

void printPasien_1304212137(address P) {
    cout << "Nama Pasien: " << P->info.nama << endl;
    cout << "NIK Pasien: " << P->info.nik << endl;
    cout << "Umur: " << P->info.umur << endl;
    cout << "Keluhan: " << P->info.keluhan << endl;
}

void printList_1304212137(List& L) {
    address P;
    int i;
    if (L.First == NULL) {
        cout << "Kosong" << endl;
    } else{
        i = 1;
        P = L.First;
        while(P != NULL) {
            cout << i << endl;
            printPasien_1304212137(P);
            P = P->next;
            i++;
        }
    }
}

void insertLast_1304212137(List& L, address P) {

    if(L.First == NULL) {
        L.First = P;
    } else {
        address last = L.First;
        // Iterate
        while(last->next != NULL) {
            last = last->next;
        }
        last->next = P;
    }
}

void deleteLast_1304212137(List& L,address &P) {
    if(L.First == NULL) {
        return ;
    } else if(L.First->next == NULL){
        L.First = NULL;
    } else {
        P = L.First;
        // Iterate to second last
        while(P->next->next != NULL) {
            P = P->next;
        }
        P->next = NULL;
    }
}

void deleteLastWithLog_1304212137(List& L,address &P) {
    if(L.First == NULL) {
        return ;
    } else if(L.First->next == NULL){
        cout << "Deleting..." << endl;
        printPasien_1304212137(L.First);
        L.First = NULL;
    } else {
        P = L.First;
        // Iterate to second last
        while(P->next->next != NULL) {
            P = P->next;
        }
        cout << "Deleting..." << endl;
        printPasien_1304212137(P->next);
        P->next = NULL;
    }
}

