#include <iostream>


using namespace std;

typedef char infotype;
typedef struct kurung *address;

#define Nil NULL
#define top(S) S.top
#define info(P) P->info
#define next(P) P->next


struct kurung {
    infotype info;
    address next;
};

struct stacks {
    address top;
};

void createStack_1304212137(stacks &S) {
    top(S) = Nil;
}

void createKurung_1304212137(infotype k, address &P){
    P = new kurung;
    info(P) = k;
    next(P) = Nil;
};

void push_1304212137(stacks &S, address P){
    next(P) = top(S);
    top(S) = P;
}

void pop_1304212137(stacks &S, address &P){
    address temp;
    if(top(S) == Nil){
        cout << "Stack kosong!!!" << endl;
    } else {
        P = top(S);
        top(S) = next(top(S));
        next(P) = Nil;
    }
}

bool kurungSetangkup_1304212137(string str) {
    stacks S;
    createStack_1304212137(S);
    for (int i = 0; i < str.length(); i++) {
        char c = str[i];
        if (c == '(' || c == '{' || c == '[') {
            address P;
            createKurung_1304212137(c, P);
            push_1304212137(S, P);
        } else if (c == ')' || c == '}' || c == ']') {
            if (top(S) == Nil) {
                return false;
            }
            address P;
            pop_1304212137(S, P);
            if ((c == ')' && info(P) != '(') || (c == '}' && info(P) != '{') || (c == ']' && info(P) != '[')) {
                return false;
            }
            }
        }
    return top(S) == Nil;
}

string printOutput_1304212137(bool is_true){
    if(is_true){
        return "true";
    }
    else {
        return "false";
    }
}

int main() {
    string str;


    /** Test Example

    str = "()";
    cout << printOutput_1304212137(kurungSetangkup_1304212137(str)) << endl; // Output: true

    str = "(){}[]";
    cout << printOutput_1304212137(kurungSetangkup_1304212137(str)) << endl; // Output: true

    str = "((){{}}[[[]]])";
    cout << printOutput_1304212137(kurungSetangkup_1304212137(str)) << endl; // Output: true

    str = "(){})";
    cout << printOutput_1304212137(kurungSetangkup_1304212137(str)) << endl; // Output: false

    str = "((())";
    cout << printOutput_1304212137(kurungSetangkup_1304212137(str)) << endl; // Output: false

    str = "{{]]";
    cout << printOutput_1304212137(kurungSetangkup_1304212137(str)) << endl; // Output: false

    */

    cin >> str;
    cout << printOutput_1304212137(kurungSetangkup_1304212137(str)) << endl;

    return 0;
}
