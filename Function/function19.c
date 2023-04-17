#include <stdio.h>

void GeneratePrime(int);
int IsPrime(int);

int main()
{
    int N;
    scanf("%d", &N);

    GeneratePrime(N);

    return 0;
}

void GeneratePrime(int N)
{
    int x, lastPrime;
    printf("Prime less than %d: ", N);

    for(int i = 1; i < N; i++)
    {
        int Range = IsPrime(N - i);
        if(Range == 1)
        {
            lastPrime = N - i;
            break;
        }
    }

    for (int num = 2; num < N; num++)
    {
        x = IsPrime(num);
        
        if(x == 1)
        {
            printf("%d", num);
            if(num < lastPrime)
            {
                printf(", ");
            }
        }
    }
}

int IsPrime(int num)
{
    int count = 0;
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            count++;
        }
    }
    if (count == 0 && num != 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}