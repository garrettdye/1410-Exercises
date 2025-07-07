#include "book.h"

    std::string Book::get_title() const {
        return title;
    }
    int Book::get_year() const {
        return year;
    }
    Author Book::get_author() const {
        return author; 
    }

    void Book::set_title(const std::string& a){
        title = a;
    }
    void Book::set_year(int y){
        year = y;
    }
    void Book::set_author(const Author& a){
        author = a;
    }

    void Book::show() const{
        std::cout << "Book: " << title << "( " << year << " )\n"
            << "Author: " << author.get_name() << "[" << author.get_nationality() << "]\n";
    }
