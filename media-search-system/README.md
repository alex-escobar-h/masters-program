# Media Search

## Overview

**Media Search** is a C++ application that allows users to search through a catalog of media items including books, periodicals, videos, and films.  
It supports searching by call number, title, subject, or other specific attributes. The project uses object-oriented programming principles including inheritance, polymorphism, and dynamic memory management.

This project was developed as part of an Object-Oriented Programming course in my Masters program, and demonstrates software design, modularity, and effective use of C++ Standard Library features.

## Features

- Search media by **Call Number**, **Title**, **Subject**, or **Other attributes**
- Supports multiple media types: Books, Periodicals, Videos, and Films
- Object-oriented design with abstract base classes and polymorphism
- Reads media data from structured input files (`data/` folder)
- Proper memory management using dynamic allocation and destructors
- Modular file organization (`src/`, `include/`, `data/`)

## Technologies

- **Language:** C++17
- **Build System:** Makefile
- **Libraries:** C++ Standard Library (`<iostream>`, `<fstream>`, `<vector>`, `<string>`, `<sstream>`, etc.)

## Build Instructions

### 1. Clone the repository:

    ```bash
    git clone https://github.com/alex-escobar-h/masters-program.git
    cd masters-program/media-search-system
    ```

### 2. Build the project:

    ```bash
    make
    ```

### 3. Run the executable:

    ```bash
    ./media_search
    ```

### 4. Clean up build artifacts (optional):

    ```bash
    make clean
    ```

## Usage

After launching the program, you will be prompted to search by one of the following:

- **Call Number**
- **Title**
- **Subject**
- **Other attributes**

The program will display matching results based on your search input.  
The data is loaded automatically from the files located in the `data/` directory.

## Disclaimer

This project is provided solely for educational review and professional portfolio demonstration purposes.

**It must not be used for cheating, plagiarism, or any form of academic dishonesty.** Unauthorized copying, redistribution, or submission of this code for coursework is strictly prohibited.

By viewing or using this project, you agree to abide by these conditions.

## Author

Alexander Escobar
