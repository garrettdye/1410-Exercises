#include <iostream>
#include <string>

using namespace std;

class Author {
private:
    string name, nationality;

public:
    // "const" is used here to ensure that values passed to the constructor are not changed. Object parameters can be more efficiently passed using references. //
    Author() {}
    Author(const string& name, string& nationality) : name(name), nationality(nationality){}

    string get_name() const {
        return name;
    }
    string get_nationality() const {
        return nationality;
    }

    void set_name(const string& name){ // The "this keyword here is required to avoid ambiguity between name, the parameter, and name, the data memeber." //
        this->name = name;
    }
 void set_nationality(const string& nat){
        nationality = nat; 
    }
 };

class Book {
private:
    string title;
    int year; 
    Author author; 

public:
    Book(const string& title, int y, const Author& auth) : title(title), year(y), author(auth) {}

    string get_title() const {
        return title;
    }
    int get_year() const {
        return year;
    }
    Author get_author() const {
        return author; 
    }

    void set_title(const string& a){
        title = a;
    }
    void set_year(int y){
        year = y;
    }
    void set_author(const Author& a){
        author = a;
    }

    void show() const{
        cout << "Book: " << title << "( " << year << " )\n"
            << "Author: " << author.get_name() << "[" << author.get_nationality() << "]\n";
    }
 };

int main(){
    // Author a("George Orwell", "British"); I cannot get this line of code to function properly :( //
    Author a;
    a.set_name("George Orwell");
    a.set_nationality("British"); 
    Book b("1984", 1949, a); 

    b.show();


    return 0;
}