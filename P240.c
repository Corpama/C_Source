#include <stdio.h>

int main()
{
    int len,arr[10];
    void inv(int *p,int len);
    printf("Please input the length of array that you want input:\n");
    scanf("%d",&len);
    printf("Please enter 10 numbers:\n");
    for(int a=0;a<len;a++)
    {
        scanf("%d",(arr+a));
    }
    inv(arr,len);
    for(int b=0;b<len;b++)
    {
        printf("%d,",arr[b]);
    }
    printf("\n");
    return 0;
}

void inv(int *p,int len)
{
    int i,temp;
    for(i=0;i<len;i++)
    {
        temp=*(p+len-1);
        *(p+len-1)=*(p+i);
        *(p+i)=temp;
        len--;
    }
}
