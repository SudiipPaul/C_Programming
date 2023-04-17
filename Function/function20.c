#include <stdio.h>

int *GenNthPrime(int);
int findPrime(int);

int main()
{
    int N;
    scanf("%d", &N);

    int *ptr = GenNthPrime(N);
    printf("%dth Prime: %d", N, *(ptr + (N - 1)));
    return 0;
}
int *GenNthPrime(int N)
{
    static int arr[1000];
    int counter = 1, k = 0;

    for (int num = 2; counter <= N; num++)
    {
        if (findPrime(num))
        {
            arr[k++] = num;
            ++counter;
        }
    }

    return arr;
}
int findPrime(int num)
{
    int count = 1;
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            count = 0;
            break;
        }
    }
    return count;
}