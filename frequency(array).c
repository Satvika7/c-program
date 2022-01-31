#include<stdio.h>
int main()
{
	int a[100],n,i,key;
	printf("enter the value of n");
	scanf("%d",&n);
	printf("entr the value of search element");
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int sum=0;
	for(i=0;i<n;i++)
	{
		if(a[i]==key)
		{
			sum=sum+1;
		}
	}
	printf("%d",sum);
}