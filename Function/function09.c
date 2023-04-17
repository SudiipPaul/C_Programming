#include<stdio.h>
void factorial (int n)
{
    int sum=1;
    for(int i=1;i<=n;i++)
    {
        sum=sum*i;
    }
    printf("%d",sum);
}

int main()
{
    int x;
    scanf("%d",&x);
    factorial(x);
    return 0;
}