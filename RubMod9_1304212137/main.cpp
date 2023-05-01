#include "stack.h"

void createStack_1304212137(stack& s){
    Top(s) = -1;
}

bool isFull_1304212137(stack S){
    return Top(S) == 9;
}

bool isEmpty_1304212137(stack S){
    return Top(S) == -1;
}

infotype generateInfo_1304212137(string merek, string asal, int total){
    infotype newInfo;
    newInfo.merek = merek;
    newInfo.asal = asal;
    newInfo.total = total;
    return newInfo;
}

void push_1304212137(stack &S, infotype newInfo){
    if(isFull_1304212137(S)){
        cout << "Stack Penuh !!!\n";
    } else {
        Top(S) = Top(S) + 1;
        S.info[Top(S)] = newInfo;
    }
};

infotype pop_1304212137(stack& S){
    infotype temp;
    if(isEmpty_1304212137(S)){
        cout << "Stack kosong";
    } else {
        temp = S.info[Top(S)];
        Top(S) = Top(S) - 1;
        return temp;
    }
}

void printStack_1304212137(stack s) {
    if (isEmpty_1304212137(s)) {
        cout << "Stack kosong" << endl;
    } else {
        cout << "-----------------------" << endl;
        for (int i = Top(s); i >= 0; i--) {
            cout << "Merek: " << s.info[i].merek << " Asal: " << s.info[i].asal << " total: " << s.info[i].total << endl;
        }
        cout << "-----------------------" << endl;
    }
}

int searchInfo_1304212137(stack s, infotype newInfo){
    int i=0, j=0;
    if (isEmpty_1304212137(s)) {
        cout << "Stack kosong" << endl;
    } else {
        i = s.top;
        while(i >= 0){
           if(s.info[i].total < newInfo.total) {
                j++;
           }
            i--;
        }
        return j;
    }
};



int main()
{

     stack S;
     infotype newData;

     createStack_1304212137(S);

     newData = generateInfo_1304212137("Honda", "Jepang", 400);
     push_1304212137(S, newData);

     newData = generateInfo_1304212137("KIA", "Korea", 500);
     push_1304212137(S, newData);

     newData = generateInfo_1304212137("BMW", "Germany", 1000);
     push_1304212137(S, newData);

     newData = generateInfo_1304212137("Mercy", "Germany", 3000);
     push_1304212137(S, newData);

     newData = generateInfo_1304212137("Ferarri", "Italy", 5000);
     push_1304212137(S, newData);

     newData = generateInfo_1304212137("Scania", "Sweden", 7000);
     push_1304212137(S, newData);

     newData = generateInfo_1304212137("Ford", "Amerika", 8000);
     push_1304212137(S, newData);

     newData = generateInfo_1304212137("Toyota", "Jepang", 10000);
     push_1304212137(S, newData);



     stack tempS;
     infotype pop_1304212137Data,insertData;
     int indexTemuan,i,j;

     insertData = generateInfo_1304212137("Aston Martin", "Amerika", 6000);
     createStack_1304212137(tempS);
     indexTemuan = searchInfo_1304212137(S,generateInfo_1304212137("Scania", "Sweden", 7000));

     i = S.top;
     while (i > indexTemuan) {
        pop_1304212137Data = S.info[i];
        push_1304212137(tempS,pop_1304212137Data);
        pop_1304212137(S);
        i--;
     }
     push_1304212137(S, insertData);
     while (!isEmpty_1304212137(tempS)) {
        push_1304212137(S,tempS.info[tempS.top]);
        pop_1304212137(tempS);
     }
     cout << "== MANDIRI 1 - Stack setelah memasukkan data tambahan ==\n";
     printStack_1304212137(S);

    /* TAMBAHKAN KODE PROGRAM SESUAI SOAL NO b YANG DIBERIKAN DI
    BAWAH INI*/

    i = Top(S);

    while (i > indexTemuan) {
        pop_1304212137Data = S.info[i];
        push_1304212137(tempS,pop_1304212137Data);
        pop_1304212137(S);
        i--;
     }

     pop_1304212137(S);
     while (!isEmpty_1304212137(tempS)) {
        push_1304212137(S,tempS.info[tempS.top]);
        pop_1304212137(tempS);
     }

     cout << "== MANDIRI 2 - Stack setelah menghapus data Scania ==\n";
     printStack_1304212137(S);

     return 0;


    }
