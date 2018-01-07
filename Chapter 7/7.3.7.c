#include <stdio.h>

int main()
{
	char ch;
	int len = 0;

	printf("enter a message:");
	for(int i;(ch=getchar())!='\n';i++)
		len++;
	printf("your massage was %d characters long\n",len );

	return 0;
}