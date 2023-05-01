#include "LL.H"

void create_list_1304212137(listDouble& L) {
    first(L) = NIL;
    last(L) = NIL;
}

void alokasi_1304212137(infotype new_data, adrDLL& x) {
     x = new elementDLL;
     info(x) = new_data;
     next(x) = NIL;
     prev(x) = NIL;
}

void show_1304212137(listDouble L) {
    adrDLL P;
    P = first(L);
    while(P != NIL) {
        cout << info(P) << endl;
        P = next(P);
    }
}

void insert_last_1304212137(listDouble& L, adrDLL newAddr){
    if(first(L) == NIL) {
        first(L) = newAddr;
        last(L) = newAddr;
    } else {
        next(last(L)) = newAddr;
        prev(newAddr) = last(L);
        last(L) = newAddr;
    }
};

void delete_last_1304212137(listDouble& L, adrDLL newAddr){
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

void min_1304212137(listDouble& L, infotype& x){
    adrDLL P = first(L);
    x = info(P);
    while (P != NIL) {
        if(info(P) < x) {
            x = info(P);
        }
        P = next(P);
    }
}
