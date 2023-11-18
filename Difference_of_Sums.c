#include<stdio.h>
int main()
{
    int n,i,a=0,sum=0,m=0,b=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    m=sum*sum;
    for(i=1;i<=n;i++)
    {
        a=a+(i*i);
    }
    b=m-a;
    printf("%d",b);
}