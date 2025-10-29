#include <iostream>

using namespace std;

int main () {
    string password = "hello";
    cout << "Enter your password > " << flush;

    string input;
    cin >> input;

    if (input == password) {
        cout << "password accepted" << endl;
    } else {
        cout << "password denied" << endl;
    }

    // if (input != password) {
    //     cout << "Access denied " << endl;
    // }

    // cout << "'" << input << "'" << endl;

    return 0;
}