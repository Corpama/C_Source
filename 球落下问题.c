#include <stdio.h>

int main()
{
    int n=10;
    float height=20;
    for(int i=1;i<=n;i++)
    {
        height=height/3;
    }
    printf("%f\n",height);
    return 0;
}