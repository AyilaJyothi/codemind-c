#include<stdio.h>
int main()
{
    int n,t,a,r,sum=0;
    scanf("%d",&n);
    t=n;
    a=n*n;
    while(a!=0)
    {
       r=a%10;
       a=a/10;
       sum=r+sum;
    }
    if(sum==n)
    printf("Neon Number");
    else
    printf("Not Neon Number");
}