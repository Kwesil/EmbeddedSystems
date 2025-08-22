// working with strings in C++

#include <iostream>
#include <string>
using namespace std;

int main() {
    string a = "hello";
    string b = "world!";
    string c = a + " " + b; // concatenation
    string d;
    int e;
    
    cout << c <<endl;
    
    cout << "What is your name? " << endl;
    cin >> d; // input from user

    cout << "How old are you" << endl;
    cin >> e; // input from user

    cout << "You are welcome " + d + "!" << endl;
    
    if(e > 18){
        cout << "You are eligible to use this platform!" << endl;
    } else{
        cout << "You are not eligible to use this platform" << endl;
    };
    
}
