#include <stdio.h>

int main()
{
	int digits=0,n;

	printf("enter a nonegative integer:");
	scanf("%d",&n);

	do {
		n/=10;
		digits++;
	}while (n>0);

	printf("%d",digits );

	return 0;
}