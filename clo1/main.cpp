#include <iostream>

using namespace std;

int hitungKembalian(int totalbeli, int bayar) {
    return bayar - totalbeli;
}

void hitungPecahan(int change) {
    int pec20k = 0, pec10k = 0, pec5k = 0, pec2k = 0, pec1k = 0;
    while(change > 0) {
        if(change >= 20000) {
            pec20k++;
            change-=20000;
        } else if(change >=10000) {
            pec10k++;
            change-=10000;
        } else if(change>=5000) {
            pec5k++;
            change-=5000;
        } else if(change>=2000) {
            pec2k++;
            change-=2000;
        } else {
            pec1k++;
            change-=1000;
        }
    }

    cout << "Pecahan Rp.20.000,- sebanyak " << pec20k << " buah" << endl;
    cout << "Pecahan Rp.10.000,- sebanyak " << pec10k << " buah" << endl;
    cout << "Pecahan Rp.5.000,- sebanyak " << pec5k << " buah" << endl;
    cout << "Pecahan Rp.2.000,- sebanyak " << pec2k << " buah" << endl;
    cout << "Pecahan Rp.1.000,- sebanyak " << pec1k << " buah" << endl;
}

int main()
{
    int total, paid, change;
    cout << "Total Beli : ";
    cin >> total;
    cout << "Bayar : ";
    cin >> paid;
    change = hitungKembalian(total,paid);
    cout << "Kembalian : " << change << endl;

    hitungPecahan(change);
}
