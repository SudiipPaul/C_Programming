#include <stdio.h>

int summation(int x)
{
    static int sum = 0;
    sum += x;
    return sum;
}
int main()
{
    int n;
    scanf("%d", &n);
    int m, num, sum = 0;
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &num);
        sum += num;
        m = summation(num);
    }
    printf("Sum in function: %d\n", m);
    printf("Sum in main: %d\n", sum);

    return 0;
}