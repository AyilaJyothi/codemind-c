#include<stdio.h>
int main()
{
	float a,b,sc;
	scanf("%f",&a);
	if(a<=199)
	{
		b=a*1.20;
	}
	else if(a>=200 && a<=400)
	{
		b=a*1.50;
	}
	else if(a>=400 && a<=600)
	{
		b=a*1.80;
	}
	else
	{
		b=a*2.00;
	}
	if(b>400)
	{
		sc=b+(0.15*b);
	}
	else 
	{
		sc=b+100;
	}
	printf("%.2f",sc);
}