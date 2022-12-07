#include <stdio.h>

void BSort(int a[])
{
    for(int i0=10;i0>0;i0--)
    {
        int temp,sign=0;
        for(int i1=0;i1<10;i1++)
        {
            if(a[i1]>a[i1+1])
            {
                temp=a[i1];
                a[i1]=a[i1+1];
                a[i1+1]=temp;
                sign=1;
            }
        }
        if(sign==0)
        {
            break;
        }
    }
}

int main()
{
    void BSort(int a[]);
    int a[10]={5,2,3,1,4,0,6,8,7,9};
    BSort(a);
    for(int i=0;i<10;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}