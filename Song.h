// Song.h
#ifndef SONG_H
#define SONG_H

#include <string>
#include <iostream>

class Song {
private:
    std::string songTitle; // Title of the song
    std::string singerName; // Name of the singer
public:
    Song(std::string title, std::string singer);
    ~Song();
    std::string getSongTitle();
    std::string getSingerName();
    void setSongTitle(std::string title);
    void setSingerName(std::string singer);
    friend std::ostream& operator<<(std::ostream& os, const Song& song);
};

#endif
