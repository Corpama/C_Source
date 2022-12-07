#include<stdio.h>
#include<stdlib.h>

typedef struct LNode
{
    int data;
    struct LNode *next;
}LNode;

int main()
{
    LNode *ln=(LNode*)malloc(sizeof(LNode));
    ln->next=NULL;
    int a=101,re=1;
    while(a>0)
    {
        LNode *p=(LNode*)malloc(sizeof(LNode));
        p->data=a%2;
        p->next=ln->next;
        ln->next=p;
        a=a/2;
    }
    LNode *t=ln;
    while(t->next!=NULL)
    {
        t=t->next;
        printf("times-%dis%d\n",re++,t->data);
    }
}