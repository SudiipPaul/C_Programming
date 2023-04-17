#include<stdio.h>
int main()
{
    char str[100],ch;
    gets(str);
    int i=0,count=0;
    while((ch=str[i])!='\0')
    {
        if(ch>='0' && ch<='9')
        {
           count++;
        }
        i++;
    }
    printf("%d",count);
    return 0;
}


