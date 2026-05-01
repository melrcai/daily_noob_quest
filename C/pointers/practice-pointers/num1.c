#include <stdio.h>

int main(void) {

    int A[5] = {10, 20, 30, 40, 50};
    int *start = A;
    int *end = &A[4];

    while (start < end) {
      int temp = *start;
      *start = *end;
      *end = temp;
      start++;
      end--;
    }

    printf("REVERSED: ");
    for (int i = 0; i < 5; i++) {
      printf("%d, ", A[i]);
    }
    
    return 0;
}

/*
Write a program that takes an array of 5 integers and reverses them 
without creating a second array and without using index brackets 
nums[i] inside your loop.
Constraints:
Initialize an array: int nums[5] = {10, 20, 30, 40, 50};
Use two pointer variables: int *start and int *end.
Use a while loop to swap the values at these addresses until they meet in the middle.
*/
