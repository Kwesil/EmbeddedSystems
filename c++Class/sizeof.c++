#include <iostream>
using namespace std;

int main(){
    //int values = 34;
    int values[] = {4, 7, 3, 4};

    cout << sizeof(values) << endl;
    cout << sizeof(int) << endl;

    for(int i=0; i<4; i++){
        cout << values[i] << " " << flush;
    }

    cout << endl;

    return 0;
}

// sizeof give the number of bytes. each int takes 4 byte