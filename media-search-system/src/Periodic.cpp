#include "Periodic.h"

Periodic::Periodic(
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
    const string &govtDocNumber)
    : MediaItem(callNumber, title, subjects, notes),
      author(author), description(description), publisher(publisher), publishingHistory(publishingHistory), series(series), relatedTitles(relatedTitles), otherFormsOfTitle(otherFormsOfTitle), govtDocNumber(govtDocNumber) {}

ostream &Periodic::print(ostream &os) const
{
    os << "========== Periodic ==========" << endl;
    os << "Call Number: " << callNumber << endl;
    os << "Title: " << title << endl;
    os << "Subjects: " << subjects << endl;
    os << "Author: " << author << endl;
    os << "Description: " << description << endl;
    os << "Publisher: " << publisher << endl;
    os << "Publishing History: " << publishingHistory << endl;
    os << "Series: " << series << endl;
    os << "Notes: " << notes << endl;
    os << "Related Titles: " << relatedTitles << endl;
    os << "Other Forms of Title: " << otherFormsOfTitle << endl;
    os << "Government Doc Number: " << govtDocNumber << endl;
    return os;
}

// Periodic Other search: Description, Notes, Series, and Related Titles
bool Periodic::inOther(const string &searchString) const
{
    return this->description.find(searchString) != string::npos ||
           this->notes.find(searchString) != string::npos ||
           this->series.find(searchString) != string::npos ||
           this->relatedTitles.find(searchString) != string::npos;
}