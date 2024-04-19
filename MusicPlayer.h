// MusicPlayer.h
#ifndef MUSICPLAYER_H
#define MUSICPLAYER_H

#include "CDLL.h"

class MusicPlayer {
private:
    std::string type; // Type of music player
    int size; // Number of songs
    CircleDLinkedList playerList; 
    // Doubly circular linked list of songs

public:
    MusicPlayer(std::string playerType);
    virtual ~MusicPlayer();
    void play();
    void next();
    void previous();
    void add(Song song);
    void remove();
    void print(bool reverse);

private:
    void printNext(int remainingSongs);
    void printPrevious(int remainingSongs);
};

#endif
