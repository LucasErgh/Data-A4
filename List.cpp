#include "List.hpp"

vectorList::vectorList(int size){
    for(int i = 0; i < size; ++i){
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

node* vectorList::back(){
    return tail;
}

node* vectorList::front(){
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
}

void vectorList::pushFront(){
    if (head == nullptr) {
        head = new node;
    } else {
        head->previous = new node;
        head->previous->next = head;
        head = head->previous;
    }
}
