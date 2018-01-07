#include<stdio.h>

int main(void)
{
	int a=-8,b=5,c=8,d=-5,i,j;

	printf("%d \n",a%b );		
	printf("%d \n",c%d );		
	i=7,j=8;
	printf("%d\n",i++ - --j );
	printf("%d,%d\n",i,j );
	return 0;
}