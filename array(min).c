#include<stdio.h>
main()
{
	int a[5],min;
	int i;
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
     min=a[0];
	for(i=0;i<5;i++)
	{
		if(a[i]<min)
		{
			min=a[i];
		}
	}
	printf("min is %d",min);
}