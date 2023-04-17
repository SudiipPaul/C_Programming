#include<stdio.h>
int main()
{
    char str[100];
    gets(str);
    char str2[70];
    int i=0,len=0,j=0;
    while (str[i]!='\0')

    {
        i++;
        len++;
    }
    
    for( j=0,i=len-1;i>=0;i--,j++)
    {
        str2[j]=str[i];
    }
    str2[j]='\0';
    
    int d=strcmp(str,str2);
    if(d==0)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}
