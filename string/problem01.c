#include <stdio.h>
int main()
{

    char str[100];
    gets(str);
    int len = 0, i = 0;


    while (str[i] != '\0')
    {
        i++;
        len++;
    }
    printf("%d\n", i);
    return 0;
}
