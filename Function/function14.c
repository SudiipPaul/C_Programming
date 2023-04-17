#include<stdio.h>
void find_even(int array[], int size)
{
    for(int i = 0; i < size; i++)
    {
        if(array[i] % 2 == 0)
        {
            printf("%d ", array[i]);
        }
    }
}
int main()
{
    int array[100], size;

    scanf("%d", &size);
    
    for(int i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }

    find_even(array, size);
    
    return 0;
}