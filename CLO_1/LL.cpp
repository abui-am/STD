#include "LL.H"

void createList(listDouble& L) {
    first(L) = NIL;
    last(L) = NIL;
}

void alokasi(infotype new_data, adrDLL& x) {
     x = new elementDLL;
     info(x) = new_data;
     next(x) = NIL;
     prev(x) = NIL;
}

void show (listDouble L) {
    adrDLL P;
    P = first(L);
    while(P != NIL) {
        cout << info(P) << endl;
        P = next(P);
    }
}

void insert_last(listDouble& L, adrDLL newAddr){
    if(first(L) == NIL) {
        first(L) = newAddr;
        last(L) = newAddr;
    } else {
        next(last(L)) = newAddr;
        prev(newAddr) = last(L);
        last(L) = newAddr;
    }
};

void delete_last(listDouble& L, adrDLL newAddr){
    newAddr = last(L);
    if(next(first(L)) == NIL) {
        first(L) = NIL;
        last(L) = NIL;
    } else {
        last(L) = prev(last(L));
        prev(newAddr) = NIL;
        next(last(L)) = NIL;
    }
};

int minValue(listDouble& L, infotype& x){
    adrDLL P = first(L);
    x = info(P);
    while (P != NIL) {
        if(info(P) < x) {
            x = info(P);
        }
        P = next(P);
    }
}
