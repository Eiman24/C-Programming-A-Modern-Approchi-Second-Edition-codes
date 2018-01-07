#include <stdio.h>

int main()
{
	int w;
	scanf("%d",&w);

	if (w<1)
		printf("calm");
	else if(w<=3)
		printf("light air");
	else if(w<=27)
		printf("breeze");
	else if(w<=47)
		printf("gale");
	else if(w<=63)
		printf("storm");
	else
		printf("hurricane");

	return 0;
}