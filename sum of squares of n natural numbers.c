#include<stdio.h>
int main()
{
	int i,a,n,sum;
	scanf("%d",&n);
	i=1;
	sum=0;
	while(i<=n)
	{
		a=i*i;
		sum=sum+a;
		i=i+1;
	}
		printf("%d",sum);
}
