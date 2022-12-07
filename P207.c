#include <stdio.h>

int main()
{
    int mathin();
    int Input;
    printf("Please input a number to math it's 阶乘\n");
    scanf("%d",&Input);
    printf("%d\n",mathin(Input));
}

int mathin(int input)
{
    int result=input;
    for(int i=input;i>1;i--)
    {
        result=result*(i-1);
    }
    return(result);
}