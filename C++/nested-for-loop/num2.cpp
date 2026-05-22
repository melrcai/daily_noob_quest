#include <iostream>
using std::cout;
using std::cin;

int main() {
    
    int startingNum;

    cout << "Enter starting number: ";
    cin >> startingNum;

    for (int i = startingNum; i > 0; i--) {
      for (int j = i; j > 0; j--) {
        cout << i;
      }
      cout << "\n";
    }

    return 0;
}
/*
Ask the user for a starting number (e.g., 5), 
and print an inverted triangle where each row 
displays the row's counting number.
*/