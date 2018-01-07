#include<stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	for (int i = 1; i*i <=n; ++i){
			if (i%2)
				continue;
		printf("%d\n",i*i );
	}

	return 0;
}