#include <stdio.h>
#include <string.h>

int main()
{
    char str[]="Hello World";char *p=str;
    while(*p)
    {
        printf("%c\n",*p);
        p++;
    }
    return 0;
}