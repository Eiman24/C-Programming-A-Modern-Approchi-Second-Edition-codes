#include <stdio.h>

int main()
{
	int a=0,b=0,d,m,y,d1,m1,y1;
	b=365*17+30*1+1;
	for (;;){
		printf("enter 1 date mm/dd/yy");
		scanf("%d/%d/%d",&m,&d,&y);
		if (m==0&&d==0&&y==0)
			break;
		a=365*y+30*m+d;
		if (a<b){
			b=a;
			m1=m,d1=d,y1=y;
		}
	}
	printf("the earlier day is:%02d/%02d/%02d",m1,d1,y1);

	return 0;
}
