#include<stdio.h>
int main()
{
    int a,b,e,f;
    float c,d,g,h;
    scanf("%d%d",&a,&b);
    scanf("%f%f",&c,&d);
    e=a+b;
    f=a-b;
    g=c+d;
    h=c-d;
    printf("%d %d
",e,f);
    printf("%.1f %.1f",g,h);
}