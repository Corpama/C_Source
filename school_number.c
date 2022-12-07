#include <stdio.h>
#include <stdlib.h>

void sort(int *p,int k)
{
    int *p1,*p2,flag,temp;
    p1=p;
    p2=p+1;
    for(int c0=0;c0<k;c0++)
    {
        flag=0; //0代表本轮未产生交换,1反之
        for(int c1=0;c1<k;c1++)
        {
            if((*p1)>(*p2))
            {
                temp=(*p2);(*p2)=(*p1);(*p1)=temp;
                flag=1;
            }
            p1++;p2++;
        }
        p1=p2=p;
        if(flag==0)
        {
            return;
        }
    }
}

void move(int *p,int k)
{
    int *p1,*p2;
    p1=p+(k-1);p2=p+(k-2);
    for(int c0=0;c0<k-1;c0++)
    {
        if((*p1)==(*p2))
        {
            (*p2)-=1;
        }
        p1--;p2--;
    }
}

void output(int *p,int k)
{
    for(int c0;c0<k;c0++)
    {
        printf("%d,",*p);
        p++;
    }
    printf("\n");
}

int main()
{
    void sort(int *p,int k);
    void move(int *p,int k);
    void output(int *p,int k);
    int k;
    scanf("%d",&k);
    int college[k];
    for(int c0=0;c0<k;c0++)
    {
        scanf("%d",&college[c0]);
    }
    int *p=college;
    sort(p,k);
    for(int c0=0;c0<k;c0++)
    {
        printf("out:%d,\n",college[c0]);
    }
    move(p,k);
    //output(p,k);
}