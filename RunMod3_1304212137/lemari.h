#ifndef LEMARI_H_INCLUDED
#define LEMARI_H_INCLUDED


#endif // LEMARI_H_INCLUDED


const int nMax = 50;
struct lemari {
    int baju[nMax];
    int maks;
    int no_laci;
};

void tambahData_1304212137(lemari &C, int x);
void lihatData_1304212137 (lemari C);
int cariData_1304212137 (lemari C, int x);
void reversed_view(lemari C);
void delete_data(lemari &C);
