#include<stdio.h>

int main()
{
	int d,a;
	printf("enter the number of day:");
	scanf("%d",&d);
	printf("enter starting day:");
	scanf("%d",&a);
	for (int i = 1,j=1; ; ++i){
		if(i>=a&&i<a+d)
			printf("%2d  ",j++ );
		else if (i>=a+d)
			break;
		else
			printf("    ");
		if (i%7==0)
			printf("\n");
	}
	printf("\n");
}	