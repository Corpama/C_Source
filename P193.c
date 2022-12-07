#include <stdio.h>
//数组、传递数组为实参、循环、冒泡法排序
//通过两个嵌套的循环控制排序，每一次小循环负责对比两个临近的数值，并将大的放在左边，随着i不断增加将整个数组中最大的数值放在最左侧。
//每第n次大循环的结束都意味着第n大的数字已找到并放置在了位置a[n-1]，因为有10个数字，所以保险起见，应将大循环的循环次数控制在10次。
int main()
{
    int max();
    int insert(int inarr[],int length);
    int i,largest,length;
    printf("Please input your array's length:\n");
    scanf("%d",&length);
    int a[length];
    insert(a,length);
    printf("the original array is:\n");
    for(i=0;i<=9;i++)
    {
        printf("%d,",a[i]);    //打印原数组
    }
    printf("\n");
    largest=max(a);  //将a作为参数，调用max()函数，max()函数返回的值（最大数字）赋值给largest
    printf("the reorganize array is:\n");
    for(i=0;i<=9;i++)
    {
        printf("%d,",a[i]);   //经过max函数排列后，直接打印a数组
    }
    printf("\n");
    printf("the largest number is %d\n",largest);  //输出最大数
    return 0;
}

int insert(int inarr[],int length)
{
    int *p=inarr;
    for (int i=1;i<=length;i++)
    {
        scanf("%d",p);
        p++;
    }
    return 0;
}

int max(int input[10])
{
    int i,p,o,x;
    for(p=1;p<=10;p++)
    {
        printf("第%d次大循环\n",p);
        for(i=9;i>=0;i--)
        {
            if(input[i]-input[i-1]>0)
            {
                if(i>0)                     //没什么用，用于防止i被减到负数还进行判断，之前已经在小循环的判断条件中设置了i在等于0时循环停止。
                {
                    o=input[i-1];           //这里排序的数组intput实际只是一个内存地址，其更改实际上是对main函数中的a数组的更改，
                    input[i-1]=input[i];    //所以在main函数中可直接printf(a)。
                    input[i]=o;
                    for(x=0;x<=9;x++)               //|打印每次操作后的数组。
                    {                               //|
                        printf("%d,",input[x]);     //|
                    }                               //|
                    printf("\n------------------------\n");
                }
            }
            else
            {
                continue;
            }
        }
    }
    return input[0];
}