#include <iostream>
using namespace std;

int main() {
    int values[3];

    values[0] = 88;
    values[1] = 123;
    values[2] = 7;

    cout << values[0] << endl;
    cout << values[1] << endl;
    cout << values[2] << endl;

    cout << endl << "Array of doubles" << endl;
    cout << "===================" << endl;

    double numbers[4] = {4.5,2.3, 7.2, 8.1};

    for(int i=0; i<4; i++) {
        cout << "Element at index " << i << ": " << numbers[i] << endl;
    }

    cout << endl << "Intializing with zero values" << endl;
    cout << "===================================" << endl;

    int numberArray[8] = {};

    for (int i=0; i<8; i++) {
        cout << "Element at index " << ": " << numberArray[i] << endl;
    }

    // Arrays of strings
    cout << endl << "Intializing with strings" << endl;
    cout << "===================================" << endl;

    string texts[] = {"apple", "banana", "oranges"};

    for(int i=0; i<3; i++) {
        cout << "Element at index " << ": " << texts[i] << endl;
    }
    
    return 0; 
}