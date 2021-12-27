#include<stdio.h>
#include<math.h>
int main()
{
	int a,i=1,square,cube;
	float root;
	scanf("%d",&a);
	while(i<=a)
	{
		square=i*i;
		printf("%d\n",square);
		cube=square*i;
		printf("%d\n",cube);
		root=sqrt(i);
		printf("%f\n",root);
		i=i+1;
	}
}
