#ifndef SINGLELL_H_INCLUDED
#define SINGLELL_H_INCLUDED

#include <iostream>
#include <string>
using namespace std;

struct pasien {
    string nama;
    string nik;
    int umur;
    string keluhan;
};

typedef pasien infotype;

typedef struct elmList *address;

struct elmList {
    infotype info;
    address next;
};

struct List {
    address First;
};

void createList_1304212137(List& L);

infotype newPasien_1304212137(string nama, string nik, int umur, string keluhan);

address newElement_1304212137(infotype dataBaru);

void insertFirst_1304212137(List& L, address P);

void insertLast_1304212137(List& L, address P);

void deleteFirst_1304212137(List& L, address& P);

void deleteLast_1304212137(List& L, address& P);

void printList_1304212137(List& L);

#endif // SINGLELL_H_INCLUDED

