
#include<stdio.h>
void acendingOrder(int x[],int n)
{
    int temp;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(x[i]>x[j])
            {
            temp=x[i];
            x[i]=x[j];
            x[j]=temp;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",x[i]);
    }

}
int main()
{
    int array[1000],size;
    scanf("%d",&size);
    for(int i=0;i<size;i++)
    {
        scanf("%d",&array[i]);
    }
    acendingOrder( array, size);
    return 0;
}
