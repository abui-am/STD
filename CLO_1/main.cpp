#include "LL.cpp"
using namespace std;

int main()
{
    listDouble L;
    adrDLL temp;
    int input, minimal = 0;

    createList(L);
    cout << "Masukan 3 data:" << endl;
    for(int i = 0; i < 3; i++) {
        cout << i+1 << ". ";
        cin >> input;
        alokasi(input,temp);
        insert_last(L,temp);
    }

    show(L);
    minValue(L,minimal);
    cout << "Nilai terkecil " << minimal << endl;

    for(int i = 0; i < 3; i++) {
       delete_last(L,temp);
    }

    show(L);
    return 0;
}
