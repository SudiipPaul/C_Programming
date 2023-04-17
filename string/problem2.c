#include<stdio.h>
int main()
{

    char str1[50];
    gets(str1);
    char str2[30];
    gets(str2);

    int len=0,i=0;
    while(str1[i]!='\0')
    {
        i++;
        len++;
    }
    int j=0;
    while(str2[j]!='\0')
    {
        str1[len+j]=str2[j];
        j++;
    }
    str1[len+j]='\0';
    printf("%s",str1);
    
    return 0;
}
