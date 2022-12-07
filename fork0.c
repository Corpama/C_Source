#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include <sys/wait.h>
//注意！请在linux环境下编译运行，macos与windows没有fork
int main()
{
    int rc = fork();
    if(rc<0)
    {
        fprintf(stderr,"fork failed\n");
        exit(1);
    }
    else if(rc==0)
    {
        printf("fork main thread\n");
        close(STDOUT_FILENO);
        char *arg[3]={"wc","kmp.c",NULL};
        execvp("wc",arg);
    }
    else
    {
        int wc = wait(NULL);
        printf("father was run\n");
    }
}