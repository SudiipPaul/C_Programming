#include <stdio.h>
#include <string.h>

int main()
{
    char str[100] = {'\0'};
    char word[100] = {'\0'};

    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    fgets(word, sizeof(word), stdin);
    word[strcspn(word, "\n")] = '\0';

    int i, j, match, count = 0;
    for(i = 0; str[i] != '\0'; i++)
    {
        match = 1;
        for(j = 0; word[j] != '\0'; j++)
        {
            if(str[i + j] != word[j])
            {
                match = 0;
                break;
            }
        }
        if(match == 1 && (str[i+j] == ' ' || str[i + j] == '\n' || str[i + j] == '\0'))
        {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}

