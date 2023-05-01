#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

#include <stdio.h>
#include <iostream>

#define Nil NULL
#define info(P) (P)->info
#define next(P) (P)->next
#define Top(S) ((S).top)

using namespace std;

struct car {
     string merek;
     string asal;
     int total;
};
typedef car infotype;
typedef struct elmStack *address;
struct stack {
     infotype info[9];
     int top;
};
infotype generateInfo_1304212137(string merek, string asal,int total);
void createStack_1304212137(stack &s);
bool isEmpty_1304212137(stack s);
bool isFull_1304212137(stack s);
void push_1304212137(stack &S, infotype newInfo);
infotype pop_1304212137(stack &S);
void printStack_1304212137(stack s);
int searchInfo_1304212137(stack s, infotype newInfo);
#endif // STACK_H_INCLUDED
