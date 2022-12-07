#include <stdio.h>

int main()
{
    int a[10] = {1, 2, 3, 1, 5, 2, 1, 8, 9, 10}, length = 9;
    for (int i = 0; i <= length; i++)
    {
        for (int i1 = i + 1; i1 <= length; i1++)
        {
            if (a[i] == a[i1])
            {
                for (int i2 = i1; i2 <= length; i2++)
                {
                    a[i2] = a[i2 + 1];
                }
                length--;
            }
        }
    }
    for (int i = 0; i <= length; i++)
    {
        printf("%d\n", a[i]);
    }
}