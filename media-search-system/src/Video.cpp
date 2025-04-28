#include "Video.h"

Video::Video(
    const string &callNumber,
    const string &title,
    const string &subjects,
    const string &description,
    const string &distributor,
    const string &notes,
    const string &series,
    const string &label)
    : MediaItem(callNumber, title, subjects, notes),
      description(description), distributor(distributor), series(series), label(label) {}

ostream &Video::print(ostream &os) const
{
    os << "========== Video ==========" << endl;
    os << "Call Number: " << callNumber << endl;
    os << "Title: " << title << endl;
    os << "Subjects: " << subjects << endl;
    os << "Description: " << description << endl;
    os << "Distributor: " << distributor << endl;
    os << "Notes: " << notes << endl;
    os << "Series: " << series << endl;
    os << "Label: " << label << endl;
    return os;
}

// Video: Description, Notes, and Distributor
bool Video::inOther(const string &searchString) const
{
    return this->notes.find(searchString) != string::npos ||
           this->description.find(searchString) != string::npos ||
           this->distributor.find(searchString) != string::npos;
}