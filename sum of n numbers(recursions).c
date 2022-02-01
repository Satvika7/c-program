#include<Stdio.h>
int sum(int n)
{
	if(n==1)
	{
		return 1;
	}
	else
	{
	    return n+sum(n-1);
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	sum(n);
	printf("%d",sum(n));
}