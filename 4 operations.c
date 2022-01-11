#include<stdio.h>
void add(int a,int b)
{
	int c=a+b;
	printf("%d",c);
}
void subtract(int a,int b)
{
	int d=a-b;
	printf("\n%d",d);
}
void multiply(int a,int b)
{
	int e=a*b;
	printf("\n%d",e);
}
void division(int a,int b)
{
	int f=a/b;
	printf("\n%d",f);
}
int main(void)
{
	int a,b;
	scanf("%d%d",&a,&b);
	add(a,b);
	subtract(a,b);
	multiply(a,b);
	division(a,b);
	return 0;
	
}