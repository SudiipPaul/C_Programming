#include<stdio.h>
void evenOdd(int n) {
    if (n % 2 == 0)
    {
         printf("even");
    } 
    else
    {
        printf("odd");
    }
}

int main() 
{
    int num;
    scanf("%d",&num);
    evenOdd(num);
    return 0;
}

