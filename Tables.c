#include<stdio.h>
int main()
{
    int m,n,i,r;
    scanf("%d%d",&m,&n);
    for(i=1;i<=n;i=i+2)
    {
        r=m*i;
        printf("%d x %d = %d
",m,i,r);
    }
}