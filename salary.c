#include<stdio.h>
int main()
{
	int b,h,d,G;
	scanf("%d",&b);
	if(b<=10000)
	{
	h=0.2*b;
	d=0.8*b;
	G=b+h+d;
	printf("%d",G);
    }
    else if(b<=20000)
    {
    	h=0.2*b;
    	d=0.9*b;
    	G=b+h+d;
    	printf("%d",G);
	}
	else
	{
		h=0.3*b;
		d=9.5*b;
		G=b+h+d;
		printf("%d",G);
	}
}