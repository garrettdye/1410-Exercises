#include <iostream>
#include <stdexcept>

using namespace std;

template <typename T> // The typename that we have chosen, T, should be placed in all of the locations where a datatype decleration would typically be given.
class Calculator {
private:
    T a, b;
public:
    Calculator(T a, T b) : a(a), b(b) {}

    T add() const { return a + b; }
    T subtract() const { return a - b; }
    T multiply() const { return a * b; }
    T divide() const { 
        if(b == 0){
            throw runtime_error("Zero Division Error");
        }
        return a / b; 
    }
};

int main() {
    try{
        Calculator<double> c(10, 2); // The data type between the angle brackets specifies what type of data the Calculator function template should use. 
        cout << c.add() << endl
        << c.subtract() << endl
        << c.multiply() << endl
        << c.divide() << endl;

        Calculator<int> c1(4, 0);
        cout << c.add() << endl
        << c1.subtract() << endl
        << c1.multiply() << endl
        << c1.divide() << endl;
    } catch (const runtime_error& e){ // The type of error we are trying to "catch" should be placed between the parantheses following the catch keyword. 
        cerr << "An Exception Has Occurred: " << e.what() << endl;
    }

    return 0;
}