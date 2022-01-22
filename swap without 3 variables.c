//a=10,b=9
#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	a=a+b;
	a=a-b;
	b=a;
	printf("%d",a);
	printf("%d",b);
}