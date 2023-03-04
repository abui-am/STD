#include <iostream>
#include <iomanip>

using namespace std;

struct Mhs {
    string name;
    string NIM;
    float ipk;
    int semester;
    int kodeunik;
};

void show_program_studi(string NIM) {
    char id_prodi = NIM[1];
    if(id_prodi == '1'){
        cout << "Prodi Anda adalah Art of Coffee";
    } else if(id_prodi == '2'){
        cout << "Prodi Anda adalah Creative Content";
    } else if(id_prodi == '3'){
        cout << "Prodi Anda adalah Mental Health";
    } else {
        cout << "Prodi dengan ID Anda tidak tersedia";
    }
    cout << endl;
}

void show_cumlaude_status(float ipk, int semester) {
    if(semester <= 8 && ipk > 3.5) {
        cout << "CUMLAUDE" << endl;
    }
}

void show_mahasiswa_berprestasi_status(int kodeunik) {
    bool is_prime = true;
     // 0 and 1 are not prime numbers
      if (kodeunik == 0 || kodeunik == 1) {
        is_prime = false;
      }

      // loop to check if n is prime
      for (int i = 2; i <= kodeunik/2; ++i) {
        if (kodeunik % i == 0) {
          is_prime = false;
          break;
        }
      }

    if(is_prime) {
        cout << "MAHASISWA BERPRESTASI" << endl;
    }
}

void show_summary(Mhs mahasiswa[], int n) {
    int iMaks = 1;
    float total = 0;
    int ac = 0;
    int cc = 0;
    int mh = 0;

    for(int i = 0; i < n; i++){
        if(mahasiswa[i].ipk > mahasiswa[iMaks].ipk) {
            iMaks = i;
        }
        total += mahasiswa[i].ipk;

        // Count Mahasiswa per prodi
        char id_prodi = mahasiswa[i].NIM[1];
        if(id_prodi == '1'){
           ac++;
        }else if(id_prodi == '2'){
           cc++;
        }else if(id_prodi == '3'){
           mh++;
        }
    }

    cout << "IPK terbesar didapatkan oleh " << mahasiswa[iMaks].name << endl;
    cout << "IPK Rata-rata : " << setprecision(2) << fixed << total / n << endl;
    cout << "Program Studi Art of Coffee : " << ac << endl;
    cout << "Program Studi Creative Content : " << cc << endl;
    cout << "Program Studi Mental Health : " << mh << endl;
}

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
        show_program_studi(mahasiswa[i].NIM);
        cout << "Ipk : ";
        cin >> mahasiswa[i].ipk;
        cout << "Semester : ";
        cin >> mahasiswa[i].semester;
        show_cumlaude_status(mahasiswa[i].ipk, mahasiswa[i].semester);
        cout << "Kode unik : ";
        cin >> mahasiswa[i].kodeunik;
        show_mahasiswa_berprestasi_status(mahasiswa[i].kodeunik);
        cout << endl;
    }

    cout << "..........INPUT DATA SELESAI.............." << endl;
    show_summary(mahasiswa, n);

    return 0;
}
