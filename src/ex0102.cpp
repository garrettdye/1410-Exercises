#include <iostream>
using namespace std;

main() {
    double c, f;
    cout << "Enter a Temperature in Celsius: " << endl;
    cin >> c;

    f = ((9.0 * c) / 5.0) + 32;
    cout << "Temperature in Fahrenheit: " << f << endl;

    return 0;
}