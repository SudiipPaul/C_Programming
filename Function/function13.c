#include<stdio.h>
void swapTwoNumbers(int n1,int n2)
{
    int temp;
    temp = n1;
    n1 = n2;
    n2 = temp;
    printf("Value in Function: %d %d\n", n1, n2);
}
int main()
{
    int num,num2;
    scanf("%d %d",&num,&num2);
    swapTwoNumbers(num, num2);
    printf("Value in main: %d %d\n",num,num2);
    return 0;
}
