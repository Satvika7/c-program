#include<stdio.h>
int main()
{
	int s=0,m;
	int k=0;
	int i=1;
	scanf("%d",&m);
	while(s<=m)
	{
		printf("%d\n",s);
		k=i;
		i=s;
		s=k+i;
	}
}
