#include "list3.h"

int main()
{
    Node *phead1 = 0;
    add2list(&phead1, "Please");
    add2list(&phead1, "just");
    add2list(&phead1, "working");
    add2list(&phead1, "lol");
    add2list(&phead1, "oh");
    // add2list(&phead1, "YES!"); // uncomment for check
    print(phead1);
    Node *phead2 = 0;
    add2list(&phead2, "Please");
    add2list(&phead2, "just");
    add2list(&phead2, "working");
    add2list(&phead2, "lol");
    add2list(&phead2, "oh");
    add2list(&phead2, "It's");  
    add2list(&phead2, "working");
    add2list(&phead2, "yra!");
    print(phead2);
    printf("%s\n", Include(&phead1, &phead2) ? "Yes" : "No");
    deleteList(phead1);
    deleteList(phead2);
}