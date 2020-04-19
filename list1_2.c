#include "list1_2.h" 

void add2list(Node **pphead, int val)
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
        printf("%d ", p->value);
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

int repeatingElement(Node **pphead) // Task #1
{
    int val = (*pphead)->value;
    Node **pp = &((*pphead)->pnext);
    while (*pp){
        if (val == (*pp)->value) //  We can do it, because the list was sorted
            return 1;
        val = (*pp)->value;
        pp = &((*pp)->pnext);
    }
    return 0;
}

Node* makeL3(Node **pphead1, Node **pphead2) // Task #2
{
    Node *phead3 = 0;
    Node **pp1 = pphead1;
    while (*pp1)
    {
        int val = (*pp1)->value;
        Node **pp2 = pphead2;
        while (*pp2){
            if((*pp2)->value == val)
                break;
            pp2 = &((*pp2)->pnext);
        }
        if(!(*pp2))
            add2list(&phead3, val);
        pp1 = &((*pp1)->pnext);
    }
    return phead3;
}