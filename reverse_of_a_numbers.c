#include<stdio.h>
int main()
{
    int r,t,n,s=0;
    scanf("%d",&n);
    t=n;
    while(n!=0)
    {
        r=n%10;
        s=s*10+r;
        n=n/10;
    }
    if(s!=r)
    printf("%d",s);
}