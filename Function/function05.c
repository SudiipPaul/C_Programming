#include<stdio.h>
void compareNumber(int n,int n2)
{
    if(n>n2)
    {
        printf("%d is grater than %d",n,n2);
    }
    else if(n<n2)
    {
        printf("%d is less than %d",n,n2);

    }
    else
    {
        printf("%d is equal to %d",n,n2);
    }
}
int main()
{
    int num,num2;
    scanf("%d %d",&num,&num2);
    compareNumber(num,num2);
    return 0;
}