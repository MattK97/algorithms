#include "Lista.h"
#include <iostream>
using namespace std;


int main() {
    Lista listac;
    elem* lista = NULL;

    cout << "Dodawanie, usuwanie oraz czytanie elementów z listy" << endl;
    listac.insert(1, 1, lista);
    listac.insert(3, 2, lista);
    listac.insert(3, 3, lista);
    listac.insert(4, 4, lista);
    cout << listac.read(3, lista) << endl;
    listac.insert(5, 5, lista);
    cout << listac.read(5, lista) << endl;





    return 0;
}
