#include<stdio.h>
void factorial(int a)
{
	int i;
	int f=1;
	for(i=1;i<=a;i++)
	{
		f=f*i;
	}
	printf("%d",f);
}
int main(void)
{
	int a;
	scanf("%d",&a);
	factorial(a);
	return 0;
}