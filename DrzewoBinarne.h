//
// Created by kukul on 21.11.2019.
//

#ifndef DONAUKI_DRZEWOBINARNE_H
#define DONAUKI_DRZEWOBINARNE_H
#include <iostream>
using namespace std;

struct node {
    int data;
    node* left;
    node* right;
};
class DrzewoBinarne {
public:
    void add(int x, node* &korzen);
    int search(int x, node* korzen);
};


#endif //DONAUKI_DRZEWOBINARNE_H
