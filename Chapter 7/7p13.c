#include<stdio.h>

int main(void)
{
	char ch;
	float f=0,sum=0,s=0;

	printf("enter a sentence:");
	while((ch=getchar())!='\n'){
		if(ch!=' '){
			sum++;
		}
		else
			s++;
	}
	f=sum/(s+1);
	printf("%.1f\n",f);

	return 0;
}