#include "LL.cpp"
using namespace std;

int main()
{
    listDouble L;
    adrDLL temp;
    int input, minimal = 0;

    create_list_1304212137(L);
    cout << "Masukan 3 data:" << endl;
    for(int i = 0; i < 3; i++) {
        cout << i+1 << ". ";
        cin >> input;
        alokasi_1304212137(input,temp);
        insert_last_1304212137(L,temp);
    }

    show_1304212137(L);
    min_1304212137(L,minimal);
    cout << "Nilai terkecil " << minimal << endl;

    for(int i = 0; i < 3; i++) {
       delete_last_1304212137(L,temp);
    }

    show_1304212137(L);
    return 0;
}
