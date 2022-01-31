#include<stdio.h>
void reverse(int n)
{
	int i,sum=0,x;
	while(n>0)
	{
		x=n%10;
		sum=sum*10+x;
		n=n/10;
	}
	printf("%d",sum);
}
int main()
{
	int m;
	scanf("%d",&m);
	reverse(m);
	return 0;
}