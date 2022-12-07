#include <stdio.h>

int main(int argc,char *argv[])
{
    for(int i=0;i<argc-1;i++)
    {
        ++argv;
        printf("%s\n",*argv);
    }
    return 0;
}