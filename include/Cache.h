#ifndef CACHE_H
#define CACHE_H

#include "Node.h"
#include <map>

class Cache {
protected:
    std::map<int, Node*> mp;
    int capacity;
    Node* tail;
    Node* head;
public:
    Cache(int cap) : capacity(cap), tail(nullptr), head(nullptr) {}
    
    virtual void set(int key, int value) = 0;
    virtual int get(int key) = 0;
};

#endif //CACHE_H