#include<stdio.h>
	float main(void)
   {
   	float f,a;
   	float temp(float);
   	printf("enter the value of f");
   	scanf("%f",&f);
   	a=temp(f);
   	printf("%f",a);
   	return 0;
   }
   float temp(float c)
   {
   	float f;
   	c=((f-32)*5)/9;
   	return c;
   }
