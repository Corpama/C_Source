#include <stdio.h>

int main()
{
    extern void enter(char str[]);
    extern void execu(char str[],char vo);
    extern void out(char str[]);
    char fuckvar();
    char vo,str[100];
    enter(str);
    vo=fuckvar(vo);
    execu(str,vo);
    out(str);
    return 0;
}

char fuckvar(vo)
{
    printf("please enter del char:\n");
    scanf("%c",&vo);
    return vo;
}