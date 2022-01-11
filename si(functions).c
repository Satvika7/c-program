#include<stdio.h>
void si(int p,int t,int r)
{
	int si=(p*t*r)/100;
	printf("%d",si);
}
int main(void)
{
	int p,t,r;
	scanf("%d%d%d",&p,&t,&r);
	si(p,t,r);
	return 0;
}