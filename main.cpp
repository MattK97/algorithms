#include <iostream>
#include "Kolejka.h"
using namespace std;



void callArrayQueue(){
    Kolejka kolejka;
    int arr[10];
    int start = 0;
    int* rear;
    rear = &start;

    kolejka.arrayQueueAdd(arr, 10, 0, rear);
    kolejka.arrayQueueAdd(arr, 10, 1, rear);
    kolejka.arrayQueueAdd(arr, 10, 2, rear);

    std::cout<<kolejka.arrayQueueNext(arr,rear)<<std::endl;
    std::cout<<kolejka.arrayQueueNext(arr,rear)<<std::endl;
    std::cout<<kolejka.arrayQueueNext(arr,rear)<<std::endl;
    std::cout<<kolejka.arrayQueueNext(arr,rear)<<std::endl;
}

//ZADANIE 3
//STOS:  S Y E U Q T S A O N I E

//ZADANIE 4
// E A S Y -> E A * S * Y * *

int main() {
    callArrayQueue();
    return 0;
}
