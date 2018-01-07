#include<stdio.h>

int main(void)
{
	float r,v;
	scanf("%f",&r);//scanf("%f\n",&r) scanf cannot end at a blank characters such as"\n".
	v = 4.0f/3.0f * 3.1415f*r*r*r;
	printf("%0.2f\n",v );

	return 0;
}