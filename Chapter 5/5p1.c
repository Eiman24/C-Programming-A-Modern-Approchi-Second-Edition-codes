#include <stdio.h>

int main()
{
	int a;
	a=-6;
	if(a>=0&&a<=9)
		printf("1");
	else if(a>9&&a<=99)
		printf("2");
	else if(a>99&&a<=999)
		printf("3");
	else
		printf("end");
}