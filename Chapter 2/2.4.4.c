//computes the dimensional weight of a box
#include<stdio.h>

int main(void)
{
	int l,h,w,v,weight;
	l = 12;
	h = 8;
	w = 10;
	v = h*l*w;
	weight = (v+165)/166;

	printf("demensions: %dX%dX%d\n",l,h,w);
	printf("volume:%d\n",v );
	printf("dimensional weight:%d\n",weight );
	
	return 0;
}