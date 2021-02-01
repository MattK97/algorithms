//
// Created by kukul on 08.11.2019.
//

#include "ListaDwukierunkowa.h"
#include <iostream>
using namespace std;

void ListaDwukierunkowa::insert(int x, int i, elem *&lista) {
    if (i == 1)
    {
        elem* newElement = new elem;
        newElement->dane = x;
        newElement->nast = lista;
        newElement->poprz = NULL;
        lista = newElement;
    }
    else {
        elem* temp = lista;
        elem* poprzEl = NULL;
        for (int b = 1; b < i; b++) {
            poprzEl = temp;
            temp = temp->nast;
        }
        elem* newElement = new elem;
        newElement->dane = x;

        if (temp != NULL) {
            newElement->poprz = temp->poprz;
            temp->poprz = newElement;
            newElement->nast = temp;
        }
        else {
            newElement->poprz = poprzEl;
            newElement->nast = NULL;
        }
        poprzEl->nast = newElement;
    }
}
void ListaDwukierunkowa::read(elem *lista) {
    elem* pomocnicza = lista;
    while (pomocnicza!=NULL){
        cout << pomocnicza->dane << endl;
        int x = pomocnicza->dane;
        pomocnicza = pomocnicza->nast;
    }
}

void remove(int i, elem*& lista) {
    if (i == 1)
    {
        elem* wsk = lista;
        lista = lista->nast;
        if (lista != NULL)
            lista->poprz = NULL;
        delete wsk;
    }
    else
    {
        elem* temp = lista;
        elem* before = NULL;
        for (int j = 1; j < i; j++)
        {
            before = temp;
            temp = temp->nast;
        }
        if (temp->nast != NULL) {
            before->nast = temp->nast;
            temp->nast->poprz = before;
            delete temp;
        }
        else {
            before->nast = NULL;
            delete temp;
        }
    }
}

void reverse(elem*& lista)
{
    elem* temp = lista;
    while (temp)
    {
        elem* war2 = temp->nast;
        temp->nast = temp->poprz;
        temp->poprz = war2;
        if (temp->poprz == NULL)
            lista = temp;

        temp = temp->poprz;
    }
}

void to_cyclic(elem* lista)
{
    elem* wskaznik = lista;

    while (wskaznik->nast != NULL)
        wskaznik = wskaznik->nast;

    wskaznik->nast = lista;
}
void reverse_cyclic(elem* lista)
{
    elem* temp = lista;
    lista = lista->nast;
    elem* temp2 = lista->nast;
    while (temp != temp2)
    {
        lista->nast = temp;
        temp = lista;
        lista = temp2;
        temp2 = lista->nast;
    }
}

bool is_valid_pn(elem* lista)
{
    if (lista == NULL)
        return false;


    int operands = 0;
    while (lista != NULL)
    {
        if (lista->dane == '+' || lista->dane == '-' || lista->dane == '*' || lista->dane == '/')
        {
            operands--;
            if (operands < 1)
            {
                return false;
            }
        }
        else if (lista->dane >= 97 && lista->dane <= 122)
            operands++;

        else
            return false;


        lista = lista->nast;
    }

    return operands == 1;
}
