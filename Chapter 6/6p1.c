#include <stdio.h>

int main()
{
	float i,max=0;
	for(;;){
		printf("enter a number:");
		scanf("%f",&i);
		if (i<=0)
			break;
		if (i>max)
			max=i;
	}
	printf("max is:%.2f",max);

}