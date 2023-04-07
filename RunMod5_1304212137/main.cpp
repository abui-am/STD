#include "SLL.cpp"

using namespace std;

int main()
{
    List mList;
    createNewList_1304212137(mList);
    int input = 1, NMasakan, NPorsi;

    while(input != 0) {
        cout << "[SELAMAT DATANG]" << endl;
        cout << "1. Tambah data masakan" << endl;
        cout << "2. Tampilkan semua data masakan" << endl;
        cout << "3. Tampilkan semua data masakan yang masih tersedia (belum habis terjual)" << endl;
        cout << "4. Tampilkan semua data masakan yang paling laku terjual (best seller)" << endl;
        cout << "5. Hapus semua data masakan yang sudah laku terjual" << endl;
        cout << "6. Transaksi" << endl;
        cout << "0. Selesai" << endl << endl;

        cout << "Masukan input: ";
        cin >> input;
        cout << endl;
        if(input == 1) {
            cout << "Masukan jumlah yang akan ditambahkan: ";
            cin >> NMasakan;
            addNElementList_1304212137(mList,NMasakan);
            cout << endl;
        } else if(input == 2){
            showAllFood_1304212137(mList);
        } else if(input == 3){
            showAvailableFood_1304212137(mList);
        } else if(input == 4){
            showBestSeller_1304212137(mList);
        } else if(input == 5){
            deleteAllSoldOut_1304212137(mList);
        } else if(input == 6) {
            cout << "Masukan nomor masakan: ";
            cin >> NMasakan;
            cout << "Masukan nomor porsi: ";
            cin >> NPorsi;
            transaction_1304212137(mList,NMasakan,NPorsi);
        }

        cout << endl;
    };
    return 0;
}
