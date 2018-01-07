#include <stdio.h>

int main()
{
	int i,j,k,u;
	i=j=k=1;
	printf("%d\n",++i||++j&& ++k);//
	u=(++i||++j&& ++k)+6;
	printf("%d %d %d %d\n",i,j,k,u);

	return 0;
}