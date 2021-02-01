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
    static void push(elem* &stos, int x);
    static int pop(elem* &stos);
    int topEl(elem*);
    static bool isEmpty(elem*);
    void sortElementsWithAdditionalStack(elem* &stos);
    void add(elem*& pocz_kol, elem*& kon_kol, int x);
    int next(elem*& pocz_kol, elem*& kon_kol);
    int firstEl(elem* pocz_kol, elem* kon_kol);
    void addStack(elem*& stos1, int x);
    int nextStack(elem*& stos1, elem*& stos2);
    void reverse_stack(elem*& stack1, elem*& stack2);

};




#endif //DONAUKI_STOS_H
