#include<stdio.h>

int main(void)
{
	float m,r,p,n;
	scanf("%f",&m);
	scanf("\n%f",&r);
	scanf("\n%f",&p);
	scanf("\n%f",&n);
	for (int i=1;i<=n;i++){
		printf("%d=%0.2f\n",i, m-p+m*(0.01*r/12));
		m=m-p+m*(0.01*r/12);
	};
	
	return 0;
}