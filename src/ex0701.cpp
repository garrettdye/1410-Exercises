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

    string toHEX(){  
        stringstream sout;
        sout << "#" << setfill('0') << hex 
        << setw(2) << static_cast<int> (red * 255)
        << setw(2) << static_cast<int> (green * 255)
        << setw(2) << static_cast<int> (blue * 255);

        return sout.str();
    }
};

int main() {
    Color c; // This color's value are initialized to zero by the constructor. 
    Color c1(1, 0.25, 0.5); // This color is initialized using the second constructor beacuse values for red, green, and blue are specified.

    cout << c.toRGB() << " --- " << c.toHEX() << endl;
    cout << c1.toRGB() << " --- " << c1.toHEX() << endl;


    return 0;
}
