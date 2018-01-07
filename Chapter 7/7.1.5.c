#include <stdio.h>

int main()
{
	double n,sum=0;
	//long unsigned int max = 4294967295

	printf("sum\n");
	printf("enter:\n");

	scanf("%lf",&n);
	while (n!=0){
		sum+=n;
		scanf("%lf",&n);
	}
	printf("sum is %.5lf\n",sum );

	return 0;
}