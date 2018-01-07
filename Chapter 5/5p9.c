#include <stdio.h>

int main()
{
	int a,b,d1,d2,m1,m2,y1,y2;
	printf("enter 1 date mm/dd/yy");
	scanf("%d/%d/%d",&m1,&d1,&y1);
	printf("enter 2 date mm/dd/yy");
	scanf("%d/%d/%d",&m2,&d2,&y2);
	a=365*y1+30*m1+d1;
	b=365*y2+30*m2+d2;
	if (a>b)
		printf("2is earlier");
	else
		printf("1 is earlier");

	return 0;
}
