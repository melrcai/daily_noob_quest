#include <stdio.h>

int main(void) {
    int A[8] = {15, 25, 3, 7, 21, 10, 1, 23};
    int *ptr = A;
    int max = A[0];

    for (int i = 0; i < 8; i++) {
      if (*ptr > max) {
        max = *ptr;      
    }
    if (i < 7) {
      ptr++;
    }
  }

  printf("Max value: %d", max);
    return 0;
}

/*
Create an array of 8 random numbers. Use a single 
pointer to "walk" through the array and find the
largest number.
Constraints:
Do not use any index brackets A[i] inside your logic.
Use a pointer (e.g., int *ptr) to visit every element.
Use a variable int max to store the highest value found so far.
*/