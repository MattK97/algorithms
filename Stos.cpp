//
// Created by kukul on 23.10.2019.
//

#include "Stos.h"
#include <iostream>


//podstawowe operacje wykonywane na stosie
void Stos::push(elem* &stos, int x){
    if(stos == nullptr){
        elem* el = new elem;
        el->dane = x;
        el->nast = nullptr;
        stos = el;
    }else {
        elem *el = new elem;
        el->dane = x;
        el->nast = stos;
        stos = el;
    }
}
int Stos::topEl(elem* stos) {
    return stos->dane;
}
int Stos::pop(elem* &stos){
    int top = stos->dane;
    stos = stos->nast;
    return top;
}
bool Stos::isEmpty(elem* stos){
    return stos == nullptr;
}
//operacje dodatkowe wykonywane na stosie

void Stos::sortElementsWithAdditionalStack(elem* &stos) { // sortowanie za pomocą dodatkowego stosu
    elem* addStack;
    while (stos != nullptr){
        int a = pop(stos);
        while(addStack!= nullptr && (addStack->dane) > a){
            push(stos, addStack->dane);
            pop(addStack);
        }
        push(addStack, a);
    }
    stos = addStack;
}