#include<stdio.h>
int main()
{
    char str1[100],ch;
    int count=0,i=0;
    gets(str1);


    while((ch=str1[i])!='\0')
    {
        if(ch==' ')
        {
            count++;
        }
        i++;
    }
    printf("%d",count+1);
    return 0;
}
