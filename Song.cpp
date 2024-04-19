// Song.cpp
#include "Song.h"

Song::Song(std::string title, std::string singer) : songTitle(title), singerName(singer) {}

Song::~Song() {}

std::string Song::getSongTitle() {
    return songTitle;
}

std::string Song::getSingerName() {
    return singerName;
}

void Song::setSongTitle(std::string title) {
    songTitle = title;
}

void Song::setSingerName(std::string singer) {
    singerName = singer;
}

std::ostream& operator<<(std::ostream& os, const Song& song) {
    os << "Title: " << song.songTitle << ", Singer: " << song.singerName;
    return os;
}
