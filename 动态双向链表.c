#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int id;
    int score;
    struct node *prior;
    struct node *next;
}List;

int stnum;  //记录学生个数

List *createList()
{
    List *p1,*p2,*mainPrior;
    printf("Please input the number of students:\n");
    scanf("%d",&stnum);
    p2=p1=mainPrior=(List*)malloc(sizeof(List));
    printf("Please input id and score:\n");
    scanf("%d,%d",&(p1->id),&(p1->score));
    if((p1->id)!=0)
    {
        for(int count=0;count<(stnum-1);count++)
        {
            p2=(List*)malloc(sizeof(List));
            printf("Please input id and score:\n");
            scanf("%d,%d",&(p2->id),&(p2->score));
            p2->prior=p1;p1->next=p2;p1=p2;p2=p2->next;
        }
        mainPrior->prior=p1;p2=p1->next=mainPrior;
        return mainPrior;
    }
    else
    {
        printf("The student's id should not be 0,and it's start at 1.\n");
        return NULL;    //如果学生id一开始输入了0则输出提示并返回空
    }
}

void printList(List *list)
{
    List *p1;
    p1=list;
    for(int count=0;count<stnum;count++)
    {
        printf("the id is:%d,and his score is:%d.\n",p1->id,p1->score);
        p1=p1->prior;   //反向输出，输出顺序为1>3>2
    }
}

int main()
{
    List *p;
    void printList(List *list);
    p=createList();
    printList(p);
    return 0;
}