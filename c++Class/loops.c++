#include <iostream>
using namespace std;

int main(){
    int i = 0;
    int value = 7;

    /*
    while loops
    while(i <= 5){
        cout << "Hello" << endl;

        // i = i + 1;
        i++; // increment i by 1
    }*/

    // do {
    //     cout << "Hello" << endl;
    // } while(value < 5);

    // cout << " Programming quitting." << endl;

    const string password = "hello";
    cout << "Enter your password" << endl;

    string input;
    cin >> input;

    if (input == password) {
        cout << "Password accepted" << endl;
    } else {
        cout << "Access denied" << endl;
        
    return 0;
}