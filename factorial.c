#include<stdio.h>
int main()
{
	int n,i,a;
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
		a=a*i;
		i=i+1;
	}
	printf("%d",a);
}
