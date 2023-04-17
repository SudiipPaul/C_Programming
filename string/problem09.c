#include <stdio.h>
    
int main()
{
    char str[100];
    char ch, ch2;

    gets(str);
    scanf("%c", &ch);
    if(ch >= 'A' && ch <= 'Z')
    {
        ch2 = ch + 32;
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        ch2 = ch - 32;
    }
    
    int i = 0, count = 0;
    while(str[i] != '\0')
    {
        if(str[i] ==  ch || str[i] == ch2)
        {
            count++;
        }
        i++;
    }
    printf("%d\n", count);

    return 0;
}