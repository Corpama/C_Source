#include <stdio.h>

int main()
{
    int a[10];
    printf("Please enter 10 numbers to struct a array");
    for (int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i=0;i<10;i++)
    {
        printf("%d\n",*(a+i));
    }
    return 0;
}