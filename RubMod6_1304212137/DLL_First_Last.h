#ifndef DLL_FIRST_LAST_H_INCLUDED
#define DLL_FIRST_LAST_H_INCLUDED


#include <stdio.h>
#include <iostream>
#define NIL NULL
#define info(P) (P)->info
#define next(P) (P)->next
#define prev(P) (P)->prev
#define first(L) ((L).First)
#define last(L) ((L).Last)

using namespace std;

struct buku {
    int ID;
    string judul;
    string pengarang;
    int tahun;
};

typedef buku infotype;

typedef struct elmList *address;

struct elmList {
    infotype info;
    address next;
    address prev;
};

struct List {
    address First;
    address Last;
};

void buatList_1304212137(List& L);

void buatElemen_1304212137(address P, int ID, string judul, string pengarang, int tahun);

bool listKosong_1304212137(List L);

void insertFirst_1304212137(List& L, address P);

void insertLast_1304212137(List& L, address P);

void insertAfter_1304212137(List& L, address P, address Prec);

void tambahData_1304212137(List& L, int ID, string judul, string pengarang, int tahun);

void deleteFirst_1304212137(List& L, address &P);

void deleteLast_1304212137(List& L, address P);

void deleteAfter(List& L, address P, address Prec);

void hapusData_1304212137(List& L, int id);

void lihatList_1304212137(List L);

bool cariID_1304212137(List L, int id);

int FrekRangeTahun_1304212137(List L, int t_awal, int t_akhir);

#endif // DLL_FIRST_LAST_H_INCLUDED
