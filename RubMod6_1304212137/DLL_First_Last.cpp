#include "DLL_First_Last.h"

void buatList(List& L) {
    first(L) = NIL;
    last(L) = NIL;
}


void buatElemen(address P, int ID, string judul, string pengarang, int tahun){

    info(P).ID = ID;
    info(P).judul = judul;
    info(P).pengarang = pengarang;
    info(P).tahun = tahun;
    next(P) = NIL;
    prev(P) = NIL;
};

void insertLast(List& L, address P){
    if(first(L) == NIL) {
        first(L) = P;
        last(L) = P;
    } else {
        next(last(L)) = P;
        prev(P) = last(L);
        last(L) = P;
    }
};

void insertAfter(List& L, address P, address Prec){
    next(P) = next(Prec);
    prev(next(P)) = P;
    next(Prec) = P;
    prev(P) = Prec;
};

void deleteFirst(List& L, address &P){
    if(next(first(L)) == NIL) {
        first(L) = NIL;
        last(L) = NIL;
    } else {
        P = first(L);
        first(L) = next(first(L));
        prev(P) = NIL;
        prev(first(L)) = NIL;
    }
};

void deleteAfter(List& L, address P, address Prec){
    P = next(Prec);
    next(Prec) = next(P);
    prev(next(P)) = Prec;
    next(P) = NIL;
    prev(P) = NIL;
};

bool listKosong(List L) {
    return first(L) == NIL;
};

void lihatList(List L){
    address P = first(L);
    while (P != NIL) {
        cout << info(P).ID << info(P).judul << info(P).pengarang << info(P).tahun << endl;
        P = next(P);
    }
};

void insertFirst(List& L, address P){
  if(listKosong(L)) {
    first(L) = P;
    last(L) = P;
  } else {
    next(P) = first(L);
    prev(first(L)) = P;
    first(L) = P;
  }
};


void tambahData(List& L, int ID, string judul, string pengarang, int tahun){
    address P = new elmList;;
    buatElemen(P,ID,judul,pengarang,tahun);
    insertLast(L,P);
};

void deleteLast(List& L, address P){
    P = last(L);
    if(next(first(L)) = NIL) {
        first(L) = NIL;
        last(L) = NIL;
    } else {
        last(L) = prev(last(L));
        prev(P) = NIL;
        next(last(L)) = NIL;
    }
};

bool cariID(List L, int id){
    address P;
    while(next(P) != NIL){
        if(info(P).ID == id){
            return true;
        }
        P = next(P);
    }
    return false;
};

void hapusData(List& L, int id){
    address P = first(L);
    if(listKosong(L)) {
        return;
    } else {
        while(next(P) != NIL){
            if(info(P).ID == id){
                if(prev(P) == NIL) {
                    deleteFirst(L,P);
                } else if(next(P) == NIL){
                    deleteLast(L,P);
                } else {
                    deleteAfter(L,P,prev(P));
                }
            }
            P = next(P);
        }
    }
};

int FrekRangeTahun(List L, int t_awal, int t_akhir) {
    int count = 0;
    address P = first(L);

    while (P != NIL) {
        if (info(P).tahun >= t_awal && info(P).tahun <= t_akhir) {
            count++;
        }
        P = next(P);
    }

    return count;
}
