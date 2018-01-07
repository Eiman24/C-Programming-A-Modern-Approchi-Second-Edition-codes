#include <stdio.h>

int main()
{
	for(;;)
	{
		long int i,n;
		scanf("%ld",&n);
		getchar();
		if(n==0)
		{
			break;
		}
		for(i=1;i<=n;i++){
			printf("%20ld%20ld\n",i,i*i );
			if(i%24==0){
				printf("press enter to continue...");
				getchar();
			}
		}
	}
	return 0;
}