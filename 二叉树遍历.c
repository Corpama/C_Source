#include<stdio.h>
#include<stdlib.h>

int c=0;lcounter=0;rcounter=0;
typedef struct node
{
    int data;
    struct node *lchild;
    struct node *rchild;
}node;

node *genRight(node *p1)
{
    node *p2,*head;
    head=p1;
    p2=(node*)malloc(sizeof(node));
    p1->rchild=p2;
    return head;
}

node *genLeft()
{
    node *p1,*p2,*head;
    head=p1=(node*)malloc(sizeof(node));
    p1->data=c;c++;
    p2=(node*)malloc(sizeof(node));
    p1->lchild=p2;p1=p2;
    return head;
}

node *insertData()
{
    for(li<)
}