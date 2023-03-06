#include <stdio.h>

int addHashMap(int value,int num,int hMap[],int markArray[])
{
    for(int i=0;i<num;i++)
    {
        if(markArray[(value%num)+i]!=0)
        {
            continue;
        }
        else
        {
            hMap[(value%num)+i]=value;
            markArray[(value%num)+i]=1;
            return 1;
            break;
        }
    }
}

int searchHashMap(int key,int num,int hMap[])
{
    for(int i=0;i<num;i++)
    {
        if(hMap[(key%num)+i]!=key)
        {
            continue;
        }
        else
        {
            return (key%num)+i;
            break;
        }
    }
    return -1;
}

int main()
{
    //int addHashMap(int value,int num,int hMap[]);int searchHashMap(int value,int num,int hMap[]);
    int num=13;
    int hMap[num],markArray[num],value,key;
    for(int i=0;i<num;i++)      //一个标记数组，用于标记hMap数组对应位置是否为空
    {
        markArray[i]=0;
    }
    for(int i=0;i<10;i++)
    {
        scanf("%d",&value);
        addHashMap(value,num,hMap,markArray);
    }
    //for(int i=0;i<num;i++)        //展示hMap数组在存入所有元素后的情况
    //{
    //    printf("add:%d,value:%d\n",i,hMap[i]);
    //}
    printf("Input number to find position:\n");
    scanf("%d",&key);
    printf("The position of number to be searched is:%d\n",searchHashMap(key,num,hMap));
}