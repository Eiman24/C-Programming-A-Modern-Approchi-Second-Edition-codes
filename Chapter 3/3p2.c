#include<stdio.h>

int main(void)
{
	int n,d;			
	float p;		

	printf("enter number");
	scanf("%d",&n);
	printf("enter price");
	scanf("%f",&p);			
	printf("enter data");		
	scanf("%d",&d);

	printf("item\tunit\t\tpurchase\n\tprice\t\tdate\n");
	printf("%-d\t$%7.2f\t%d",n,p,d);

	return 0;
}