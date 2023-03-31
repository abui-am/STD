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



void createNewList(List& L);
void insertLast(List &L, address P);
void deleteFirst(List &L, address &P);
void deleteLast(List &L, address &P);
void deleteAfter(List& L, address prec, address& P);

bool empty_l(List mList);
infotype newMasakan(int no, string nama);
address newElement(infotype m);
void addNElementList(List& mList, int N);
void showAllFood(List mList);
void showAvailableFood(List mList);
address findMinRemaining(List mList);
address findMinRemaining(List mList);
void showBestSeller(List mList);
void deleteAllSoldOut(List& mList);

#endif // SLL_H_INCLUDED
