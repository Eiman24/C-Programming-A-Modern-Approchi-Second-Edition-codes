#include<stdio.h>

int main(void)
{
	int a,b,c,d,e;
	printf("enter three-digit NO.:");
	scanf("%d",&a);
	d=a/100,b=a%10,c=a/10%10;
	e=b*100+c*10+d;
	printf("%d\n",e );

	
	return 0;
}