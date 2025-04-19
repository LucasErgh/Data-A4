#ifndef LIST_HPP
#define LIST_HPP

#include <vector>

struct node{
    std::vector<int> data;
    node* next;
    node* previous;
};

class vectorList{
public:
    vectorList(int numElems = 5);

    ~vectorList();

    node* front();

    node* back();

private:
    node* head;
    node* tail;
    int size;

    void pushBack();

    void pushFront();
};

#endif
