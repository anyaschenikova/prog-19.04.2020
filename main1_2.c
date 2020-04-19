#include "list1_2.h"

int main()
{
    Node *phead1 = 0;
    srand(time(0));
    for (int i = 0; i < 10; ++i)
        add2list(&phead1, rand() % 100);
    printf("Elements of the list:\n");
    print(phead1);
    printf("%s\n", repeatingElement(&phead1) ? "Yes" : "No");

    Node *phead2 = 0;
    for (int i = 0; i < 10; ++i)
        add2list(&phead2, rand() % 100);
    printf("Elements of the list:\n");
    print(phead2);
    printf("%s\n", repeatingElement(&phead2) ? "Yes" : "No");

    Node *phead3 = makeL3(&phead1, &phead2);
    print(phead3);
    deleteList(phead1);
    deleteList(phead2);
    deleteList(phead3);
    return 0;
}