#include <stdio.h>

int main()
{
	int m=8;
	for (int i = 0; m > 0;m/=2,++i)
	{
		printf("%d\n",m );
	}
}