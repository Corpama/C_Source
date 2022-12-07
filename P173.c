#include <stdio.h>
int main()
{
    int input;
    char a;
    int compare();
    printf("Please input your score:\n");
    scanf("%d",&input);
    if (compare(input)==0)
    {
        printf("ohhhhhh\n");
    }
    else
    {
        printf("shitttttt\n");
    }
    return 0;
}

int compare(del)
{
    int anchor=60;
    int result;
    if(del-anchor>=0)
    {
        result=0;
        return (result);
    }
    else
    {
        result=1;
        return (result);
    }
}