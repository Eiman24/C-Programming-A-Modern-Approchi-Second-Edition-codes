#include<stdio.h>
#include <math.h>

int main(void)
{
	double x,y=1,average;
 
	printf("enter a number:");
	scanf("%lf",&x);

	while(1){
		average=(y+(x/y))/2;
		if(fabs(y-average)>(0.00001*y))
			y=average;
		else
			break;
	}
	printf("%.5lf\n",y);

	return 0;
}