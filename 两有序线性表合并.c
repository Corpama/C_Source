#include <stdio.h>
#include <stdlib.h>

typedef struct LNode
{
    int data;
    struct LNode *next;
} LNode;

void initLNode(LNode *first, int start, int end)
{
    LNode *p1;
    for (int i = start; i < end; i++)
    {
        p1 = (LNode *)malloc(sizeof(LNode));
        p1->data = i;
        p1->next = first->next;
        first->next = p1;
    }
}

LNode *mergeDoubleLNode(LNode *NO1, LNode *NO2)
{
    LNode *p = NO1->next, *q = NO2->next, *newList = (LNode *)malloc(sizeof(LNode)), *newP;
    newList->next = NULL;
    while (p != NULL || q != NULL)
    {
        if (p != NULL && q != NULL)
        {
            if ((p->data) > (q->data))
            {
                newP = (LNode *)malloc(sizeof(LNode));
                newP->data = p->data;
                newP->next = newList->next;
                newList->next = newP;
                p = p->next;
            }
            else if ((p->data) <= (q->data))
            {
                newP = (LNode *)malloc(sizeof(LNode));
                newP->data = q->data;
                newP->next = newList->next;
                newList->next = newP;
                q = q->next;
            }
        }
        else if (p == NULL)
        {
            newP = (LNode *)malloc(sizeof(LNode));
            newP->data = q->data;
            newP->next = newList->next;
            newList->next = newP;
            q = q->next;
        }
        else if (q == NULL)
        {
            newP = (LNode *)malloc(sizeof(LNode));
            newP->data = p->data;
            newP->next = newList->next;
            newList->next = newP;
            p = p->next;
        }
    }
    return newList;
}

void showNewList(LNode *newlist)
{
    LNode *p = newlist->next;
    while (p != NULL)
    {
        printf("%d\n", p->data);
        p = p->next;
    }
}

int main()
{
    void initLNode(LNode * first, int start, int end);
    LNode *mergeDoubleLNode(LNode * NO1, LNode * NO2);
    void showNewList(LNode * newlist);
    LNode *newlist;
    LNode *NO1 = (LNode *)malloc(sizeof(LNode));
    LNode *NO2 = (LNode *)malloc(sizeof(LNode));
    NO1->next = NULL;
    NO2->next = NULL;
    initLNode(NO1, 1, 5);
    initLNode(NO2, 3, 6);
//    showNewList(NO1);
//    printf("--------------------------------\n");
//    showNewList(NO2);
    newlist = mergeDoubleLNode(NO1, NO2);
    printf("--------------------------------\n");
    showNewList(newlist);
    return 0;
}