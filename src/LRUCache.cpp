#include "LRUCache.h"

LRUCache::LRUCache()  : Cache(cap) {}

void  LRUCache::set(int key, int value) override {
if (mp.find(key) != mp.end()) {
    Node *node = mp[key];
    node->value = value;
    remove(node);
    addToFront(node);
} else {
    Node *newNode = new Node(key, value);
    if (mp.size() >= capacity) {
        mp.erase(tail->key);
        remove(tail);
    }
    addToFront(newNode);
    mp[key] = newNode;
}
}

int LRUCache::get(int key) override {
    if (mp.find(key) == mp.end()) {
        return -1;
    }
    Node *node = mp[key];
    remove(node);
    addToFront(node);
    return node->value;
}

void LRUCache::remove(Node *node){
    if (node->prev) {
            node->prev->next = node->next;
        } else {
            head = node->next;
        }
        if (node->next) {
            node->next->prev = node->prev;
        } else {
            tail = node->prev;
        }
}

void LRUCache::addToFront(Node *node){
    node->next = head;
    node->prev = NULL;
    if (head) {
        head->prev = node;
    }
    head = node;
    if (!tail) {
        tail = head;
    }
}

