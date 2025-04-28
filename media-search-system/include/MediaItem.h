#ifndef MEDIAITEM_H
#define MEDIAITEM_H
#include <string>
#include <iostream>

using std::endl;
using std::ostream;
using std::string;

class MediaItem
{
protected:
    string callNumber;
    string title;
    string subjects;
    string notes;

public:
    MediaItem(const string &callNumber, const string &title, const string &subjects, const string &notes);
    virtual ~MediaItem() = default; // virtual Default destructor.
    // Deletes the copy constructor to prevent copying of MediaItem objects.
    MediaItem(const MediaItem &) = delete;
    // Deletes the copy assignment operator to prevent assigning one MediaItem to another.
    MediaItem &operator=(const MediaItem &) = delete;
    // Friend function that overloads the << operator, allowing MediaItem objects to be printed using std::cout.
    friend ostream &operator<<(ostream &os, const MediaItem &rhs);
    virtual ostream &print(ostream &os) const = 0;
    bool inCallNumber(const string &searchString) const;
    bool inTitle(const string &searchString) const;
    bool inSubject(const string &searchString) const;
    virtual bool inOther(const string &searchString) const = 0;
};
#endif