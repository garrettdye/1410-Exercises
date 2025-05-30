#include <iostream>
#include <string>

using namespace std;

struct Date {
    int year;
    string month;
    int day;
    // Each of the variables defined within a structure is known as a member. //
};

struct Point {
    int x, y;
};
/* Here the variable d represents the "Date" structure. Using a period followed by the name of a member, we can access individual values contained with the structure. */
void printDate(Date& d) { 
        cout << "Date: " << d.month << " " << d.day << ", " << d.year << endl;

}

void printPoint(Point& p) {
    cout << "(" << p.x << ", " << p.y << ")" << endl;
}

int main() {
    Date dob {2004, "January", 9};
    Date weddingDay {2000, "May", 31};
    // In the case of the above variables, the "Date" structure is the datatype. This allows us to set a value for each member of the structure as the variable is being defined. //

    Point p, q, h;
    // Point p = (10, 30);

    char trash; // The 'trash' variable is used to read the paranthases and comma since we don't need them. //
    cout << "Enter point p: ";
    cin >> trash >> p.x >> trash >> p.y >> trash;

    cout << "Enter point q: ";
    cin >> trash >> q.x >> trash >> q.y >> trash;

    printDate(dob);
    printDate(weddingDay);

    printPoint(p);
    printPoint(q);

    h.x = (p.x + q.x) / 2;
    h.y = (p.y + q.y) / 2;

    printPoint(h);

    return 0;
}