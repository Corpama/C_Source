#include <stdio.h>

int main()
{
    int k=0,*p=&k;
    *p=1;
    printf("%d\n",k);
    return 0;
}