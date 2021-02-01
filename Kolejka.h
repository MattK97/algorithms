//
// Created by kukul on 24.10.2019.
//

#ifndef DONAUKI_KOLEJKA_H
#define DONAUKI_KOLEJKA_H

struct elem {
    int dane;
    elem * nast;
};

class Kolejka {
public:
    void add(elem* &pocz_kolejki, elem* &kon_kolejki, int x);
    int next(elem* &pocz_kolejki, elem* &kon_kolejki);
    int firstEl(elem* pocz_kolejki);
    bool isEmpty(elem* pocz_kolejki);
    void twoStacksQueueAdd(elem* &stos, int x);
    int twoStacksQueueNext(elem* &stos);
    void arrayQueueAdd(int* arr, int maxSize, int x, int* rear);
    int arrayQueueNext(int *arr, int *rear);
};


#endif //DONAUKI_KOLEJKA_H
