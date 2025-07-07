#include <iostream>
#include <string>
#include "author.h"
#include "book.h"

using namespace std;

int main(){
    // Author a("George Orwell", "British"); I cannot get this line of code to function properly :( //
    Author a;
    a.set_name("George Orwell");
    a.set_nationality("British"); 
    Book b("1984", 1949, a); 

    b.show();


    return 0;
}