#include "List.hpp"

vectorList::vectorList(int size) : size(0), head(nullptr), tail(nullptr) {
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

node* vectorList::back() const {
    return tail;
}

node* vectorList::front() const {
    return head;
}

void vectorList::pushBack(std::vector<int> vec){
    if (tail == nullptr){
        tail = new node{ vec, nullptr, nullptr };
        head = tail;

    } else {
        tail->next = new node{ vec, nullptr, tail };
        tail = tail->next;
    }

    ++size;
}

void vectorList::pushFront(std::vector<int> vec){
    if (head == nullptr) {
        head = new node{ vec, nullptr, nullptr };
        tail = head;

    } else {
        head->previous = new node{ vec, head, nullptr };
        head = head->previous;
    }

    ++size;
}

void vectorList::popFront(){
    if (!head) return;

    auto temp = head;
    head = head->next;
    if (head){
        head->previous = nullptr;

    } else{
        tail = nullptr;
    }

    --size;
    delete temp;
}

void vectorList::popBack(){
    if (!tail) return;

    auto temp = tail;
    tail = tail->previous;

    if (tail){
        tail->next = nullptr;

    } else {
        head = nullptr;
    }

    --size;
    delete temp;
}

bool vectorList::isEmpty() const{
    return size == 0;
}


int vectorList::getSize() const{
    return size;
}
