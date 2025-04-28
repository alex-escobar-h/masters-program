#ifndef LIBRARY_H
#define LIBRARY_H
#include <vector>
#include <iostream>
#include <fstream>
#include <sstream>

#include "Book.h"
#include "Film.h"
#include "Periodic.h"
#include "Video.h"

using std::cout;
using std::endl;
using std::ifstream;
using std::stringstream;
using std::vector;

class Library
{
private:
    vector<MediaItem *> libraryCatalog;
    void parseHelper();
    void parse(const string &fileName);
    void parseBookFile(const vector<string> &tokens);
    void parsePeriodicFile(const vector<string> &tokens);
    void parseVideoFile(const vector<string> &tokens);
    void parseFilmFile(const vector<string> &tokens);

public:
    Library();
    ~Library();
    Library(const Library &) = delete;
    Library &operator=(const Library &) = delete;

    vector<MediaItem *> searchByCallNumber(const string &searchString) const;
    vector<MediaItem *> searchByTitle(const string &searchString) const;
    vector<MediaItem *> searchBySubject(const string &searchString) const;
    vector<MediaItem *> searchByOther(const string &searchString) const;
};

#endif