//
// Created by kukul on 21.11.2019.
//

#include "DrzewoBinarne.h"
#include "Lista.h"
#include <iostream>
using namespace std;

void DrzewoBinarne::add(int x, node *&korzen) {
    node* newNode = new node;
    node* current = korzen;
    node* parent=NULL;
    newNode->left = NULL;
    newNode->right = NULL;
    newNode->data = x;
    if(korzen == NULL){
        korzen = newNode;
    }else{
        parent = current;
        while(true){
            if(x <= parent->data){
                current = current->left;
                if(current == NULL){
                    parent->left = newNode;
                    return;
                }
            }else{
                current = current->right;
                if(current == NULL){
                    parent->right = newNode;
                    return;
                }
            }
        }
    }
}
int DrzewoBinarne::search(int x, node *korzen) {
    if(korzen==NULL){
        cout<<"Puste drzewo"<<endl;
    } else {
        node* current = korzen;
        while(current->data!=x){
            if (x<current->data){
                current = current->left;
            }else if(x>current->data){
                current = current->right;
            }else{

            }
        }
    }
    return 0;
}