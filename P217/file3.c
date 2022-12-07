void execu(char str[100],char vo)
{
    int i,len;
    len=strlen(str);
    for(i=0;i<len;i++)
    {
        if(str[i]==vo)
        {
            int c;
            printf("find it!:%d!\n",i);
            for(c=i;c<=len;c++)
            {
                str[c]=str[c+1];
            }
           i=i-1;
           len=len-1;
        }
        else
        {
            continue;
        }
    }
}