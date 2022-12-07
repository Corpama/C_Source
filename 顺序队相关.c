#include <stdio.h>
#include <stdlib.h>

typedef struct Que
{
    int data[10];
    int front;
    int rear;
}Que;

void initQue(Que *qu)
{
    qu->front=qu->rear=0;
}

int checkQue(Que *qu,int max)
{
    if(qu->front==qu->rear)
    {
        return 1;
    }
    else if((qu->rear+1)%max==qu->front)
    {
        return -1;
    }
    else
    {
        return 0;
    }
}

int enQue(Que *qu,int max,int x)
{
    if(checkQue(qu,max)==-1)
    {
        return 0;
    }
    qu->rear=(qu->rear+1)%max;
    qu->data[qu->rear]=x;
    return 1;
}

int exQue(Que *qu,int max)
{
    if(checkQue(qu,max)==1)
    {
        return 0;
    }
    qu->front=(qu->front+1)%max;
    printf("%d\n",qu->data[qu->front]);
//    qu.data[qu.front]=NULL;
    return 1;
}

int main()
{
    void initQue(Que *qu);int checkQue(Que *qu,int max);int enQue(Que *qu,int max,int x);int exQue(Que *qu,int max);
    Que *qu=(Que*)malloc(sizeof(Que));
    initQue(qu);
    for(int i=1;i<10;i++)
    {
        enQue(qu,10,i);
    }
    for(int i=0;i<10;i++)
    {
        exQue(qu,10);
    }
    return 0;
}