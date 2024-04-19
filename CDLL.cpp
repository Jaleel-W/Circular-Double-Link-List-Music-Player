// CircleDLinkedList.cpp
#include "CDLL.h"
#include <iostream>

CircleDLinkedList::CircleDLinkedList() : current(nullptr), size(0) {}

// Constructor definition
DNode::DNode(Song song) : data(song), next(nullptr), prev(nullptr) {}

CircleDLinkedList::~CircleDLinkedList() {
    while (size > 0) {
        remove();
    }
}

void CircleDLinkedList::add(Song song) {
    DNode* newNode = new DNode(song);
    if (current == nullptr) {
        current = newNode;
        current->next = current;
        current->prev = current;
    } else {
        newNode->next = current;
        newNode->prev = current->prev;
        current->prev->next = newNode;
        current->prev = newNode;
    }
    size++;
}

void CircleDLinkedList::remove() {
    if (current == nullptr)
        return;
    if (size == 1) {
        delete current;
        current = nullptr;
    } else {
        DNode* temp = current;
        current->prev->next = current->next;
        current->next->prev = current->prev;
        current = current->next;
        delete temp;
    }
    size--;
}

void CircleDLinkedList::play() {
    if (current != nullptr)
        std::cout << current->data << std::endl;
}

void CircleDLinkedList::next() {
    if (current != nullptr)
        current = current->next;
}

void CircleDLinkedList::previous() {
    if (current != nullptr)
        current = current->prev;
}

void CircleDLinkedList::print(bool reverse) {
    if (current != nullptr) {
        DNode* temp = current;
        if (!reverse) {
            do {
                std::cout << temp->data << std::endl;
                temp = temp->next;
            } while (temp != current);
        } else {
            do {
                std::cout << temp->data << std::endl;
                temp = temp->prev;
            } while (temp != current);
        }
    }
}

int CircleDLinkedList::getSize() {
    return size;
}
