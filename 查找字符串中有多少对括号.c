#include <stdio.h>

int matchBracket(char a[])
{
    int counter0,counter1;
    char *p=a;
    while(*p)
    {
        if(*p=='(')
        {
            counter0++;
        }
        else if(*p==')')
        {
            counter1++;
        }
        p++;
    }
    int result=counter0-counter1;
    if(result>0)
    {
        return counter1;
    }
    else if(result<0)
    {
        return counter0;
    }
    else
    {
        return counter0;
    }
}

int main()
{
    int matchBracket(char a[]);
    char a[]="(()))";
    printf("%d\n",matchBracket(a));
    return 0;
}