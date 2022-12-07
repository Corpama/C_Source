#include <stdio.h>

int main()
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10},input=4;
    for(int i=0;i<=9;i++)
    {
        if (a[i] == input)
        {
            while(i<=9)     //循环左移n个元素
            {
                a[i]=a[i+1];
                i++;
            }
        }
    }
    for(int i=0;i<=8;i++)
    {
        printf("%d\n",a[i]);
    }
}