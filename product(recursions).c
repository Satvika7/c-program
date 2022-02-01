#include<stdio.h>
int product(int a, int b)
{
	int y;
	if(b==1)
	{
		return a;
	}
	else if(a==1)
	{
		return b;
	}
	else
	{
		y= a+product(a,b-1);
		return y;
	}
}
int main()
{
	int product(int,int);
	int a,b;
	scanf("%d%d",&a,&b);
    printf("%d",product(a,b));
	return 0;
}