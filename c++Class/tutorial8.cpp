// condiitonal statements in C++
// This program demonstrates the use of conditional statements in C++.
#include <iostream>
#include <string>
using namespace std;

int main() {
    /*int x = 6;
    if (x < 7) {
        cout << "x is less than 7!" << endl;
        cout << "x is less than 7!" << endl;
    }*/
    cout << "Pick my favourite number";
    int x;
    cout << "Type a number: ";
    cin >> x;
    if (x == 10 && x == 9) {
        cout << "This is my favourite number!" << endl;
    } else if (x < 5) {
        cout << "x is less than 5" << endl;
    } else if (x > 5) {
        cout << "x is greater than 5" << endl;
    } else {
        cout << "This is not my favourite number!" << endl;
    }
    cout << "run";

}
/*
if (){

} else if () {

} else {

}
*/