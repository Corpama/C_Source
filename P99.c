#include <stdio.h>

int main()
{
    char ipt;
    scanf("%c",&ipt);
    if (ipt >= 'A'&& ipt <= 'Z')
    {   
        ipt=ipt+32;
        printf("%c\n",ipt);
    }
    else
        printf("小写字母\n");
    return 0;
}