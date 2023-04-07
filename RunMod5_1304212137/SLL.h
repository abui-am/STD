#ifndef SLL_H_INCLUDED
#define SLL_H_INCLUDED
#include <stdio.h>
#include <iostream>

using namespace std;

const int S = 50;

struct masakan {
    int nomor;
    string nama;
    int sisaPorsi;
};

typedef masakan infotype;

typedef struct ElmtMsk *address;

struct ElmtMsk {
    infotype info;
    address next;
};

struct List {
    address first;
};



void createNewList_1304212137(List& L);
void insertLast_1304212137(List &L, address P);
void deleteFirst_1304212137(List &L, address &P);
void deleteLast(List &L, address &P);
void deleteAfter(List& L, address prec, address& P);

bool empty_1304212137(List mList);
infotype newMasakan_1304212137(int no, string nama);
address newElement_1304212137(infotype m);
void addNElementList_1304212137(List& mList, int N);
void showAllFood_1304212137(List mList);
void showAvailableFood_1304212137(List mList);
address findMinRemaining_1304212137(List mList);
address findMinRemaining_1304212137(List mList);
void showBestSeller_1304212137(List mList);
void deleteAllSoldOut_1304212137(List& mList);

#endif // SLL_H_INCLUDED
