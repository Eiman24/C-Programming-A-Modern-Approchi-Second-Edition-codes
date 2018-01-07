#include<stdio.h>

int main(void)
{
	int i1=5,j1=3,i2=2,j2=3,i3=7,j3=8,k3=9,i4=1,j4=2,k4=3;

	printf("%d %d\n",i1/j1,i1%j1 );		//1 2
	printf("%d \n",(i2+10)%j2 );		//0
	printf("%d \n",(i3+10)%k3/j3 );		//1
	printf("%d \n",(i4+5)%(j4+2)/k4 );	//0

	return 0;
}