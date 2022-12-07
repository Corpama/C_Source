#include <stdio.h>
#include <stdlib.h>

struct Strc
{
    char str;
    struct Strc *next;
};

struct Strc *input()
{
    int T;
    scanf("%d",&T);
    struct Strc *p=(struct Strc*)malloc(sizeof(struct Strc));
    struct Strc *p1=p,*p2=p;
    scanf("%s",&(p1->str));
    for(int c0=1;c0<T;c0++)
    {
        p2=(struct Strc*)malloc(sizeof(struct Strc));
        p1->next=p2;p1=p2;
        scanf("%s",&(p1->str));
    }
    p1->next=NULL;
    return p;
}

void math_on(struct Strc *p)
{
    struct Strc *p1=p;
    char *pc1,*pc2;
    while(p1!=NULL)
    {
        int counter;
        pc1=&(p1->str);
        pc2=pc1+1;
        if('Z'>=(*pc1)&&(*pc1)>='A')
        {
            counter=2;
        }
        else if('z'>=(*pc1)&&(*pc1)>='a')
        {
            counter=1;
        }
        while(*pc1)
        {
            if((('Z'>=(*pc1)&&(*pc1)>='A')&&('z'>=(*pc2)&&(*pc2)>='a'))||(('z'>=(*pc1)&&(*pc1)>='a')&&('Z'>=(*pc2)&&(*pc2)>='A')))
            {
                counter+=2;
            }
            if((('z'>=(*pc1)&&(*pc1)>='a')&&('z'>=(*pc2)&&(*pc2)>='a'))||(('Z'>=(*pc1)&&(*pc1)>='A')&&('Z'>=(*pc2)&&(*pc2)>='A')))
            {
                counter++;
            }
            pc1=pc2;pc2++;
        }
        printf("%d\n",counter);
        p1=p1->next;
    }
}

int main()
{
    struct Strc *input();
    void math_on(struct Strc *p);
    math_on(input());
    return 0;
}