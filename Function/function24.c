#include<stdio.h>
void  gcdLcm(int a,int b)
{
    int max,min,rem;
    if(a>b)
    {
        int max=a;
        int min=b;
    }
    else
    {
        max=b;
        min=a;
    }
    while(max%min!=0)
    {
        int rem=max%min;
        max=min;
        min=rem;
    }
    printf("GCD= %d\n",min);
    printf("LCM= %d",(a*b)/min);
}
int main()
{
    int n,n2;
    scanf("%d %d",&n,&n2);
    gcdLcm(n,n2);
    return 0;
}