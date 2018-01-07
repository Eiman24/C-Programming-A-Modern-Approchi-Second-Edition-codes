#include<stdio.h>

int main(void)
{
	int a,b,c,d,e,f;
	printf("enter a NO.:");
	scanf("%d",&a);
	f=a%8,
	e=a/8%8,
	d=a/8/8%8,
	c=a/8/8/8%8,
	b=a/8/8/8/8%8;
	printf("%d%d%d%d%d\n",b,c,d,e,f );

	
	return 0;
}