#include <stdio.h>
#include <string.h>

int main()
{
    char str[]="Hello World";char *p=str;
    int number[]={1,2,3,4,5,6,7};int *num=number;
    while(*p!='\0') //或者while(*p)
    {
        printf("%c\n",*p);
        p++;
    }
    printf("-----------------------------------\n");
    while(*num)     //int数组尾部没有'\0'，所以没法用while判断结束，这种写法是错误演示
    {
        printf("%d\n",*num);
        num++;
    }
    return 0;
}