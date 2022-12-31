#include <stdio.h>
#include <string.h>

int main()
{
    char ch[]={"abc"},x[3][4];int i;
    for(i=0;i<3;i++)
    {
        strcpy(x[i],ch);
    }
    for(i=0;i<3;i++)
    {
        printf("%s",&x[i][i]);
    }
    printf("\n");
    return 0;
}