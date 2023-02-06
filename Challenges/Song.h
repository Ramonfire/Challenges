#ifndef _SONG_H
#define _SONG_H
#include<iostream>
#include<iomanip>





class Song
{
    friend std::ostream& operator<<(std::ostream& os, const Song& s);
    std::string name;
    std::string artist;
    int rating;
public:
    Song() = default;
    Song(std::string name, std::string artist, int rating)
        : name{ name }, artist{ artist }, rating{ rating } {}

    std::string get_name() const {
        return name;
    }
    std::string get_artist() const {
        return artist;
    }
    int get_rating() const {
        return rating;
    }

    bool operator<(const Song & rhs) const {
        return this->name < rhs.name;
    }

    bool operator==(const Song & rhs) const {
        return this->name == rhs.name;
    }

};


#endif // !_SONG_H