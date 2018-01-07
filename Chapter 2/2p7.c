#include<stdio.h>

int main(void)
{
	int t20,t10,t5,t1,m;

	scanf("%d",&m);
	t20 = m/20;
	t10 = (m-t20*20)/10;
	t5 = (m-t20*20-t10*10)/5;
	t1 = (m-t20*20-t10*10-t5*5);
	printf("$20 %d\n",t20 );
	printf("$10 %d\n",t10 );
	printf("$5 %d\n",t5 );
	printf("$1 %d\n",t1 );

	return 0;
}