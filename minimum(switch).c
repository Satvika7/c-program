#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	switch(a<b&&a<c)
	{
	case 1:printf("a is min");break;
    }
    switch(b<c&&b<a)
    {
    case 1:printf("b ia min");break;
	}
	switch(c<a&&c<b)
	{
	case 1:printf("c is min");break;
	}
}
