#include <stdio.h>
    
int main()
{
    char str1[50];
    gets(str1);

    int i = 0; 
    while(str1[i] != '\0')
    {
        if(str1[i] >= 'A' && str1[i] <= 'Z')
        {
            str1[i] = str1[i] + 32;
        }
        else if(str1[i] >= 'a' && str1[i] <= 'z')
        {
            str1[i] = str1[i] - 32;
        }
        i++;
    }
    printf("%s", str1);
    
    return 0;
}