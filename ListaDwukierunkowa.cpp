//
// Created by kukul on 08.11.2019.
//

#include "ListaDwukierunkowa.h"
#include <iostream>

void ListaDwukierunkowa::insert(int x, int i, elem *&lista) {
    elem* newel = new elem;
    if(i==1){
        newel->poprz = NULL;
        newel->nast = lista;
        newel->dane = x;
        if(lista!=NULL) {
            lista->poprz = newel;
        }
        lista=newel;
    }else if(i>1){

    }
}
