#ifndef VIDEO_H
#define VIDEO_H

#include "MediaItem.h"

class Video : public MediaItem
{
private:
    string description;
    string distributor;
    string series;
    string label;

public:
    Video(
        const string &callNumber,
        const string &title,
        const string &subjects,
        const string &description,
        const string &distributor,
        const string &notes,
        const string &series,
        const string &label);

    ostream &print(ostream &os) const override;
    bool inOther(const string &searchString) const override;
};

#endif