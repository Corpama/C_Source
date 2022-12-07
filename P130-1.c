#include <stdio.h>

int main()
{
    void space();
    void star();
    void wrap();
    int i;
    for (i=0;i<=4;i++)
    {
        int count0;
        for (count0=0;count0<=i;count0++)
        {
            space();
        }
        int count1;
        for (count1=0;count1<5;count1++)
        {
            star();
        }
        wrap();
    }
}

void space()
{
    printf(" ");
}

void star()
{
    printf("*");
}

void wrap()
{
    printf("\n");
}