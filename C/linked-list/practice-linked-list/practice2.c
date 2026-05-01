#include <stdio.h>
#include <stdlib.h> 

typedef struct Node {
  int data;
  struct Node* next;
} Node;

int main(void) {

  int count = 0;
  Node *head = (Node*)malloc(sizeof(Node)); // allocates memory for one node in the heap and head stores its address
  head -> data = 1;
  head -> next = NULL;

  Node *newNode = (Node*)malloc(sizeof(Node));
  newNode -> data = 2;
  newNode -> next = NULL;

  head -> next = newNode;

  newNode = (Node*)malloc(sizeof(Node));
  newNode -> data = 3;
  newNode -> next = NULL;

  head -> next -> next = newNode;

  newNode = (Node*)malloc(sizeof(Node));
  newNode -> data = 4;
  newNode -> next = NULL;

  head -> next -> next -> next = newNode;

  Node *temp = head;
  while (temp != NULL) {
    count++;
    printf("%d -> ", temp -> data);
    temp = temp -> next;
  }

  printf("NULL\n");
  printf("Number of Nodes: %d\n", count);

  Node *current = head; // current points to the head node
  Node *nextNode;

  while (current != NULL) {
    nextNode = current -> next;
    free(current);
    current = nextNode;
  }

    return 0;
}