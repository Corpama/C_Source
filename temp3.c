#include <stdio.h>

int main()
{
    char a[]="i hate xjp";char *p=a;
    for(int i=0;i<10;i++)
    {
        if(*p==' ')
        {
            printf("Bingo!\n");
        }
        printf("%c\n",*p);
        p++;
    }
    printf("%s\n",a);
    return 0;
}