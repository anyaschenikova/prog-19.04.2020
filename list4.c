#include "list4.h"

void add2list(Node **pphead, char val)
{
    Node **pp = pphead, *pnew;
    while (*pp)
    {
        if (val < (*pp)->value)
            break;
        else
            pp = &((*pp)->pnext);
    }
    pnew = (Node *)malloc(sizeof(Node));
    pnew->value = val;
    pnew->pnext = *pp;
    *pp = pnew;
}

void print(Node *phead)
{
    Node *p = phead;
    while (p)
    {
        printf("%c ", p->value);
        p = p->pnext;
    }
    printf("\n");
}

void deleteList(Node *phead)
{
    if (phead)
    {
        deleteList(phead->pnext);
        if (phead)
            free(phead);
    }
}

void devine(Node **pphead, Node **pNumbers, Node **pSumbols)
{
    Node **pp = pphead;
    while (*pp)
    {
        if((*pp)->value >= '0' && (*pp)->value <= '9')
            add2list(pNumbers, (*pp)->value);
        if(((*pp)->value >= 'a' && (*pp)->value <= 'z')||((*pp)->value >= 'A' && (*pp)->value <= 'Z'))
            add2list(pSumbols, (*pp)->value);
        pp = &((*pp)->pnext);
    }
}
