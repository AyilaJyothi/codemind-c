#include<stdio.h>
int main()
{
    int s=0,n,i;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        s=s+i;
    }
    if(s>n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}