#include <stdio.h>
int main()
{
    int a=1;
    int b=2;
    int c=3;
    int x;
    if(a-b>0)
    {
        x=a;
    }
    else
    {
        x=b;
    }
    if(x-c>0)
        printf("%d is x",x);
    else 
        printf("%d is c",c);
    return 0;
}