#include<stdio.h>
void product(int a, int b,int c)
{
	int p=a*b*c;
	printf("%d",p);
}
int main(void)
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	product(a,b,c);
	return 0;
}