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

void buatList(List& L);

void buatElemen(address P, int ID, string judul, string pengarang, int tahun);

bool listKosong(List L);

void insertFirst(List& L, address P);

void insertLast(List& L, address P);

void insertAfter(List& L, address P, address Prec);

void tambahData(List& L, int ID, string judul, string pengarang, int tahun);

void deleteFirst(List& L, address &P);

void deleteLast(List& L, address P);

void deleteAfter(List& L, address P, address Prec);

void hapusData(List& L, int id);

void lihatList(List L);

bool cariID(List L, int id);

int FrekRangeTahun(List L, int t_awal, int t_akhir);

#endif // DLL_FIRST_LAST_H_INCLUDED
