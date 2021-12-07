#include<stdio.h>
int main()
{
	int c;
	scanf("%d",&c);
	if(c<0)
	{
		printf("Freezing weather");
	}
	else if(c<10)
	{
		printf("Very Cold weather");
	}
	else if(c<20)
	{
		printf("Cold weather");
	}
	else if(c<30)
	{
		printf("Normal in Temp");
	}
	else if(c<40)
	{
		printf("Its Hot");
	}
	else
	{
		printf("Its Very Hot");
	}
}