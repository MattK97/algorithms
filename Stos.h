//
// Created by kukul on 23.10.2019.
//

#ifndef DONAUKI_STOS_H
#define DONAUKI_STOS_H

struct elem {
    elem* nast;
    int dane;
};

class Stos {
public:
    void push(elem* &stos, int);
    int pop(elem* &stos);
    int topEl(elem*);
    bool isEmpty(elem*);
    void sortElementsWithAdditionalStack(elem* &stos);
};


#endif //DONAUKI_STOS_H
