#include<stdio.h>
#include<ctype.h>

int main(void)
{
	int sum=0;
	char ch;

	printf("enter a sentence:");
	while((ch=toupper(getchar()))!='\n'){
		if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
			sum++;
		}
	}
	printf("%d\n",sum);

	return 0;
}