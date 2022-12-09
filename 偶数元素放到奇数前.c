#include <stdio.h>

void QuickSort(int a[],int length)
{
    int i=0,j=length,temp;
    while(j>i)
    {
        while(j>i&&a[j]%2!=0)
        {
            j--;
        }
        while(j>i&&a[i]%2==0)
        {
            i++;
        }
        if(j!=i)
        {
            temp=a[j];
            a[j]=a[i];
            a[i]=temp;
        }
    }
}

int main()
{
    void QuickSort(int a[],int length);
    int a[]={4,2,6,3,1,8,5,9,0,7},length=10;
    QuickSort(a,length);
    for(int i=0;i<10;i++)
    {
        printf("%d\n",a[i]);
    }
}