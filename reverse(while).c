#include<stdio.h>
int main()
{
		int n,sum=0,x;
	scanf("%d",&n);
	while(n>0)
	{
      x=n%10;
      sum=sum*10+x;
      n=n/10;
	}
	printf("%d",sum);
}
