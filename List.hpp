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
    vectorList(int size = 0);

    ~vectorList();

    node* front() const;

    node* back() const;

    void pushBack(std::vector<int> vec = std::vector<int>());

    void pushFront(std::vector<int> vec = std::vector<int>());

    void popBack();
    
    void popFront();

    bool isEmpty() const;

    int getSize() const;

private:
    node* head;
    node* tail;
    int size;
};

#endif
