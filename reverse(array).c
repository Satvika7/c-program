#include<stdio.h>
int main()
{
	int a[20],n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=n-1;i>=0;i--)
	{
		printf("\n%d",a[i]);
	}
	return 0;
}