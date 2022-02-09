#include<Stdio.h>
int main()
{
	int a[20],n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int e=0,o=0;
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			e=e+a[i];
		}
		else
		{
			o=o+a[i];
		}
	}
	if(e>o)
	{
		printf("%d",e);
	}
	else
	{
		printf("%d",o);
	}
}