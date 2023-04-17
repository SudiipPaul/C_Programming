#include<stdio.h>
void  multiByTwo(int x[],int num)
{
    for(int i=0;i<num;i++)
    {
        printf("%d ",x[i]*2);
    }
}
int main()
{
    int array[1000],n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    multiByTwo(array,n);
}