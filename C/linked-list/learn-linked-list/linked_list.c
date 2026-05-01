#include <stdio.h>
#include <stdlib.h>

  typedef struct node { // alias for a struct node as Node instead of struct node
      int data; // the value
      struct node *next; // the link, a pointer that points to the next/another struct
    } Node;

int main(void) {

    Node nodeFirst; // declare node variable named nodeFirst
    nodeFirst.data = 1;
    nodeFirst.next = NULL; // null to indicate that there is no next node

    Node nodeSecond;
    nodeSecond.data = 2;
    nodeSecond.next = NULL;

    // linking two nodes by getting the address of nodeSecond
    nodeFirst.next = &nodeSecond;

    printf("%d", (*nodeFirst.next).data);

    return 0;
}