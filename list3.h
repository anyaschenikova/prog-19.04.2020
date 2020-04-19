#ifndef LIST_H
#define LIST_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

typedef struct node
{
    char* value;
    struct node *pnext;
} Node;

void add2list(Node **phead, char *val);

void print(Node *phead);

void deleteList(Node *phead);

int Include(Node **pphead1, Node **pphead2);

#endif