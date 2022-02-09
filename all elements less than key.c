#include<stdio.h>
int main()
{
	int a[5],i;
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	int key;
	scanf("%d",&key);
	for(i=0;i<5;i++)
	{
		if(key>a[i])
		{
			printf("%d\n",a[i]);
		}
	}
}