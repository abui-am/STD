#include <iostream>
#include "lemari.h"

using namespace std;

void tambahData_1304212137(lemari &C, int x) {
    C.no_laci++;
    if(C.no_laci % 2 == 0 && C.no_laci > 0) {
        C.baju[C.no_laci] = 0;
    } else {
        C.baju[C.no_laci] = x;
    };


};

void lihatData_1304212137(lemari C) {

    for(int i = 0; i <= C.no_laci; i++) {
        cout << C.baju[i] << " ";
    }
    cout << endl;
};

int cariData_1304212137(lemari C, int x) {
    if (C.no_laci == -1) return -1;

    for(int i = 0;i <= C.no_laci;i++) {
        if(C.baju[i] == x) {
            return i;
        }
    }

    return -1;
};

void reversed_view_1304212137(lemari C) {
    for(int i=C.no_laci; i >= 0; i--) {
        cout << C.baju[i] << " ";
    }
    cout << endl;
}


void delete_data_1304212137(lemari &C) {
    C.baju[C.no_laci] = 0;
    C.no_laci--;
}
