#include<stdio.h>
int main()
{
    int a[100],i,n,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<n;i=i+2)
    {
        if(a[i]%2==0)
        {
            printf("False");
            c++;
            break;
        }
    
    }
    if(c==0)
    {
        printf("True");
    }
}