#include<stdio.h>
int main()
{
	char c;
	int a,b,m;
	scanf("%c",&c);
	scanf("%d",&a);
	scanf("%d",&b);
	switch(c)
	{
		case '+':m=a+b;
		   printf("%d",m);
		   break;
		case '-':m=a-b;
		   printf("%d",m);
		   break;
		case '*':m=a*b;
		   printf("%d",m);
		   break;
		case '/':m=a/b;
		   printf("%d",m);
		   break;
	}
}