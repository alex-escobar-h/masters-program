#include "Menu.h"

Menu::Menu()
{
    run();
}

void Menu::displayMenuOptions() const
{
    cout << "1) Call Number" << endl;
    cout << "2) Title" << endl;
    cout << "3) Subject" << endl;
    cout << "4) Other" << endl;
    cout << "5) Exit" << endl;
    cout << "Enter Keyphrase: ";
}

void Menu::handleSearch(int option)
{
    string searchString;
    vector<MediaItem *> results;
    cout << "\nSearching for ";
    switch (option)
    {
    case 1:
        cout << "call numbers containing: ";
        cin.ignore();
        getline(cin, searchString);
        results = library.searchByCallNumber(searchString);
        // add function here
        break;
    case 2:
        cout << "title containing: ";
        cin.ignore();
        getline(cin, searchString);
        results = library.searchByTitle(searchString);
        // add function here
        break;
    case 3:
        cout << "subject containing: ";
        cin.ignore();
        getline(cin, searchString);
        results = library.searchBySubject(searchString);
        // add function here
        break;
    case 4:
        cout << "other attributes containing: ";
        cin.ignore();
        getline(cin, searchString);
        results = library.searchByOther(searchString);
        // add function here
        break;
    default:
        cout << "Invalid selection. Enter a number from the menu." << endl;
    }
    if (results.empty())
    {
        cout << "No matches found.\n";
    }
    else
    {
        cout << "\nSearch Results:\n";
        for (const auto &item : results)
        {
            cout << *item << endl; // Uses overloaded << operator in MediaItem
        }
    }
}

void Menu::run()
{
    int choice;
    while (true)
    {
        displayMenuOptions();
        cin >> choice;
        if (choice == 5)
        {
            cout << "Exiting search..." << endl;
            break;
        }
        handleSearch(choice);
    }
}