#include<stdio.h>

int main()
{
	int n,s;
	printf("enter:");
	scanf("%d",&n);
	do{
		s=n%10;
		n=(n-s)/10;
		printf("%d",s );
	}while(n>0);
}