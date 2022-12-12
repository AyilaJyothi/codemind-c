#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c;
    float s,t;
    scanf("%f%f%f",&a,&b,&c);
    s=(a+b+c)/2;
    t=pow(s*(s-a)*(s-b)*(s-c),0.5);
    printf("%.2f",t);
}