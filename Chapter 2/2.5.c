//computes the dimensional weight of a box
#include<stdio.h>
#define IPP 166

int main(void)
{
	int l,h,w,v,weight;
	printf("enter l:");
	scanf("%d",&l);
	printf("enter h:");
	scanf("%d",&h);
	printf("enter w:");
	scanf("%d",&w);
	v = h*l*w;
	weight = (v+IPP-1)/IPP;

	printf("demensions: %dX%dX%d\n",l,h,w);
	printf("volume:%d\n",v );
	printf("dimensional weight:%d\n",weight );

	return 0;
}