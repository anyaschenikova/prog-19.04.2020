#ifndef LIST_H
#define LIST_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct node {
  int value;
  struct node * pnext;
}Node;

void add2list(Node **pphead, int val);

void print(Node *phead);

void deleteList(Node *phead);

int repeatingElement(Node **pphead);

Node* makeL3(Node **pphead1, Node **pphead2);

#endif