#include <stdio.h>

int main(void)
{
	int month, day, year;

	printf("enter mm/dd/yy");
	scanf("%d /%d /%d",&month,&day,&year);

	printf("Dated this %d",day );
	switch (day)
	{
		case 1: case 21: case 31:
		printf("st");break;
		case 2: case 22: 
		printf("nd");break;
		case 3: case 23: 
		printf("rd");break;
	}
	printf(" day of ");
	switch (month)
	{
		case 1: printf("january"); 		break;
		case 2: printf("february"); 	break;
		case 3: printf("march"); 		break;
		case 4: printf("april"); 		break;
		case 5: printf("may"); 			break;
		case 6: printf("june"); 		break;
		case 7: printf("july"); 		break;
		case 8: printf("august"); 		break;
		case 9: printf("september"); 	break;
		case 10: printf("october"); 	break;
		case 11: printf("november"); 	break;
		case 12: printf("december");	break;
	}
	printf(", 20%.2d.\n",year );
	getchar();
	return 0;
}