#include <stdio.h>
#include <string.h>

int facot(int a,int b,int n)
{
    if(b<=n)
    {
        a=a*b;
        ++b;
        a=facot(a,b,n);
    }
    return(a);
}

int main()
{
    int a=1,b=2,n;
    int facot(int a,int b,int n);
    scanf("%d",&n);
    printf("%d\n",facot(a,b,n));
    return 0;
}