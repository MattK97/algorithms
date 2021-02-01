//
// Created by kukul on 24.10.2019.
//

#include "Kolejka.h"
#include <iostream>


//podstawowe opera
void Kolejka::add(elem *&pocz_kolejki, elem *&kon_kolejki, int x) {
    elem *el = new elem;
    el->dane = x;
    if(pocz_kolejki == nullptr) {
        pocz_kolejki = el;
        kon_kolejki = el;
    }else{
        kon_kolejki->nast = el;
        kon_kolejki=el;
    }
}
int Kolejka::next(elem *&pocz_kolejki, elem *&kon_kolejki) {
    int wartosc = pocz_kolejki->dane;
    pocz_kolejki = pocz_kolejki->nast;
    return wartosc;
}
int Kolejka::firstEl(elem *pocz_kolejki) {
    return  pocz_kolejki->dane;
}
bool Kolejka::isEmpty(elem *pocz_kolejki) {
    return true;
}

void Kolejka::twoStacksQueueAdd(elem* &stos, int x) {
    if(stos == nullptr){
        elem* el = new elem;
        el->dane = x;
        el->nast= nullptr;
        stos = el;
    }else{
        elem* el = new elem;
        el->dane = x;
        el->nast = stos;
        stos = el;
    }
}

int Kolejka::twoStacksQueueNext(elem* &stos) {
    elem* temp = stos;
    elem* nowyStos = new elem;
    while (temp != nullptr){
        twoStacksQueueAdd(nowyStos, temp->dane);
        temp = temp->nast;
    }
    return nowyStos->dane;
}
void Kolejka::arrayQueueAdd(int *arr, int maxSize, int x, int *rear) {
    if(maxSize==*rear){
        std::cout<<"Kolejka pełna"<<std::endl;
        return;
    }else{
        arr[*rear] = x;
        (*rear)++;
        return;
    }
}

int Kolejka::arrayQueueNext(int *arr, int *rear) {
    if(*rear==0){
        std::cout<<"Pusta lista"<<std::endl;
        return NULL;
    }
    int toReturn = *arr;
    int counter = 0;
    int copRear = *rear;
    while(counter!=copRear){
        arr[counter] = arr[counter+1];
        counter++;
    };
    (*rear)--;
    return toReturn;
}