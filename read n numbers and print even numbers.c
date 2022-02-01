#include<Stdio.h>
int main()
{
	int a,i,m;
	scanf("%d",&m);
	for(i=0;i<=m;i++)
	{
		scanf("%d",&a);
	    if(a%2==0)
	    {
	    	printf("%d",a);
		}
	}
}