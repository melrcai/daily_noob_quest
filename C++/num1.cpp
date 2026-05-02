#include <iostream>
using std::cout;
using std::cin;

int main() {
    
    
    int num[5];

    // ask the user to enter 5 numbers
    for (int i = 0; i < 5; i++) {
      cout << "Enter number: "; 
      cin >> num[i];
    }
    
    // print it out unless it is 42
    cout << "Output: ";
    for (int i = 0; i < 5; i++) {

      if (num[i] == 42) {
        break;
      }

      // check it if's even      
      if (num[i] % 2 == 0) {
        cout << num[i] << " ";
        }
    }

    cout << std::endl;
    
    return 0;
}

/*
Create an array of 5 integers from user input. 
Iterate through the array to print only the even numbers,
but terminate the process immediately if a specific "tripwire" 
value is found.
*/