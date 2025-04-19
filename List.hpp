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

    node* front() const;

    node* back() const;

    void pushBack();

    void pushFront();

    node* popBack();
    
    node* popFront();

    bool isEmpty() const;

    int getSize() const;

private:
    node* head;
    node* tail;
    int size;
};

#endif
