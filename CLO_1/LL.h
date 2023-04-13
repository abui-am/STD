#ifndef LL_H_INCLUDED
#define LL_H_INCLUDED


#include <stdio.h>
#include <iostream>
#define NIL NULL
#define info(P) (P)->info
#define next(P) (P)->next
#define prev(P) (P)->prev
#define first(L) ((L).First)
#define last(L) ((L).Last)

using namespace std;

typedef int infotype;

typedef struct elementDLL *adrDLL;

struct elementDLL {
    infotype info;
    adrDLL next;
    adrDLL prev;
};


struct listDouble {
    adrDLL First;
    adrDLL Last;
};


#endif // LL_H_INCLUDED
