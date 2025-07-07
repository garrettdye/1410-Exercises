#ifndef __AUTHOR_H__ // These statements ensure that the code within this file is only added to the project a single time. // 
#define __AUTHOR_H__
#include <iostream>
#include <string>

// namespace statements should not be used in header files. //

class Author {
private:
    std::string name, nationality;

public:
    Author() {}
    Author(const std::string& name, std::string& nationality) : name(name), nationality(nationality){}

    std::string get_name() const; 
    std::string get_nationality() const;

    void set_name(const std::string& name);
    void set_nationality(const std::string& nat);
 };

#endif
