#include<stdio.h>
void checkNumber(int n)
{
    if(n>0)
    {
        printf("Postive");
    }
    else if(n==0)
    {
        printf("Zero");
    }
    else
    {
        printf("Negative");
    }
}
int main()
{
    int num;
    scanf("%d",&num);
    checkNumber(num);
    return 0;
}
