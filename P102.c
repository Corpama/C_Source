#include <stdio.h>
int main()
{
    int ipt;
    printf("Please select your feels:\n");
    printf("1.Good\n2.Just soso\n3.So bad\n");
    scanf("%d",&ipt);
    switch(ipt)
    {
        case 1: printf("Thank your feed back\n");break;
        case 2: printf("Emmmmmm,ok\n");break;
        case 3: printf("F**k u shit,get out of my field!!!!!\n");break;
        default: printf("Please input your selects\n");break;
    }
    return 0;
}