#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct list
{
    char *data;
    int length;
}Ch_list;

Ch_list *insert_list()
{
    Ch_list *p;p=(Ch_list*)malloc(sizeof(Ch_list));
    char *p1;                           //注意15与16行，这里定义了一个p1字符串指针，原本是char *p1[19];但是没有让他指向任何字符数组，这是不对的，作为一个指向数组的指针，
    p1=(char*)malloc(sizeof(char)*19);  //必须要让他指向一片字符数组的空间，作如果一开始不打算对这个指针指向的字符数组插入元素（让它保持空），那么就需要用malloc申请一片内存空间让指针指向。
    printf("Please input your id card number:\n");
    scanf("%s",p1);
    p->length=strlen(p1);
    p->data=(char*)malloc(sizeof(char)*((p->length)+1));
    for(int c=0;c<=(19);c++)
    {
        (p->data)[c]=(p1[c]);
    }
    return p;
}

void Print_list(Ch_list *p)
{
    Ch_list *p1;p1->length=8;
    p1->data=(char*)malloc(sizeof(char)*9);
    for(int c=0,i=6;c<8;c++,i++)
    {
        (p1->data)[c]=(p->data)[i];
    }
    printf("%s\n",(p1->data));
}

int main()
{
    void Print_list(Ch_list *p);
    Print_list(insert_list());
}