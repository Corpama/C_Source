#include <stdio.h>

typedef struct node
{
    int id;
    int data;
    struct node *head;
    struct node *next;
}List;

int main()
{
    List a,b,c,*p1,*p2;
    a.head=&c;a.id=10;a.data=1000;a.next=&b;
    b.head=&a;b.id=20;b.data=1001;b.next=&c;
    c.head=&b;c.id=30;c.data=1002;c.next=&a;
    p1=&a;
    for(int i=0;i<3;i++)
    {
        printf("%d\n",(p1->id));
        printf("%d\n",(*p1).data);
        p1=(*p1).next;
    }
    p1=&c;
    printf("!!!!!%d\n",(p1->id));
    for(int i=0;i<3;i++)
    {
        printf("%d\n",(p1->id));
        printf("%d\n",(*p1).data);
        p1=p1->head;
    }
}