#include <iostream>
#include <string>
using namespace std;

// Functions must have their return datatype listed before the name. If a function does not return a value, its datatype is "void". //

string repeatChar(char, int); // This is a function prototype. The function is declared but not given a body. // 
long convert_hms(int, int, int);

/* The "swapV" function uses references. References allow parameters passed to functions to be modified from their original values.
In the case of this function, the original values of x and y are swapped. The ampersands following the double are what make these parameters references. */
void swapV(double& x, double& y){
    double t = x;
    x = y;
    y = t;
}

long convert_hms(int hours, int mins, int secs){ 
    long seconds = hours * 60 * 60 + mins * 60 + secs;
    return seconds;
}

int main(){
    cout << repeatChar('X', 8) << endl;
    cout << convert_hms(4, 56, 17) << "seconds." << endl;

    double x = 10.0, y = 30.0;
    cout << x << ', ' << y << endl;
    swapV(x, y);
    cout << x << ', ' << y << endl;
    return 0;
}

string repeatChar(char c, int n){ // Here the function is being implemented, thus the char and int parameters must be named. //
    string r;
    for(int i = 0; i < n; i++){
        r = r + c;
    }
    return r;
} 

