#ifndef FILM_H
#define FILM_H

#include "MediaItem.h"

class Film : public MediaItem
{
private:
    string director;
    string year;

public:
    Film(
        const string &callNumber,
        const string &title,
        const string &subjects,
        const string &director,
        const string &notes,
        const string &year);

    ostream &print(ostream &os) const override;
    bool inOther(const string &searchString) const override;
};

#endif