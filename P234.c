#include <stdio.h>

int main()
{
    int *i;
    int b;
    int a[10];
    printf("Please enter 10 numbers to struct a array:\n");
    //for (int cout=0;cout<10;cout++)
    //{
    //    b=a+cout;
    //    printf("the element%d:%d\n",cout,b);
    //}
    //printf("--------------------------------------------\n");
    for(i=a;i<(a+10);i++)
    {
        scanf("%d",i);
        //首先在程序开始生成了一个十个元素的数组a与一个指针变量i。随后在循环开始之前，由i指向a数组（同时也是数组a的第一个元素的内存地址），
        //循环结束的条件是当i的内存地址等于或大于a的数组加10个元素的内存地址时，结束循环，结束输入。同时注意数组中每个元素在内存中占四字节（gcc 64bit），
        //所以可以直接使用a+1，a+2.....这样的方式直接表示数组中各个元素的内存地址。
    }
    for(i=a;i<(a+10);i++)
    {
        printf("the element is'%d',the element's address is'%d'\n",*i,i);
        //注意：指针在内存中具有自己的内存地址，当你想看指针所指的数组中的元素的内存地址时，不能使用&i，这会展示指针变量i的内存地址，应直接使用i，
        //尽管这会导致gcc报warning。
    }
    return 0;
}