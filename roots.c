#include<stdio.h>
int main()
{
 int a,b,c,A,B;
 scanf("%d",&a);
 scanf("%d",&b);
 scanf("%d",&c);
 A=(-b+(b*b-4*a*c)^1/2)/2*a;
 B=(-b-(b*b-4*a*c)^1/2)/2*a;
 printf("%d",A);
 printf("%d",B);
}