// DNode.h
#ifndef DNODE_H
#define DNODE_H

#include "Song.h"

class DNode {
public:
    Song data;
    DNode* next;
    DNode* prev;
    DNode(Song song);
};

#endif
