#include <stdio.h>

typedef union Data
{
    int i;
    char c;
    float t;
}b;
b a={.c='c'};

int main()
{
 //union Data;
 printf("%c",a.c);   
}