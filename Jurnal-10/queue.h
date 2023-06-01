#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED

#include <iostream>
#include <stdio.h>

using namespace std;

typedef struct infotype {
    string food;
    int stock;
};

typedef struct elmQueue *address;

typedef struct elmQueue {
    infotype info;
    address next;
};

typedef struct Queue {
    address Head;
    address Tail;
};

void createQueue_1304212137(Queue &Q);
bool isEmpty_1304212137(Queue Q);
void enQueue_1304212137(Queue &Q, infotype p);
void deQueue_1304212137(Queue &Q, infotype &p);
void print_1304212137(Queue Q);

#endif // QUEUE_H_INCLUDED
