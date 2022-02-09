#include <stdio.h>
int main()
{
    int a[100],i,key;
    for(i=0; i<5; i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d", &key);
    for(i=0; i<5; i++)
    {
        if(a[i]==key)
        {
			printf("yes");
            return 0;		 
        }
 
    }
    
	printf("no");
}