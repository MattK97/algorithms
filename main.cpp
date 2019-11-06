#include "Stos.h"
#include <iostream>
using namespace std;


int main() {
    elem* stos = nullptr;
    Stos s;
    s.push(stos, 2);
    s.push(stos, 4);
    s.push(stos, 3);
    s.push(stos, 2);
    s.push(stos, 5);
    s.sortElementsWithAdditionalStack(stos);
    cout<<s.pop(stos)<<endl;
    cout<<s.pop(stos)<<endl;
    cout<<s.pop(stos)<<endl;
    cout<<s.pop(stos)<<endl;
    cout<<s.pop(stos)<<endl;
    cout<<s.pop(stos)<<endl;



    return 0;
}
