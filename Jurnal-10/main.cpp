#include "queue.cpp"

using namespace std;

int main()
{
    cout << "Selamat datang pada praktikum Struktur Data CII2B4" << endl;
    cout << "Nama  : Abuidillah Adjie Muliadi" << endl;
    cout << "NIM   : 1304212137" << endl;
    cout << "Kelas : IF-45-01.2PJJ2022\n" << endl;

    infotype temp;

    Queue Q;
    createQueue_1304212137(Q);

    for(int i = 5; i > 0; i--){
        if(i == 1) {
            cout << "Data kelima : ";
        } else if (i == 2) {
            cout << "Data keempat : ";
        } else if (i == 3) {
            cout << "Data ketiga : ";
        } else if (i == 4) {
            cout << "Data kedua : ";
        } else {
            cout << "Data pertama : ";
        }
        cin >> temp.food;
        cin >> temp.stock;
        cout << endl;
        enQueue(Q,temp);
        print(Q);
    }
    return 0;
}
