#ifndef BOOK_H
#define BOOK_H

#include "MediaItem.h"

class Book : public MediaItem
{
private:
    string author;
    string description;
    string publisher;
    string city;
    string year;
    string series;

public:
    Book(
        const string &callNumber,
        const string &title,
        const string &subjects,
        const string &author,
        const string &description,
        const string &publisher,
        const string &city,
        const string &year,
        const string &series,
        const string &notes);

    ostream &print(ostream &os) const override;
    bool inOther(const string &searchString) const override;
};

#endif