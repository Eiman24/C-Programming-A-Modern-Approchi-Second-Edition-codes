#include<stdio.h>
#include<stdbool.h>

int main()
{
	bool digit_seen[10] = {false};
	int digit;
	long n;

	printf("enter a number:");
	scanf("%ld",&n);

	while (n>0){
		//if it is a "no repeated digit", n will divided to 0.
		digit = n % 10;
		if(digit_seen[digit])
			break;
		digit_seen[digit] = true;
		n /= 10;
	}

	if(n > 0)
		printf("Repeated digit\n");
	else
		printf("No repeated digit\n");

	return 0;
}