#include<stdio.h>
void oper(int *,int *,int *,int *,int *);
int main(void)
{
	int a,b,c,d,e;
	scanf("%d%d",&a,&b);
	oper(&a,&b,&c,&d,&e);
	printf("the sum is %d",c);
	printf("the diff is %d",d);
	printf("the product is %d",e);
	return 0;
}
void oper(int *p,int *q,int *r,int *s,int *t)
{
	*r=*p+*q;
	*s=*p-*q;
	*t=*p**q;
}