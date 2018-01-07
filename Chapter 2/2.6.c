//temper f to c
#include<stdio.h>

#define FREEZING 32.0f
#define SF (5.0f/9.0f)

int main(void)
{
	float f,c;
	printf("enter f temperature:");
	scanf("%f",&f);
	c=(f-FREEZING)*SF;
    printf("c is :%0.1f\n",c );
    return 0;
}                 