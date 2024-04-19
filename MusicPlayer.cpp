// MusicPlayer.cpp
#include "MusicPlayer.h"
#include <iostream>

MusicPlayer::MusicPlayer(std::string playerType) : type(playerType), size(0) {}

MusicPlayer::~MusicPlayer() {}

void MusicPlayer::play() {
    playerList.play();
}

void MusicPlayer::next() {
    playerList.next();
}

void MusicPlayer::previous() {
    playerList.previous();
}

void MusicPlayer::add(Song song) {
    playerList.add(song);
    size++;
}

void MusicPlayer::remove() {
    playerList.remove();
    size--;
}

void MusicPlayer::print(bool reverse) {
    if (size == 0) {
        std::cout << "Playlist is empty." << std::endl;
        return;
    }

    if (!reverse) {
        playerList.play(); // Print the current song
        printNext(playerList.getSize() - 1); // Start recursive printing from the next song
    } else {
        playerList.play(); // Print the current song
        printPrevious(playerList.getSize() - 1); // Start recursive printing from the previous song
    }
}

void MusicPlayer::printNext(int remainingSongs) {
    if (remainingSongs > 0) {
        playerList.next(); // Move to the next song
        playerList.play(); // Print the song
        printNext(remainingSongs - 1); // Recursive call for the next song
    }
}

void MusicPlayer::printPrevious(int remainingSongs) {
    if (remainingSongs > 0) {
        playerList.previous(); // Move to the previous song
        playerList.play(); // Print the song
        printPrevious(remainingSongs - 1); // Recursive call for the previous song
    }
}
