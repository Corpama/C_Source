#include <stdio.h>

int main()
{
    int i,sum=0;
    for (i=1;i<=100;i++)
    {
        sum=sum+1;
        if (i<=50)
        {
            printf("%d\n",sum);
        }
        else
            continue;
    }
    return 0;
}

