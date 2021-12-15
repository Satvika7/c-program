#include<stdio.h>
int main()
{
	int n,s=0;
	int i=1;
	scanf("%d",&n);
	while(i<n)
	{
		//printf("%d\n",i);
		s=s+i;
		i=i+1;
	}
	printf("%d",s);
	return 0;
}
