#include <iostream>
using namespace std;

void reduce_balance(int* p, int by){
    *p = *p - by;
}

int main(){
    int balance = 85;
    int* ptr = &balance; // Placing the ampersand before the variable extracts its address. "&balance" can be read as, "address of balance."

    cout << balance << endl << ptr << endl;

    int w = 15;
    reduce_balance(ptr, w);
    cout << balance << endl;

    int* dbalance = new int; // The new operator tells the computer to allocate memory. //
    *dbalance = 100;

    cout << *dbalance << endl; // Placing an asterisk in front of the variable name allows access to the value of the vaialbe. 100 in this case. //
    cout << dbalance << endl; // No asterisk here so the memory address is given instead. //

    delete dbalance;

    return 0;
}