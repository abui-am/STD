#include <iostream>

using namespace std;

int nMax = 15;

void A(int t[]) {
    int i = 1;
    while(i <= nMax) {
        cin >> t[i];
        i++;
    }
}


void B(char t[]) {
    int i = 1;
    while(i <= nMax) {
        cin >> t[i];
        i++;
    }
}

void C(int t1[], int t2[], char t3[]){
    int i = 1;
    while(i != 0) {
        cout << t3[t2[i]];
        i = t1[i];
    }
}


int main()
{
    char v[nMax];
    int r[nMax];
    int q[nMax];
    A(r);
    A(q);
    B(v);
    C(r,q,v);
    return 0;
}
