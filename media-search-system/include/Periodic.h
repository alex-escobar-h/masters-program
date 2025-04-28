#ifndef PERIODIC_H
#define PERIODIC_H

#include "MediaItem.h"

class Periodic : public MediaItem
{
private:
    string author;
    string description;
    string publisher;
    string publishingHistory;
    string series;
    string relatedTitles;
    string otherFormsOfTitle;
    string govtDocNumber;

public:
    Periodic(
        const string &callNumber,
        const string &title,
        const string &subjects,
        const string &author,
        const string &description,
        const string &publisher,
        const string &publishingHistory,
        const string &series,
        const string &notes,
        const string &relatedTitles,
        const string &otherFormsOfTitle,
        const string &govtDocNumber);

    ostream &print(ostream &os) const override;
    bool inOther(const string &searchString) const override;
};

#endif
