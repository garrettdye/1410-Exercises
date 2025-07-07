#include "author.h"

    // Because this class has already been defined within a header file, we only need to include the member functions. //
    // Classes act as their own namespace, because these functions belong to the author class, the need to be prefixed with "Author::" //
std::string Author::get_name() const {
    return name;
}
std::string Author::get_nationality() const {
    return nationality;
}

void Author::set_name(const std::string& name){ // The "this keyword here is required to avoid ambiguity between name, the parameter, and name, the data memeber." //
    this->name = name;
}
void Author::set_nationality(const std::string& nat){
    nationality = nat; 
}
