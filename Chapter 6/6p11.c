#include <stdio.h>

int main()
{
	int n;
	float a=1.0f,sum=0.0f,s;
	scanf("%f",&s);
	for (n=1;;n++){
		a=1.0;
		for (int i = 1; i <= n; ++i){
			a*=i;
		}
		if(1.0f/a<s)
			break;
		sum+=1.0f/a;
	}
	printf("e is %.5f\n",1+sum );
}