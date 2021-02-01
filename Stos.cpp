//
// Created by kukul on 23.10.2019.
//

#include "Stos.h"
#include <iostream>


//ZADANIE 3
//STOS:  S Y E U Q T S A O N I E

//ZADANIE 4
// E A S Y -> E A * S * Y * *

//podstawowe operacje wykonywane na stosie
void Stos::push(elem* &stos, int x){
    if(stos == NULL){
        elem* el = new elem;
        el->dane = x;
        el->nast = NULL;
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
void add(elem*& pocz_kol, elem*& kon_kol, int x)
{
    if (pocz_kol)
    {
        kon_kol->nast = new elem{ x, NULL };
        kon_kol = kon_kol->nast;
    }
    else
        pocz_kol = kon_kol = new elem{ x, NULL };
}
int next(elem*& pocz_kol, elem*& kon_kol)
{
    int wartDane = pocz_kol->dane;
    elem* wart = pocz_kol;
    pocz_kol = pocz_kol->nast;
    delete wart;
    return wartDane;
}
int firstEl(elem* pocz_kol, elem* kon_kol)
{
    int wartDane = pocz_kol->dane;
    return wartDane;
}
void addStack(elem*& stos1, int x)
{
    Stos::push(stos1, x);
}
int nextStack(elem*& stos1, elem*& stos2)
{
    if (Stos::isEmpty(stos2))
        while (!Stos::isEmpty(stos1))
            Stos::push(stos2, Stos::pop(stos1));

    return Stos::pop(stos2);
}
void reverse_stack(elem*& stack1, elem*& stack2)
{
    int x = 0;
    elem* p = NULL;
    while (p != stack1)
    {
        x = Stos::pop(stack1);
        while (stack1 != p)
            Stos::push(stack2, Stos::pop(stack1));

        Stos::push(stack1, x);
        p = stack1;
        while (stack2 != NULL)
            Stos::push(stack1, Stos::pop(stack2));

    }
}
