// main.cpp
#include "MusicPlayer.h"

int main() {
    // Initialization
    MusicPlayer player("MP3 Player");
    player.add(Song("Song 1", "Artist 1"));
    player.add(Song("Song 2", "Artist 2"));
    player.add(Song("Song 3", "Artist 3"));

    // Initial Playback
    std::cout << "Initial Playback:\n";
    player.play();
    player.next();
    player.next();
    player.next();
    player.previous();

    // Playlist Review
    std::cout << "\nPlaylist Review:\n";
    std::cout << "Print Forward:\n";
    player.print(true);
    std::cout << "\nPrint Reverse:\n";
    player.print(false);

    // Modifying the Playlist
    std::cout << "\nModifying the Playlist:\n";
    player.remove();

    // After Removal
    std::cout << "\nAfter Removal:\n";
    player.play();
    player.next();
    player.next();
    player.next();

    // Final Playlist Review
    std::cout << "\nFinal Playlist Review:\n";
    std::cout << "Final Print Forward:\n";
    player.print(true);
    std::cout << "\nFinal Print Reverse:\n";
    player.print(false);

    return 0;
}
