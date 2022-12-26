#include<stdio.h>
int main()
{
    int q,n,r,p=1,s=0;
    scanf("%d",&n);
    q=n;
    while(n!=0)
    {
        r=n%10;
        n=n/10;
        p=p*r;
        s=s+r;
    }
    n=q;
    printf("%d",p-s);
}