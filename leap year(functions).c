#include<stdio.h>
void leap(int a)
{
	if(a%4==0)
	{
		printf("leap year");
	}
	else
	{
		printf("not");
	}
}
int main(void)
{
	int a;
	scanf("%d",&a);
	leap(a);
	return 0;
}