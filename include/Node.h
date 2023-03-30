#ifndef NODE_H
#define NODE_H

class Node {
public:
    int key, value;
    Node *prev, *next;
    Node(int k, int v) : key(k), value(v), prev(nullptr), next(nullptr) {}
};

#endif //NODE_H