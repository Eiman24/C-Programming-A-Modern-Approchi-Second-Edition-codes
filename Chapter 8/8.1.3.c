#include<stdio.h>

int main()
{
	int a[10]={1,2,3,[5]=5,6,7,[9]=9};
	for(int i=0;i<10;i++)
		printf(" %d",a[i] );
}