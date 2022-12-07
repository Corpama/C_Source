#include <stdio.h>

int main()
{
    int a[10] = {1, 2, 3, 1, 5, 2, 1, 8, 9, 10}, temp;
    int *front = &a[0], *rear = &a[9];
    while (front + 1 != rear)
    {
        temp = *front;
        *front = *rear;
        *rear = temp;
        front++;
        rear--;
    }
    for (int i = 0; i <= 8; i++)
    {
        printf("%d\n", a[i]);
    }
}