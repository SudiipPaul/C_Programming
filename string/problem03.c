#include<stdio.h>
int main()
{
    char str1[100],ch;
    int count=0,i=0;
    gets(str1);


    while((ch=str1[i])!='\0')
    {
        if(ch=='a' ||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
           ch=='A' ||ch=='E'||ch=='I'||ch=='O'||ch=='U')
        {
            count++;
        }
        i++;
    }
    printf("%d",count);
    return 0;
}
