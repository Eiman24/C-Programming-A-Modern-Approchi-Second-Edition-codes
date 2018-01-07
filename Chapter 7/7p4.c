#include <stdio.h>

int main()
{
	char ch;
	printf("\nenter phone number:");
	do{
		ch=getchar();//must putted inside circulation
		if(ch=='a'||ch=='b'||ch=='c'){
			putchar('2');
		}
		else if(ch=='d'||ch=='e'||ch=='f'){
			putchar('3');
		}
		else if(ch=='g'||ch=='h'||ch=='i'){
			putchar('4');
		}
		else if(ch=='j'||ch=='k'||ch=='l'){
			putchar('5');
		}
		else if(ch=='m'||ch=='n'||ch=='o'){
			putchar('6');
		}
		else if(ch=='p'||ch=='r'||ch=='s'){
			putchar('7');
		}
		else if(ch=='t'||ch=='u'||ch=='v'){
			putchar('8');
		}
		else if(ch=='w'||ch=='x'||ch=='y'){
			putchar('9');
		}
		else {
			putchar(ch);
		}
	}while(ch!='\n');
	printf("\n");
	return 0;
}