#include <stdio.h>
#include <stdlib.h>

typedef struct BiNode
{
    int data;
    struct BiNode *lchild;
    struct BiNode *rchild;
}BiNode;

BiNode* initBiNode(int x,int level)
{
    if(level<=4&&level==1)
    {
        BiNode *p=(BiNode*)malloc(sizeof(BiNode)),*firstnode;firstnode=p;
        p->data=x;
        level++;
        p->lchild=initBiNode(2*x,level);
        p->rchild=initBiNode(2*x+1,level);
        return firstnode;
    }
    else if(level<=4)
    {
        BiNode *p=(BiNode*)malloc(sizeof(BiNode));
        p->data=x;
        level++;
        p->lchild=initBiNode(2*x,level);
        p->rchild=initBiNode(2*x+1,level);
        return p;
    }
}

void inOrder(BiNode* binode)
{
    if(binode!=NULL)
    {
        inOrder(binode->lchild);
        printf("%d\n",binode->data);
        inOrder(binode->rchild);
    }
}

int main()
{
    BiNode* initBiNode(int x,int level);void inOrder(BiNode* binode);
    BiNode *p=initBiNode(1,1);
    inOrder(p);
    return 0;
}