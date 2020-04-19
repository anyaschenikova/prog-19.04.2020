#include "list4.h"

int main()
{
    Node *phead1 = 0, *pnumber = 0, *psumbols = 0;
    add2list(&phead1, 48);
    add2list(&phead1, 49);
    add2list(&phead1, 'a');
    add2list(&phead1, 52);    
    add2list(&phead1, 'b');
    add2list(&phead1, 'l');
    printf("Elements of the list:\n");
    print(phead1);
    devine(&phead1, &pnumber, &psumbols);
    printf("Elements of the number's list:\n");
    print(pnumber);
    printf("Elements of the sumbol's list:\n");
    print(psumbols);
    deleteList(phead1);
    deleteList(pnumber);
    deleteList(psumbols);
}