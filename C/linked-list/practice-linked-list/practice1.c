#include <stdio.h>
#include <stdlib.h> 

typedef struct Node {
  int data;
  struct Node* next;
} Node;

int main(void) {

  Node *head = (Node*)malloc(sizeof(Node));
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

  Node *temp = head;
  while (temp != NULL) {
    printf("%d -> ", temp -> data);
    temp = temp -> next;
  }

  printf("NULL\n");

  free(head -> next -> next);
  free(head -> next);
  free(head);

    return 0;
}