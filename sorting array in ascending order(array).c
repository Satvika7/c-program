#include <stdio.h>
int main()
{
        int i,j,a,n[5];
        for (i = 0; i < 5; ++i)
        scanf("%d", &n[i]);
        for (i = 0; i < 5; ++i) 
        {
            for (j = i + 1; j < 5; ++j)
            {
                if (n[i] > n[j]) 
                {
                	a =  n[i];
                    n[i] = n[j];
                    n[j] = a;
    }
    }
   }
for (i = 0; i < 5; ++i)
 printf("%d\n", n[i]);
 }