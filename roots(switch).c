#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,d,m,n;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	d=b*b-(4*a*c);
	m=-b+sqrt(d)/2*a;
	n=-b-sqrt(d)/2*a;
	switch(d>0)
	{
		case 1:printf("real and different");
		       printf("%d",m);
		       printf("%d",n);break;
		case 0:switch(d==0)
				{
				  case 1:printf("real and equal");
				         printf("\n%d",m);break;
				  case 0:printf("imaginary");
						 printf("%d",m);
				 	     printf("%d",n);
		    	}
    }
}
