#ifndef LIST_HPP
#define LIST_HPP

#include <vector>

struct node{
    std::vector<int> data;
    node* next;
    node* previous;
};

class list{
public:
    list(int numElems = 5);

private:
    node* root;
    int size;
};

#endif
