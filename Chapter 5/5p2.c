#include <stdio.h>

int main()
{
	int h,m;
	printf("enter a 24-hour time:");
	scanf("%d :%d",&h,&m);
	if(h>12)
	{
		printf("%d:%.2d pm\n",h-12,m );
	}
	else
	{
		printf("%d:%.2d am\n",h,m );
	}
	
}