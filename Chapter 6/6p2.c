#include <stdio.h>

int main()
{
	int m,n,t,a,b;
	printf("enter two number(a/b):");
	scanf("%d/%d",&m,&n);
	a=m;b=n;
	for(;;){
		if (n==0){
			break;
		}
		t=m%n;
		m=n;
		n=t;
	}
	printf("gcd if :%d/%d",a/m,b/m);
}