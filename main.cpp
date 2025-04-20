/*
    main.cpp
    Entry point for 1D NN program
*/

#include "List.hpp"
#include <iostream>

void test(){
    vectorList list;

    std::cout << "Try pushBack() and pushFront()\n";
    list.pushBack({1, 2, 3});
    list.pushFront({4, 5, 6});

    std::cout << "Try popFront() and popBack()\n";
    auto frontData = list.front()->data;
    list.popFront();
    auto backData = list.back()->data;
    list.popBack();

    std::cout << "Try pop on empty list\n";
    list.popFront();
    list.popBack();

    std::cout << "Test vectorList finished\n";
}

int main(){
    test();

    return 1;
}
