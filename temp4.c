#include <stdio.h>

int main()
{
    void routine(int a, int b);
    int a = 1, b = 3;
    routine(a, b);
    return 0;
}

void routine(int a, int b)
{
    if (a <= 5)
    {
        a += 1;
        routine(a, b);
    }
    if (b <= 8)
    {
        b++;
    }
    printf("%d,%d\n", a, b);
}