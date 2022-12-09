#include <stdio.h>

int BSearch(int a[],int low,int high,int key)
{
    int mid;
    while(high>=low)
    {
        mid=(high+low)/2;
        if(a[mid]==key)
        {
            return mid;
        }
        else if(key>a[mid])
        {
            low=mid+1;
        }
        else if(key<a[mid])
        {
            high=mid-1;
        }
    }
    return -1;
}

int main()
{
    int BSearch(int a[],int low,int high,int key);
    int a[]={0,1,3,4,6,10,14,17,34,56},length=10,key=34;
    printf("the position had been checked in array is:%d\n",BSearch(a,0,9,key));
    return 0;
}