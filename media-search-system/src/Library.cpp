#include "Library.h"

Library::Library()
{
    parseHelper();
}

Library::~Library()
{
    for (auto libraryItem : libraryCatalog)
    {
        delete libraryItem;
    }
}

void Library::parseHelper()
{
    parse("data/book.txt");
    parse("data/periodic.txt");
    parse("data/video.txt");
    parse("data/film.txt");
}

void Library::parse(const string &fileName)
{
    ifstream file(fileName);
    string line;
    char delimiter = '|';
    if (!file.is_open())
    {
        std::cerr << "Error opening file " << fileName << endl;
    }
    else
    {
        while (getline(file, line))
        {
            stringstream ss(line);
            string word;
            vector<string> tokens;
            while (getline(ss, word, delimiter))
            {
                tokens.push_back(word);
            }
            if (fileName == "data/book.txt")
            {
                parseBookFile(tokens);
            }
            else if (fileName == "data/periodic.txt")
            {
                parsePeriodicFile(tokens);
            }
            else if (fileName == "data/film.txt")
            {
                parseFilmFile(tokens);
            }
            else if (fileName == "data/video.txt")
            {
                parseVideoFile(tokens);
            }
            else
            {
                std::cerr << "Unrecognized file type: " << fileName << endl;
            }
        }
    }
}

void Library::parseBookFile(const vector<string> &tokens)
{
    MediaItem *newBook = new Book(
        tokens[0], // CallNumber
        tokens[1], // Title
        tokens[2], // Subject
        tokens[3], // Author
        tokens[4], // Description
        tokens[5], // Publisher
        tokens[6], // City
        tokens[7], // Year
        tokens[8], // Series
        tokens[9]  // Notes
    );
    // Add the newly created Book to the library catalog
    libraryCatalog.push_back(newBook);
}

void Library::parsePeriodicFile(const vector<std::string> &tokens)
{
    MediaItem *newPeriodic = new Periodic(
        tokens[0],  // CallNumber
        tokens[1],  // Title
        tokens[2],  // Subject
        tokens[3],  // Author
        tokens[4],  // Description
        tokens[5],  // Publisher
        tokens[6],  // PublishingHistory
        tokens[7],  // Series
        tokens[8],  // Notes
        tokens[9],  // RelatedTitles
        tokens[10], // OtherFormsOfTitle
        tokens[11]  // GovtDocNumber
    );
    libraryCatalog.push_back(newPeriodic);
}

void Library::parseVideoFile(const vector<string> &tokens)
{
    MediaItem *newVideo = new Video(
        tokens[0], // CallNumber
        tokens[1], // Title
        tokens[2], // Subject
        tokens[3], // Description
        tokens[4], // Distributor
        tokens[5], // Notes
        tokens[6], // Series
        tokens[7]  // Label
    );
    libraryCatalog.push_back(newVideo);
}

void Library::parseFilmFile(const vector<string> &tokens)
{
    MediaItem *newFilm = new Film(
        tokens[0], // CallNumber
        tokens[1], // Title
        tokens[2], // Subject
        tokens[3], // Director
        tokens[4], // Notes
        tokens[5]  // Year
    );
    libraryCatalog.push_back(newFilm);
}

vector<MediaItem *> Library::searchByCallNumber(const string &searchString) const
{
    vector<MediaItem *> results;
    for (const auto &item : libraryCatalog)
    {
        if (item->inCallNumber(searchString))
        {
            results.push_back(item);
        }
    }
    return results;
}
vector<MediaItem *> Library::searchByTitle(const string &searchString) const
{
    vector<MediaItem *> results;
    for (const auto &item : libraryCatalog)
    {
        if (item->inTitle(searchString))
        {
            results.push_back(item);
        }
    }
    return results;
}
vector<MediaItem *> Library::searchBySubject(const string &searchString) const
{
    vector<MediaItem *> results;
    for (const auto &item : libraryCatalog)
    {
        if (item->inSubject(searchString))
        {
            results.push_back(item);
        }
    }
    return results;
}
vector<MediaItem *> Library::searchByOther(const string &searchString) const
{
    vector<MediaItem *> results;
    for (const auto &item : libraryCatalog)
    {
        if (item->inOther(searchString))
        {
            results.push_back(item);
        }
    }
    return results;
}