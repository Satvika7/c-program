#include<stdio.h>
int main()
{
	int a,b,c,d,e,M;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	scanf("%d",&d);
	scanf("%D",&e);
	M=(a+b+c+d+e)/2;
	if(M>90)
	{
		printf("A");
	}
	else if(M>80)
	{
		printf("B");
	}
	else if(M>70)
	{
		printf("C");
	}
	else if(M>40)
	printf("D");
	else 
	{
	printf("E");
    }
}