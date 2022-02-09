#include<stdio.h>
main()
{
int a[5],i,key;
for(i=0;i<5;i++)
{
	scanf("%d",&a[i]);
}
scanf("%d",&key);
for(i=0;i<5;i++)
{
if(a[i]==key)
{
	printf("found");break;
}
else
{
	printf("not found");break;
}
}
}