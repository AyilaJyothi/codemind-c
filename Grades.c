#include<stdio.h>
int main()
{
    float x,p,c,b,m,cp;
    scanf("%f%f%f%f%f",&p,&c,&b,&m,&cp);
    x=(p+c+b+m+cp)/5;
    if(x>=90)
    printf("Grade A");
    else if(x>=80)
    printf("Grade B");
    else if(x>=70)
    printf("Grade C");
    else if(x>=60)
    printf("Grade D");
    else if(x>=40)
    printf("Grade E");
    else if(x<40)
    printf("Grade F");
}