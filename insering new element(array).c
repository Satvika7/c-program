#include<stdio.h>
int main()
{
	int a[100],n,i,pos,ele;
	scanf("%d",&n);
	scanf("%d",&pos);
	scanf("%d",&ele);
	
	
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		for(i=n;i>2;i--)
		{
		    a[i+1]=a[i];
		}
		a[i]=ele;
		printf("%d",a[i]);
}
