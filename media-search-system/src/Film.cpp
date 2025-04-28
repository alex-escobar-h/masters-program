#include "Film.h"

Film::Film(
    const string &callNumber,
    const string &title,
    const string &subjects,
    const string &director,
    const string &notes,
    const string &year)
    : MediaItem(callNumber, title, subjects, notes),
      director(director), year(year) {}

ostream &Film::print(ostream &os) const
{
    os << "========== Film ==========" << endl;
    os << "Call Number: " << callNumber << endl;
    os << "Title: " << title << endl;
    os << "Subjects: " << subjects << endl;
    os << "Director: " << director << endl;
    os << "Notes: " << notes << endl;
    os << "Year: " << year << endl;
    return os;
}

// Film–Notes, Director, and Year
bool Film::inOther(const string &searchString) const
{
    return this->notes.find(searchString) != string::npos ||
           this->director.find(searchString) != string::npos ||
           this->year.find(searchString) != string::npos;
}