#include<stdio.h>
#include<string.h>
int main()
{
	char s[100];
	int i,l;
	scanf("%s",s);
	l=strlen(s);
	for(i=l;i>=0;i--)
	{
		printf("%c",s[i]);
	}
}