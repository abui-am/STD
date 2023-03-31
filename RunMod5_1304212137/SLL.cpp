#include "SLL.h"


#define NIL NULL
#define info(P) (P)->info
#define next(P) (P)->next
#define first(L) ((L).first)



void createNewList(List &L)
{
    first(L) = NIL;
};

void insertLast(List &L, address P)
{
    if (first(L) == NIL)
    {
        first(L) = P;
    }
    else
    {
        address addressBerjalan = first(L);
        while (next(addressBerjalan) != NIL)
        {
            addressBerjalan = next(addressBerjalan);
        }
        next(addressBerjalan) = P;
    }
};

void deleteFirst(List &L, address &P)
{
    P = first(L);
    if (next(first(L)) == NIL)
    {
        first(L) = NIL;
    }
    else
    {
        first(L) = next(first(L));
    }
    next(P) = NIL;
};

void deleteLast(List &L, address &P)
{
    address q = first(L);
    while (next(next(q)) != NIL)
    {
        q = next(q);
    }
    P = next(q);
    next(q) = NIL;
};

void deleteAfter(List &L, address prec, address &P)
{
    P = prec;
    next(prec) = next(P);
    next(P) = NIL;
};

bool empty_l(List mlist){
    return mlist.first == NIL;
};

infotype newMasakan(int no, string nama){
    masakan m;
    m.nama = nama;
    m.nomor = no;
    m.sisaPorsi = S;
    return m;
};

address newElement(infotype m){
    address newEl = new ElmtMsk;
    newEl->info = m;
    newEl->next = NIL;

    return newEl;
};

void addNElementList(List& mList, int N){
    string namaMasakan;
    masakan m;
    int nomor;
    for(int i=0; i<N; i++){
        cout << "Masukan nomor masakan: ";
        cin >> nomor;
        cout << "Masukan nama masakan: ";
        cin >> namaMasakan;
        m = newMasakan(nomor,namaMasakan);
        insertLast(mList,newElement(m));
    }
};

void showAllFood(List mList){
    address M = first(mList);

    if(M == NIL) {
        cout << "Kosong" << endl;
    } else {
        while(M != NIL){
            cout << "Nomor :" << info(M).nomor << endl;
            cout << "Nama :" << info(M).nama << endl;
            cout << "Sisa Porsi :" << info(M).sisaPorsi << endl <<endl;
            M = next(M);
        }
    }
};

void showAvailableFood(List mList){
    address M = first(mList);
    while(M != NIL){
        if(info(M).sisaPorsi > 0) {
            cout << info(M).nama << endl;
        }
        M = next(M);
    }
};

address findMinRemaining(List mList){
    address minRemaining = mList.first;
    address M = mList.first;
    while(M != NIL){
        if(info(M).sisaPorsi < info(minRemaining).sisaPorsi){
            minRemaining = M;
        }
        M = next(M);
    }
    return minRemaining;
};

void showBestSeller(List mList){
    address bs = findMinRemaining(mList);
    cout << "[Best Seller]" << endl;
    cout << "Nomor :" << info(bs).nomor << endl;
    cout << "Nama :" <<info(bs).nama << endl;
    cout << "Sisa Porsi :" << info(bs).sisaPorsi << endl;
};

void deleteAllSoldOut(List& mList){
    address M = first(mList);
    address prec;
    address P;
    int i = 0;
    while(M != NIL) {
        if(M->info.sisaPorsi <= 0){
            if(i==0) {
                deleteFirst(mList,P);
            } else if(next(M) == NIL) {
                deleteLast(mList,P);
            } else{
                deleteAfter(mList,prec,P);
            }
        }
        prec = M;
        i++;
        M = next(M);
    };
};


void transaction(List& mList, int noMasakan, int porsi){
    address M = first(mList);
    bool isFound = false;
    while(M != NIL) {
        if(info(M).nomor == noMasakan) {
            if(info(M).sisaPorsi <= 0) {
                cout << "Sudah habis" << endl;
            };
            info(M).sisaPorsi-=porsi;
            cout << "\nTransaksi Sukses\n";
            isFound = true;
            break;
        }
        M = next(M);
    }
    if(!isFound) {
        cout << "\nNomor tidak valid\n";
    }
}

