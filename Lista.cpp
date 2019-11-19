//
// Created by kukul on 25.10.2019.
//

#include "Lista.h"
#include <iostream>
using namespace std;


void Lista::insert(int x, int i, elem *&lista) {
    elem* nowaLista = new elem;
    nowaLista->dane = x;
    if (lista==NULL){
        nowaLista->nast = NULL;
        lista = nowaLista;
    }else{
        elem* pomocnicza = lista;
        for(int j=2;j<i;j++){
            pomocnicza = pomocnicza->nast;
        }
        nowaLista->nast = pomocnicza->nast;
        pomocnicza->nast = nowaLista;
    }
}

void Lista::remove(int i, elem *&lista) {
    elem* pomocnicza = lista;
    for (int j = 1; j < i; ++j) {
        pomocnicza = pomocnicza->nast;
    }

}

int Lista::read(int i, elem *lista) {
    elem* pomocnicza = lista;
    for (int j = 1; j < i; j++) {
        pomocnicza = pomocnicza->nast;
    }
    int x = pomocnicza->dane;
    return x;
}


