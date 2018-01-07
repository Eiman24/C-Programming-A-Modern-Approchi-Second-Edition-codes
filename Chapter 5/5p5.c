#include <stdio.h>

int main()
{
	float i;
	scanf("%f",&i);

	if (i<750)
		printf("%.2f\n",0.01*i);
	else if (i<=2250)
		printf("%.2f\n",7.5+(i-750)*0.02);
	else if (i<=3750)
		printf("%.2f\n",37.5+(i-2250)*0.03);
	else if (i<=5250)
		printf("%.2f\n",82.5+(i-3750)*0.04);
	else if (i<=7000)
		printf("%.2f\n",142.5+(i-5250)*0.05);
	else 
		printf("%.2f\n",230+(i-7000)*0.06);

	return 0;
}