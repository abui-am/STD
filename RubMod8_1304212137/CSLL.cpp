#include "CSLL.h"

void create_List(listLagu L){
    first(L) = NIL;
};

void createElemen(infotype laguBaru, adr& pLagu){
    pLagu = new element;
    info(pLagu) = laguBaru;
    next(pLagu) = NIL;
};

void insertFirst(listLagu &L, adr pLagu){
    adr x;
    if(L.first != NIL) {
        x = first(L);
        while(next(x) != NIL){
            x = next(x);
        }
        next(x) = pLagu;
        next(pLagu) = first(L);
        first(L) = pLagu;
    }else{
        first(L) = pLagu;
        next(pLagu) = first(L);
    }
};
void insertLast(listLagu& L, adr pLagu){
    if(L.first != NIL){
        adr x = first(L);
        while(next(x) != NIL){
            x = next(x);
        }
        next(x) = pLagu;
        next(pLagu) = first(L);
    } else {
        first(L) = pLagu;
        next(pLagu) = first(L);
    }
};
void deleteFirst(listLagu& L, adr& pLagu){
    adr x;
    if(first(L) == NIL){
        cout << "List Kosong";
    } else if(next(first(L)) == first(L)){
        pLagu = first(L);
        first(L) = NIL;
    } else {
        pLagu = first(L);
        x = first(L);
        while (next(x) != first(L)){
            x = next(x);
        }
        first(L) = next(pLagu);
        next(x) = first(L);
        next(pLagu) = NIL;

    }
};
void deleteLast(listLagu& L, adr& pLagu){
    if (first(L) == NIL) {
        cout << "List Kosong" << endl;
    } else if (next(first(L)) == first(L)) {
        pLagu = first(L);
        first(L) = NIL;
    } else {
        adr X = first(L);
        while (next(next(X)) != first(L)) {
            X = next(X);
        }
        pLagu = next(X);
        next(X) = first(L);
        next(pLagu) = NIL;
    }
};
void showSemuaLagu(listLagu L){
    if (first(L) != NIL) {
        adr P = first(L);
        do {
            cout << "Artis: " << info(P).artis << endl;
            cout << "Judul: " << info(P).judul << endl;
            cout << "Genre: " << info(P).genre << endl;
            cout << "Play Time: " << info(P).playtime << endl << endl;
            P = next(P);
        } while (P != first(L));
    } else {
        cout << "List Kosong" << endl;
    }
};

void tambahLagu(listLagu &L, adr pLagu, string posisi) {
    if (posisi == "awal") {
        insertFirst(L, pLagu);
    } else {
        insertLast(L, pLagu);
    }
}

void showMostPlay(listLagu L) {
    adr Max = first(L);
    adr P = next(Max);

    if (Max == NIL) {
        cout << "List Kosong" << endl;
        return;
    }

    while (P != NIL) {
        if (info(P).playtime > info(Max).playtime) {
            Max = P;
        }
        P = next(P);
    }

    cout << "Artis: " << info(Max).artis << endl;
    cout << "Judul: " << info(Max).judul << endl;
}

adr cariLagu(listLagu L, string artis, string judul) {
    adr P = first(L);
    if (P != NIL) {
        do {
            if (info(P).artis == artis && info(P).judul == judul) {
                return P;
            }
            P = next(P);
        } while (P != first(L));
    }
    return NIL;
}


void resetPlaylist(listLagu &L) {
    adr P = first(L);
    while (P != NULL) {
        adr Q = P;
        P = next(P);
        delete Q;
    }
    first(L) = NULL;
}

