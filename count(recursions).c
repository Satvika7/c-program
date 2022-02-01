#include<stdio.h>
int count(int n)
{
	int y,sum=0;
	if(n==0)
	{
		return 0;
	}
	else
	{
		return 1+count(n/10);
	}
}
int main()
{
	int n,r;
	scanf("%d",&n);
	r=count(n);
	printf("%d",r);
	return 0;
}