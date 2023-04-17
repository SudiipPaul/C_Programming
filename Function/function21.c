#include <stdio.h>
#include <math.h>

void input(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
}
float calculate(int a[], int n)
{
    float sum = 0, mean;
    for(int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    mean = sum / n;
    return  mean;
}
float dev(int a[], int n)
{
    float sum = 0;
    float mean = calculate(a, n);
    for(int i = 0; i < n; i++)
    {
        sum += (a[i] - mean) * (a[i] - mean);
    }
    float deviation = sqrt(sum / n);
    return deviation;
}
int main()
{
    int num_of_elem, a[100];
    scanf("%d", &num_of_elem);
    input(a, num_of_elem);
    float deviation = dev(a, num_of_elem);
    printf("%0.2f", deviation);
    return 0;
}
