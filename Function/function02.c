#include<stdio.h>
void printCharacter(char ch)
{
    printf("Value recived from main: %c",ch);
}
int main()
{
    char c;
    scanf("%c",&c);
    printCharacter(c);
    return 0;
}
