#include "Book.h"

Book::Book(
    const string &callNumber,
    const string &title,
    const string &subjects,
    const string &author,
    const string &description,
    const string &publisher,
    const string &city,
    const string &year,
    const string &series,
    const string &notes)
    : MediaItem(callNumber, title, subjects, notes),
      author(author),
      description(description),
      publisher(publisher),
      city(city),
      year(year),
      series(series) {}

ostream &Book::print(ostream &os) const
{
    os << "========== Book ==========" << endl;
    os << "Call Number: " << callNumber << endl;
    os << "Title: " << title << endl;
    os << "Subjects: " << subjects << endl;
    os << "Author: " << author << endl;
    os << "Description: " << description << endl;
    os << "Publisher: " << publisher << endl;
    os << "City: " << city << endl;
    os << "Year: " << year << endl;
    os << "Series: " << series << endl;
    os << "Notes: " << notes << endl;
    return os;
}

// Book's inOther search will only check description, notes, and year
bool Book::inOther(const string &searchString) const
{
    return this->description.find(searchString) != string::npos ||
           this->year.find(searchString) != string::npos ||
           this->notes.find(searchString) != string::npos;
}