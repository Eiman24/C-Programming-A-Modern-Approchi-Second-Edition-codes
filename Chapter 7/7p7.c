#include<stdio.h>

int main(void)
{
	int a1,a2,b1,b2,r1,r2;
	char ch;

	printf("Enter a/b?c/d: ");
	scanf("%d/%d%1c%d/%d",&a1,&a2,&ch,&b1,&b2);

	switch(ch){
		case '+':
		r1=a1*b2+b1*a2;
		r2=a2*b2;
		printf("resalt is %d/%d\n",r1,r2 );
		break;
		case '-':
		r1=a1*b2-b1*a2;
		r2=a2*b2;
		printf("resalt is %d/%d\n",r1,r2 );
		break;
		case '*':
		r1=a1*b1;
		r2=a2*b2;
		printf("resalt is %d/%d\n",r1,r2 );
		break;
		case '/':
		r1=a1*b2;
		r2=a2*b1;
		printf("resalt is %d/%d\n",r1,r2 );
		break;
	}
	
	return 0;
}