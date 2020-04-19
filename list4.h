#ifndef LIST_H
#define LIST_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct node {
  char value;
  struct node * pnext;
}Node;

void add2list(Node **pphead, char val);

void print(Node *phead);

void deleteList(Node *phead);

void devine(Node **pphead, Node **pNumbers, Node **pSumbols);

#endif