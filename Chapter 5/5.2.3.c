#include <stdio.h>

int main()
{
	int n;	float s;
	for(;;){
		printf("enter $");
		scanf("%d",&n);
		if(n==0)
			break;
		else if (n<2500)
		{s=30+0.017*n;}
		else if (n<6250)
		{s=56+0.0066*n;}
		else if (n<20000)
		{s=76+0.0034*n;}
		else if (n<50000)
		{s=100+0.0022*n;}
		else if (n<500000)
		{s=155+0.0011*n;}
		else 
		{s=255+0.0009*n;}
		if (s<39.00f)
		{s=39.00f;}
		printf("commission is :%.2f\n",s );
	}
}