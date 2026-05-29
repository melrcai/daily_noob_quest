#include <iostream>
using std::cout;
using std::cin;

int main() {
    
    int array[5][5];
    bool found = false;
    // fillin in w 0's
    for (int i = 0; i < 5; i++) {
      for (int j = 0; j < 5; j++) {
        array[i][j] = 0;
      }
    }

    array[3][3] = 99;
    // to look for num 99 
    for (int i = 0; i < 5; i++) {
      for (int j = 0; j < 5; j++) {
        if (array[i][j] == 99) { 
          cout << "Contraband found at Locker [" << i << "], Drawer [" << j << "]!";
          found = true;
          break;
        }
      }
      if (found) {
        break;
      }
    }

    cout << std::endl; 
    return 0;
}

/*
Create a 5x5 integer array. Fill it mostly with 
zeros 0 (which mean "empty drawer"). Hide a single 99 
(the contraband) somewhere in the middle of the array.
Use nested loops to search through every locker and every drawer.
When your loops find the 99, print out: "Contraband found at Locker [X], Drawer [Y]!"
*/