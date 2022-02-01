#include<Stdio.h>
int main()
{
int a[5];
int i;
printf("enter the 5 values");
for(i=0;i<5;i++)
{
	scanf("%d",&a[i]);
}
printf("array elements are");
for(i=0;i<5;i++)
{
	printf("\n%d",a[i]);
}
return 0;
}
