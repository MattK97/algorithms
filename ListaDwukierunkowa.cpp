//
// Created by kukul on 08.11.2019.
//

#include "ListaDwukierunkowa.h"
#include <iostream>
using namespace std;

void ListaDwukierunkowa::insert(int x, int i, elem *&lista) {

}
void ListaDwukierunkowa::read(elem *lista) {
    elem* pomocnicza = lista;
    while (pomocnicza!=NULL){
        cout << pomocnicza->dane << endl;
        int x = pomocnicza->dane;
        pomocnicza = pomocnicza->nast;
    }
}
/*cout<<"Podaje dane: nr listy:   ";
cout<< lista;
cout<< "    poprz:    ";
cout<< lista->poprz;
cout<< "     nast:    ";
cout<< lista->nast;
cout<< "      dane :   ";
cout<< lista->dane;
cout<< endl;*/