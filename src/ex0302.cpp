#include <iostream>
#include <cmath>
#include <string>

using namespace std;

string find_quadrant(double deg); // Definition //

string find_quadrant(double deg){ // Implementation //
    double rad = (deg * 3.14) / 180;
    if(sin(rad) >= 0 && cos(rad) >= 0){
        return "Quadrant I";
    }else if (sin(rad) >= 0 && cos(rad) < 0){
        return "Quadrant II";
    }else if (sin(rad) < 0 && cos(rad) < 0){
        return "Quadrant III";
    }else{
        return "Quadrant IV";
    }
}

int main(){
    cout << find_quadrant(23) << endl;
    cout << find_quadrant(123) << endl;
    cout << find_quadrant(223) << endl;
    cout << find_quadrant(323) << endl;
    return 0;
}
