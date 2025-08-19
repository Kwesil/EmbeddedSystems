#include <iostream>
#include <string>
using namespace std;
//  comparison operator true is always = 1 and false = 0
int main() {
    bool test = 'a' < 'b';
    cout << test;
    int x, y;
    cout << "type a number: ";
    cin >> x;
    cout << "type another number: ";
    cin >> y;
    cout << "These two number are the same: " << (x == y);
}
/*
<, >, <=, >=, !=, ==
*/
