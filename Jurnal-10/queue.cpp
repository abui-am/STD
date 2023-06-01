#include "queue.h"

void createQueue_1304212137(Queue &Q){
    Q.Head = NULL;
    Q.Tail = NULL;
};


bool isEmpty_1304212137(Queue Q){
    return Q.Head == NULL && Q.Tail == NULL;
};

void enQueue(Queue &Q, infotype p){
    address a = new elmQueue;
    a->info = p;
    a->next = NULL;

    if(isEmpty_1304212137(Q)) {
        Q.Head = a;
        Q.Tail = a;
    } else {
        Q.Tail->next = a;
        Q.Tail = a;
    }
};

void deQueue(Queue &Q, infotype &p){
     address q;
    if(isEmpty_1304212137(Q)) {
        cout << "Queue kosong" << endl;
    } else if (Q.Tail = Q.Head) {
        Q.Tail = NULL;
        Q.Head = NULL;
    } else {
        p = Q.Head->info;
        q = Q.Head;
        Q.Head = q->next;
        q = NULL;
    }
}

void print(Queue Q){
    address P;
    P = Q.Head;
    printf("Queue: [head] ");
    while(P!=NULL) {
        cout << P->info.food << "(" << P->info.stock << ") - ";
        P = P->next;
    }
    cout << "[tail]\n" << endl;;
};
