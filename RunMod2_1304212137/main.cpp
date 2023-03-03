#include <iostream>

using namespace std;

struct Mhs {
    string name;
    string NIM;
    float ipk;
    int semester;
    int kodeunik;
};

int main()
{
    int n = 0;
    cout << "Jumlah data : ";
    cin >> n;
    cout << endl;

    Mhs mahasiswa[n];

    for (int i = 0; i < n; i++ ){
        cout << "Data ke " << i+1 << endl;
        cout << "Nama : ";
        cin >> mahasiswa[i].name;
        cout << "NIM : ";
        cin >> mahasiswa[i].NIM;
        cout << "Ipk : ";
        cin >> mahasiswa[i].ipk;
        cout << "Semester :";
        cin >> mahasiswa[i].semester;
        cout << endl;
    }
    return 0;
}
