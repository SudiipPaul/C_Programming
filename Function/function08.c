//WAP that will take n integer numbers into an array, and then reverse all the integers within that array. Finally print them all from 0 index to last valid index.
#include<stdio.h>
int main()
{
    int num[1000],n,i,j,t;
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    for(i=0;i<n/2;i++)
    {
        j=n-i-1;
        t=num[i];
        num[i]=num[j];
        num[j]=t;
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",num[i]);
    }

}
