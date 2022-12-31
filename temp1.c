#include <stdio.h>

int *deleteElement(int a[],int length,int min,int max)
{
    for(int i=0;i<length;i++)
    {
        if(a[i]>min&&a[i]<max)
        {
            for(int i1=i;i1<length-1;i1++)
            {
                a[i1]=a[i1+1];
            }
            length--;
            i--;
        }
    }
    return a;
}

int main()
{
    int *deleteElement(int a[],int length,int min,int max);
    int a[]={1,2,3,4,5,6,7,8,9,0},length=10,min=3,max=9,*b;
    b=deleteElement(a,length,min,max);
    for(int i=0;i<10;i++)
    {
        printf("%d\n",b[i]);
    }
}