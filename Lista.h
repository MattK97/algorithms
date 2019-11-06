//
// Created by kukul on 25.10.2019.
//

#ifndef DONAUKI_LISTA_H
#define DONAUKI_LISTA_H

struct elem {
    int dane;
    elem * nast;
};
class Lista {
    void insert(int x, int i, elem* &lista);
};


#endif //DONAUKI_LISTA_H
