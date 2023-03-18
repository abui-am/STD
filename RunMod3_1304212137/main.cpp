#include <iostream>
#include "lemari.cpp"

using namespace std;

int main()
{
    int i;
    lemari lem;
    lem.maks = 8;
    lem.no_laci = -1;

    tambahData_1304212137(lem, 6);
    lihatData_1304212137(lem);
    tambahData_1304212137(lem, 4);
    lihatData_1304212137(lem);
    tambahData_1304212137(lem, 8);
    lihatData_1304212137(lem);
    tambahData_1304212137(lem, 2);
    lihatData_1304212137(lem);
    cout << endl;

    i = cariData_1304212137(lem, 8);
    cout << i << endl;
    i = cariData_1304212137(lem, 6);
    cout << i << endl;

    reversed_view_1304212137(lem);
    tambahData_1304212137(lem, 5);
    reversed_view_1304212137(lem);
    cout << endl;
    lihatData_1304212137(lem);
    delete_data_1304212137(lem);
    lihatData_1304212137(lem);
}
