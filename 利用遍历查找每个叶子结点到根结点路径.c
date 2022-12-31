#include <stdio.h>
#include <stdlib.h>

typedef struct BiNode
{
    int data;
    struct BiNode *lchild;
    struct BiNode *rchild;
    struct BiNode *father;      //father指针，用于查找父节点
}BiNode;

typedef struct List
{
    int data;
    struct List *next;
}List;

typedef struct LeafList
{
    int leaf;
    struct LeafList *nextLeaf;
    struct List *headList;
}LeafList;

BiNode* initBiNode(int x,int level,int maxlevel)    //该函数为层次遍历形式的生成满二叉树并自动填入data，level是层数计数器，从1开始，maxlevel是生成最大层数，x是满二叉树节点开始的值(data)，同时为了满足可以查找父节点，还增加了father指针指向
{
    if(level<=maxlevel&&level==1)
    {
        BiNode *p=(BiNode*)malloc(sizeof(BiNode)),*firstnode;firstnode=p;
        p->data=x;
        level++;
        BiNode *l=initBiNode(2*x,level,maxlevel);p->lchild=l;l->father=p;
        BiNode *r=initBiNode(2*x+1,level,maxlevel);p->rchild=r;r->father=p;
        return firstnode;
    }
    else if(level<maxlevel)
    {
        BiNode *p=(BiNode*)malloc(sizeof(BiNode));
        p->data=x;
        level++;
        BiNode *l=initBiNode(2*x,level,maxlevel);p->lchild=l;l->father=p;
        BiNode *r=initBiNode(2*x+1,level,maxlevel);p->rchild=r;r->father=p;
        return p;
    }
    else if(level==maxlevel)
    {
        BiNode *p=(BiNode*)malloc(sizeof(BiNode));
        p->data=x;
        level++;
        return p;
    }
}

void preOrderTracer(BiNode *binode,LeafList *leaflist)
{
    if(binode->lchild==NULL&&binode->rchild==NULL)
    {
        LeafList *a=(LeafList*)malloc(sizeof(LeafList));
        a->leaf=binode->data;
        List *p=(List*)malloc(sizeof(List)),*last=p;
        a->headList=p;
        a->nextLeaf=leaflist->nextLeaf;
        leaflist->nextLeaf=a;
        while(binode!=NULL)
        {
            List *a=(List*)malloc(sizeof(List));
            a->data=binode->data;
            a->next=last->next;
            last->next=a;
            last=a;
            binode=binode->father;
        }
    }
    else
    {
        preOrderTracer(binode->lchild,leaflist);
        preOrderTracer(binode->rchild,leaflist);
    }
}

int main()
{
    BiNode* initBiNode(int x,int level,int maxlevel);void preOrderTracer(BiNode *binode,LeafList *leaflist);
    BiNode *p=initBiNode(1,1,4);
    LeafList *leaflist=(LeafList*)malloc(sizeof(LeafList));
    preOrderTracer(p,leaflist);
    leaflist=leaflist->nextLeaf;
    while(leaflist!=NULL)
    {
        printf("leaf is:%d\n",leaflist->leaf);
        List *a=leaflist->headList->next;
        while(a!=NULL)
        {
            printf("%d\n",a->data);
            a=a->next;
        }
        printf("--------------------\n");
        leaflist=leaflist->nextLeaf;
    }
    return 0;
}