#ifndef LRUCACHE_H
#define LRUCACHE_H
#include "Cache.h"
#include "Node.h"

class LRUCache : public Cache{
    public:
        LRUCache(int cap);
    
    void set(int key, int value) override;
    int get(int key) override;

    private:
        void remove(Node *node);
        void addToFront(Node *node);
};

#endif //LRUCACHE_H