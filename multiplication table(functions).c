#include<stdio.h>
void multable(int n)
{
	int i,m;
	for(i=0;i<=n;i++)
	{
		m=n*i;
		printf("\n%d",m);
	}
}
int main()
{
	int a;
	scanf("%d",&a);
	multable(a);
}