#include <stdio.h>

int main()
{
	int a,b;
	scanf("%d",&a);
	b=a/10;
	switch (b)
	{
		case 9: case 10:
			printf("A");break;
		case 8:
			printf("B");break;
		case 7:
			printf("C");break;
		case 6:
			printf("D");break;
		default:
			printf("F");break;
	}
	return 0;
	}