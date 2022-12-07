#include <stdio.h>

int main()
{
    int i,a=0;
    for(i=0;i<=100;i++)
    {
        a = a+1;
        printf("%d\n",a);
        if(i==50)
        {
            printf("jump over the %d\n",a);
            a = a-1;
            continue;
        }
    }
    return 0;
}