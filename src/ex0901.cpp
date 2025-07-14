#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>

using namespace std;

class Color {
private:
    double red, green, blue;

public:
    Color(): red(0.0), green(0.0), blue(0.0){}
    Color(double r, double g, double b):red(r), green(g), blue(b){}

    string toRGB(){  // This function does not need "red", "green", and "blue " as paramters because it already has access to them on account of being part of the same class.
        stringstream sout;
        sout << "rgb(" << static_cast<int> (red * 255) << "," << static_cast<int> (green * 255)
            << "," << static_cast<int> (blue * 255) << ")";

        return sout.str();
    }

    string toHEX() const {  
        stringstream sout;
        sout << "#" << setfill('0') << hex 
        << setw(2) << static_cast<int> (red * 255)
        << setw(2) << static_cast<int> (green * 255)
        << setw(2) << static_cast<int> (blue * 255);

        return sout.str();
    }

    friend ostream& operator<<(ostream& out, const Color& c){
        out << c.toHEX();
        return out; 
    }

    friend istream& operator>>(istream& in, Color& c){
        in >> c.red >> c.green >> c.blue;
        return in; 
    }

    double operator[](int index) const {
        switch(index){
            case 0: return red;
            case 1: return green;
            case 2: return blue;
            default: return -1.0;
        }
    }

    double& operator[](int index){
        switch(index){
            case 0: return red;
            case 1: return green;
            case 2: return blue;
            default: throw -1.0;
        }
    }

    bool operator==(const Color& c){
        return red == c.red && green == c.green && blue == c.blue;
    }
};

int main() {
    Color c; // This color's value are initialized to zero by the constructor. 
    Color c1(1, 0.25, 0.5); // This color is initialized using the second constructor beacuse values for red, green, and blue are specified.

    cout << c << endl; // <<(cout, c) cout is not part of a class that we have created, it is part of the ostream class, thus we must use a friend function. 
    cout << c1 << endl; 

    cout << c.toRGB() << " --- " << c.toHEX() << endl;
    cout << c1.toRGB() << " --- " << c1.toHEX() << endl;

    Color c2;
    cout << "Enter a color (Three values between 0.0 and 1.0). ";
    cin >> c2;

    cout << "\nC1 red:" << c1[0] << endl; // read only 
    cout << "\nC green:" << c[1] << endl; 
    cout << "\nC2 blue:" << c2[2] << endl; 

    c2[2] = .6; // write

if(c1 == c2){ // ==(c1, c2) becomes c1.==(c2)   c1 and c2 are objects made from classes that we have created, thus we can use a member function.
    cout << "same" << endl;
}else{
    cout << "different" << endl;
}

    return 0;
}
