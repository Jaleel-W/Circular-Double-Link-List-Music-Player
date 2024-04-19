// CircleDLinkedList.h
#ifndef CDLL_H
#define CDLL_H

#include "DNode.h"

class CircleDLinkedList {
private:
    DNode* current;
    int size;
public:
    CircleDLinkedList();
    ~CircleDLinkedList();
    void add(Song song);
    void remove();
    void play();
    void next();
    void previous();
    void print(bool reverse);
    int getSize();
};

#endif
