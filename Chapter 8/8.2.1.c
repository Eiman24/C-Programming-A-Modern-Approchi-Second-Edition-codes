//initial an array by assignment
#include <stdio.h>

int main(void)
{
	double ident[5][5] = {[1][1] = 1.0, [3][3] = 5.0};
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			printf("%.0lf  ",ident[i][j] );
		}
		printf("\n");
	}
}