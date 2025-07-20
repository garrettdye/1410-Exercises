#include <iostream>
#include <vector>

using namespace std; 

class Animal {
public:
    virtual void speak(){ // The virtual keyword allows derived classes to have their own implimentation of a function. //
        cout << "Some sound\n";
    }

    virtual ~Animal(){ // If a base class has one or more virtual functions, it should also have a virtual destructor. //
        cout << "Animal cleaning\n";
    }
};

class Dog : public Animal {
public:
    void speak(){
        cout << "Woof\n";
    }

    ~Dog(){ // Child class destructors are called before their parents class's destructor. //
        cout << "Dog cleaning\n";
    }
};

class Cat : public Animal {
public:
    void speak(){
        cout << "Meow\n";
    }

    ~Cat(){
        cout << "Cat cleaning\n";
    }
};


int main(){
    vector<Animal*> pets;
    pets.push_back(new Dog());
    pets.push_back(new Cat());

    for(Animal* pet : pets){
        pet->speak();
    }

    Animal& d = *pets[0];
    Animal& c = *pets[1];
    d.speak();
    c.speak(); 

    Animal ad = *pets[0]; // Polymorphism does not function properly on non-pointer or non-reference objects. //
    Animal ac = *pets[1]; // The speak functions below will call the speak function in the base, animal class. //
    ad.speak();
    ac.speak(); 

    for(Animal* pet : pets){
        delete pet;
    }

    return 0;
}