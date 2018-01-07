#include <stdio.h>

int main()
{
	int i=9384;
	do
	{
		printf("%d\n",i );
		i/=10;
	} while (i>0);	
	for (int i = 9384; i > 0;i/=10 )
	{
		printf("%d\n",i );
	}

	for (int i = 5, j = i-1; i > 3,j >0; --i , j=i-1)
	{
		printf("%d\n",i );
	}
}