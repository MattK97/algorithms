//
// Created by kukul on 24.10.2019.
//

#include "Kolejka.h"
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

