#include<stdio.h>
int lcm(int a,int b);
int main()
{
	int a,b;
	scanf("%d",&a);
	scanf("%d",&b);
	printf("%d",lcm(a,b));
	return 0;
}
int lcm(a,b)
{
	int i=0;
	if(a>b)
	{
		if(a%b==0)
		{
			return b;
		}
		else
		{
			return a*b;
		}
	}
	else
	{
	int k=a;
	a=b;
	b=k;
	if(a%b==0)
	{
		return b;
	}
	else
	{
		return a*b;
	}
	}
}