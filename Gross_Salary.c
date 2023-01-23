#include<stdio.h>
int main()
{
    int bs,da,hra;
    float gross;
    scanf("%d",&bs);
    if(bs<=10000)
    {
        da=0.8*bs;
        hra=0.2*bs;
        gross=bs+hra+da;
        printf("%0.2f",gross);
    }
    else if(bs<=20000)
    {
        da=0.9*bs;
        hra=0.25*bs;
        gross=bs+hra+da;
        printf("%0.2f",gross);
    }
    else if(bs>20000)
    {
        da=0.95*bs;
        hra=0.3*bs;
        gross=bs+hra+da;
        printf("%0.2f",gross);
    }
}