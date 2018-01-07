#include<stdio.h>

#define N 10

int main()
{
	int a[N],i;

	printf("enter 10 numbers:");
	for(i=0;i<N;i++)
		scanf("%d",&a[i]);

	printf("in reverse order:");
	for(i=N-1;i>=0;i--)
		printf(" %d",a[i] );
	printf("\n");

	return 0;
}