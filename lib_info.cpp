#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
using namespace std;

struct Song {
    string title;
    int time;  // could also be a string
};

struct Album {
    map <int, Song > songs;
    string name;
    int time;
    int nsongs;  // optional variable but makes it easier
};

struct Artist {
    map <string, Album > albums;
    string name;
    int time;
    int nsongs;
};

int main(){
    ifstream fin;
    fin.open(argv[1]);
    string t, artist, album;

    if (!fin.is_open())
      return 1;

    Album alb;

    string line;
    while(fin){
        ss.clear();
        getline(fin, line);
        stringstream ss;
        ss.str(line);

        Song s;
    }
}