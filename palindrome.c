#include<stdio.h>
int main()
{
		int n,sum=0,x,a;
	scanf("%d",&n);
	a=n;
	while(n>0)
	{
      x=n%10;
      sum=sum*10+x;
      n=n/10;
	}
	if(a==sum)
	{
	printf("palindrome"); 
    }
	else
	{
	printf("not palindrome");
    }
}
