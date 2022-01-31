#include<stdio.h>
void uppercase(int n)
{
	if(n<=65)
	{
		printf("uppercase");
	}
}
int main(void)
{
	int m;
	scanf("%d",&m);
	uppercase(m);
	return 0;
}