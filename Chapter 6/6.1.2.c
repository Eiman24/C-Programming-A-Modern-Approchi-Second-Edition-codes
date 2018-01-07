#include <stdio.h>

int main()
{
	int n,sum=0;
	printf("enter the number(0 to terminate)");
	scanf("%d",&n);
	while (n!=0)
	{
		sum+=n;
		scanf("%d",&n);

	}
	printf("%d\n",sum);

	return 0;
}