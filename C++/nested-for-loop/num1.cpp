#include <iostream>
using std::cout;
using std::cin;

int main() {
    
    char symbol = '*';
    int numOfRows;

    cout << "Enter number of rows: ";
    cin >> numOfRows;

    for (int i = 1; i <= numOfRows; i++) {
      for (int j = 1; j <= i; j++) {
        cout << symbol; 
      }
      cout << "\n";
    }
    
    return 0;
}

/*
Create a program that asks the user for a height 
(number of rows), and then prints a right-angled 
triangle pattern of stars (*).
*/