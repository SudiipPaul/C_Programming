#include<stdio.h>
void min(int array[], int size)
{
    int min=array[0],num,i;
    for(i = 0; i < size; i++)
    {
        if(min>array[i])
        {
            min=array[i];
        }
    }
    printf("Minimum value %d",min);
}

int main()
{
    int array[100], size;

    scanf("%d", &size);
    
    for(int i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }

    min(array, size);
    
    return 0;
}