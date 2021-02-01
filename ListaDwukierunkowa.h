//
// Created by kukul on 08.11.2019.
//

#ifndef DONAUKI_LISTADWUKIERUNKOWA_H
#define DONAUKI_LISTADWUKIERUNKOWA_H
struct elem {
    int dane;
    elem * nast;
    elem * poprz;
};

class ListaDwukierunkowa {
public:
    void insert(int x, int i, elem* &lista);
    void read(elem* lista);
    void to_cyclic(elem* lista);
    void reverse_cyclic(elem* lista);
    bool is_valid_pn(elem* lsita);

};


#endif //DONAUKI_LISTADWUKIERUNKOWA_H
