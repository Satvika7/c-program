#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a==b&&b==c)
	{
		printf("3");
	}
	else if(a==b&&b!=c)
	{
		printf("2");
	}
	else if(a!=b&&b==c)
	{
		printf("2");
	}
	else if(a==c&&c!=b)
	{
		printf("2");
	}
	else
	{
		printf("0");
	}
}