#include <iostream>
using std::cout;
using std::cin;

int main() {
    
    int map[5][5];

    for (int i = 0; i < 5; i++) {
      for (int j = 0; j < 5; j++) {
        map[i][j] = 0;
        if (i == j) {
          map[i][j] = 1;
        }
      }
    }

    for (int i = 0; i < 5; i++) {
      for (int j = 0; j < 5; j++) {
        cout << map[i][j] << " ";
      }
      cout << std::endl;
    }
    return 0;
}

/*
Create a 5 x 5 integer array and fill it entirely with 0s (Dry Land).
Use nested loops to iterate through the entire grid.
Inside the loops, check if the current position is on the Main Diagonal 
(Hint: What is true about i and j at those spots?).
If it is on the diagonal, change that 0 to a 1 (Water).
Finally, use another set of nested loops to print the final grid 
so you can visually see the diagonal river you just created.
*/