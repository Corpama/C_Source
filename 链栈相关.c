#include <stdio.h>
#include <stdlib.h>

typedef struct LNode
{
    int data;
    struct LNode *prior;
    struct LNode *next;
} LNode;

LNode *initStack(LNode *lst)                //该函数生成头节点，头节点data为空，在设计上，头节点一直会有个lst指针指着它，所以输出节点也会是访问lst->next，入节点也是接在lst后面，lst始终保持最顶端
{
    lst = (LNode *)malloc(sizeof(LNode));
    lst->next = NULL;
    return lst;
}

int checkStack(LNode *lst)          //检查是否栈空
{
    if (lst->next == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

LNode *pushStack(LNode *lst, int data)         //入栈函数
{
    LNode *p;
    p = (LNode *)malloc(sizeof(LNode));
    p->data = data;
    p->next = lst->next;
    lst->next = p;
    return lst;
}

int popStack(LNode *lst)        //出栈并返回该节点的值(data)
{
    LNode *p;
    if (checkStack(lst) != 1)
    {
        p = lst->next;
        lst->next = lst->next->next;
        return p->data;
        free(p);
    }
    else
    {
        return -1;
    }
}

int main()
{
    LNode *lst=NULL;int a;
    LNode *initStack(LNode *lst);int checkStack(LNode *lst);LNode *pushStack(LNode *lst, int data);int popStack(LNode *lst);    //这行可以不要，但是为了习惯还是写了这行声明函数的语句
    lst=initStack(lst);
    for(int i=0;i<10;i++)
    {
        lst=pushStack(lst,i);
    }
    //printf("%d\n",lst->next->next->data);
    for(int i=0;i<10;i++)
    {
        printf("%d\n",popStack(lst));
    }
}