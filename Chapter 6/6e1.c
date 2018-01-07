#include <stdio.h>

int main()
{
	int i=1;
	while (i<= 128){
		printf("%d\n",i );
		i*=2;
	}
	for (int i = 1; i <= 128; i*=2)
	{
		printf("%d\n",i );
	}
}