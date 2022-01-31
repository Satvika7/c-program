#include<stdio.h>
void unknown(int x,int y)
{
	int i,a=1;
	for(i=0;i<=y;i++)
	{
		a=a*x;
		printf("%d",a);
	}
}
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	unknown(a,b);
}