#include<stdio.h>
int main()
{
	int i,n,m;
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
		m=n*i;
		printf("\n%d*%d=%d",n,i,m);
		i=i+1;
	}
}
