#include<stdio.h>

int main(void)
{
	int d,i1,i2,i3,i4,i5,j1,j2,j3,j4,j5,fs,ss,total;
	printf("enter the mother fxxker:");
	scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",&d,&i1,&i2,&i3,&i4,&i5,&j1,&j2,&j3,&j4,&j5);
	fs=d+i2+i4+j1+j3+j5;
	ss=i1+i3+i5+j2+j4;
	total=3*fs+ss;
	printf("this is it %d\n",10-(total%10));

	return 0;
}