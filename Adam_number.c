#include<stdio.h>
int main()
{
    int a,r,s=0,i,d=0,t,q;
    scanf("%d",&a);
    t=a*a;
    while(a!=0)
    {
        r=a%10;
        s=s*10+r;
        a=a/10;
    }
    q=s*s;
    while(q!=0)
    {
        i=q%10;
        d=d*10+i;
        q=q/10;
    }
    if(t==d)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}