#include<stdio.h>

int main(void)
{
	int a1,a2,b1,b2,r1,r2;

	printf("Enter a: ");
	scanf("%d/%d",&a1,&a2);

	printf("Enter b: ");
	scanf("%d/%d",&b1,&b2);

	r1=a1*b2+b1*a2;
	r2=a2*b2;
	printf("resalt is %d/%d\n",r1,r2 );

	return 0;
}