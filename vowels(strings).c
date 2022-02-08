#include<Stdio.h>
int main()
{
	char s[20]="satvika";
	int i,sum=0;
	for(i=0;i<20;i++)
	{
		if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
		{
			sum++;
		}
	}
	printf("%d",sum);
}