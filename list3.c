#include "list3.h"

void add2list(Node **phead, char *val)
{
    Node **pp = phead;
    while ((*pp))
    {
        pp = &((*pp)->pnext);
    }
    Node *pnew = (Node *)malloc(sizeof(Node));
    pnew->pnext = *pp;
    pnew->value = (char *)calloc(strlen(val) + 1, sizeof(char));
    strcpy(pnew->value, val);
    *pp=pnew;
}

void print(Node *phead)
{
    Node *p = phead;
    while (p)
    {
        printf("%s ", p->value);
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
        {
            free(phead->value);
            free(phead);
        }
    }
}

int Include(Node **pphead1, Node **pphead2)
{
    Node **pp1 = pphead1;
    while (*pp1)
    {
        Node **pp2 = pphead2;
        while (*pp2)
        {
            if(!strcmp((*pp1)->value,(*pp2)->value))
            {
                break;
            }
            pp2 = &((*pp2)->pnext);
        }
        if(!(*pp2))
            return 0;
        pp1 = &((*pp1)->pnext);
    }
    return 1;
}
