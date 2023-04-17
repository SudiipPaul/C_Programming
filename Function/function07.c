#include <stdio.h>
int addingElements(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    int n;
    printf("Enter the number of elements you want to add: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int result = addingElements(arr, n);

    printf("Sum In Function: %d\n", result);
    printf("Sum In Main: %d\n", result);

    return 0;
}