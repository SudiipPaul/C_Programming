#include <stdio.h>

int IsPrime(int num)
{
    int i;

    if (num <= 1)
    {
        return 0;
    }
    for (i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int num;
    scanf("%d", &num);

    if (IsPrime(num))
    {
        printf("Prime");
    }
    else
    {
        printf("Not Prime");
    }
    return 0;
}
