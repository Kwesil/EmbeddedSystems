#include <iostream>
#include <string>
using namespace std;

int main() {
    int a = 12;
    int b = 40;

    int c = a * b;
    if(c < 120){
        cout << "You failed" << endl;   
    } else{
        cout << "you passed" << endl;
    };
}