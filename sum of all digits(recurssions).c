#include<stdio.h>
int add(int n)
{
	if(n==0)
	{
		return 0;
	}
	else
	{
		return n%10+add(n/10);
	}
}
int main()
{
int n,r;
scanf("%d",&n);
r=add(n);
printf("%d",r);
return 0;
}