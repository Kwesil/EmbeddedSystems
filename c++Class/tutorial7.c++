// logical operators in C++
// This program demonstrates the use of logical operators in C++.
#include <iostream>
#include <string>
using namespace std;

int main() {
    /*bool x = !false;
    bool y = true && false;
    bool z = true || false*/
    int x = 2;
    int y = 5;
    bool tet = (x < y) || (y == x);
    bool test = !(!false || !true) && true;
    bool practice = !((false || !true) || true) && true;

    cout << test << endl;
    cout << practice << endl;
    cout << tet;
}
/*
!  ''not'' reverses an expression
&& 'and'
|| 'or' 
logical operator
*/