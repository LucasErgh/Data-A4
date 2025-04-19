#include "List.hpp"

vectorList::vectorList(int numElements) : size(0), head(nullptr), tail(nullptr) {
    for(int i = 0; i < numElements; ++i){
        pushBack();
    }
}

vectorList::~vectorList(){
    node* cur = head;
    while(cur){
        node* prev = cur;
        cur = cur->next;
        delete prev;
    }
}

node* vectorList::back() const {
    return tail;
}

node* vectorList::front() const {
    return head;
}

void vectorList::pushBack(){
    if (tail == nullptr){
        tail = new node;

    } else {
        tail->next = new node;
        tail->next->previous = tail;
        tail = tail->next;
    }

    ++size;
}

void vectorList::pushFront(){
    if (head == nullptr) {
        head = new node;

    } else {
        head->previous = new node;
        head->previous->next = head;
        head = head->previous;
    }

    ++size;
}

bool vectorList::isEmpty() const{
    return size;
}


int vectorList::getSize() const{
    return size;
}
