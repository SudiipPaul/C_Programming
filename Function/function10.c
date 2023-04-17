#include <stdio.h>

int power(int x, int y)
{
    if (y == 0)
    {
        return 1;
    }
    else
    {
        return x * power(x, y-1);
    }
}

int main() {
    int x, y, result;
    scanf("%d", &x);
    scanf("%d", &y);
    result = power(x, y);
    printf("%d to the power of %d is %d", x, y, result);
    return 0;
}
