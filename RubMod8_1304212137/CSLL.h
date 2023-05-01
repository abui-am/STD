#ifndef CSLL_H_INCLUDED
#define CSLL_H_INCLUDED

#include <stdio.h>
#include <iostream>

#define NIL NULL
#define info(P) (P)->info
#define next(P) (P)->next
#define first(L) ((L).first)

using namespace std;


struct infotype {
    string artis;
    string judul;
    string genre;
    int playtime;
};

typedef struct element *adr;

struct element {
    infotype info;
    adr next;
};

struct listLagu {
    adr first;
};

void create_List(listLagu L);
void createElemen(infotype laguBaru, adr& pLagu);
void insertFirst(listLagu& L, adr pLagu);
void inserLast(listLagu& L, adr pLagu);
void deleteFirst(listLagu& L, adr& pLagu);
void deleteLast(listLagu& L, adr& pLagu);
void showSemuaLagu(listLagu L);
void tambahLagu(listLagu& L, adr pLagu, string posisi);
void showMostPlay(listLagu L);
int countGenre(listLagu L, string genre);
adr cariLagu(listLagu L, string artis, string judul);
void play(listLagu L, string artisStart, string judulStart, string artisEnd, string judulEnd);
void resetPlaylist(listLagu& L);


#endif // CSLL_H_INCLUDED
