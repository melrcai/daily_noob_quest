#include <iostream>
using std::cout;
using std::cin;

int main() {

    int targetNum;
    int array[10];
    bool found = true;

    cout << "Enter a target number: ";
    cin >> targetNum;
    cout << "==== Enter 10 numbers ====" << std::endl;
    for (int i = 0; i < 10; i++) {
        cout << i + 1 << ": ";
        cin >> array[i];
    }

    for (int i = 0; i < 10; i++) {
        if (array[i] == targetNum) {
            cout << "Found " << targetNum << " at position " << (i + 1) << std::endl;
            found = false;
            break;
        }
    }
    
    if (found) {
        cout << "Did not find " << targetNum << std::endl;
    }

    return 0;
}

/*
Create a program that asks the user to enter 10 numbers. 
The program should look for a specific "Target Number" and 
tell the user if it found it, and more importantly, 
where (at which position) it was found first.
*/