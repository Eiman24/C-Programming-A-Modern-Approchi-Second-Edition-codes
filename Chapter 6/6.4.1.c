#include <stdio.h>

int main()
{
	int n;
	for(;;)
	{
		printf("enter a number(0 to stop):");
		scanf("%d",&n);
		if (n==0)			
			break;
		printf("%d,%d,%d\n",n,n*n,n*n*n);
	}
	return 0;
}