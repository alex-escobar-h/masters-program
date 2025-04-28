#include "MediaItem.h"

MediaItem::MediaItem(const string &callNumber, const string &title, const string &subjects, const string &notes) : callNumber(callNumber), title(title), subjects(subjects), notes(notes) {}

ostream &operator<<(ostream &os, const MediaItem &rhs)
{
    return rhs.print(os);
}

bool MediaItem::inCallNumber(const string &searchString) const
{

    return this->callNumber.find(searchString) != string::npos;
}
bool MediaItem::inTitle(const string &searchString) const
{
    return this->title.find(searchString) != string::npos;
}
bool MediaItem::inSubject(const string &searchString) const
{
    return this->subjects.find(searchString) != string::npos;
}