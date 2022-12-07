#include<stdio.h>

int main()
{
    char a[]="He1l0 W0rl9!";
    int count0=0,count1=0;
    for(int i=0;i<12;i++)
    {
        if(a[i]>=48&&a[i]<=57)
        {
            count0++;
        }
    }
    for(int i=0;i<12;i++)
    {
        if(a[i]==32)
        {
            count1++;
        }
    }
    printf("This string have %d numbers.\n",count0);
    printf("This string have %d spaces.\n",count1);
}