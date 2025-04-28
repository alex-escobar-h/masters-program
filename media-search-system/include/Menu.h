#ifndef MENU_H
#define MENU_H
#include <iostream>
#include <string>
#include "Library.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;

class Menu
{
private:
    Library library;
    void displayMenuOptions() const;
    void handleSearch(int option);

public:
    Menu();
    void run();
};
#endif