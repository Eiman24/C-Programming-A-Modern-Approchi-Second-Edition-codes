#include <stdio.h>

int main()
{
	int i;
	i=99;
	if(i>=90)
		printf("A");
	else if(i>=80)
		printf("B");
	else if(i>=70)
		printf("C");
	else if(i>=60)
		printf("D");
	else 
		printf("F");

	if(i<60)
		printf("F");
	else if(i<70)
		printf("D");
	else if(i<80)
		printf("C");
	else if(i<90)
		printf("B");
	else 
		printf("A");
	
}