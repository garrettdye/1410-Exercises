#ifndef __BOOK_H__
#define __BOOK_H__
#include <iostream>
#include "author.h"

class Book {
private:
    std::string title;
    int year; 
    Author author; 

public:
    Book(const std::string& title, int y, const Author& auth) : title(title), year(y), author(auth) {}

    std::string get_title() const;
    int get_year() const;
    Author get_author() const;

    void set_title(const std::string& a);
    void set_year(int y);
    void set_author(const Author& a);

    void show() const{
        std::cout << "Book: " << title << "( " << year << " )\n"
            << "Author: " << author.get_name() << "[" << author.get_nationality() << "]\n";
    }
 };

#endif