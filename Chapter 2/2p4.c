#include<stdio.h>

int main(void)
{
	float money;
	scanf("%f",&money);
	printf("$%0.2f\n", money*1.05f );

	return 0;
}