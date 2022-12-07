#include <stdio.h>
int Output; //外部变量，在1.c与2.c传递数据
int main()
{
    int mathin();
    printf("Please input a number to math it's 阶乘\n");
    scanf("%d",&Output);
    mathin(Output);
    printf("%d\n",Output);
    return 0;
}