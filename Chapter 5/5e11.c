#include <stdio.h>

int main()
{
	int area_code;
	printf("enter area code:");
	scanf("%d",&area_code);
	switch (area_code)
	{
		case 229 : printf("Albany");break;
		case 404 : printf("Atlanta");break;
		case 470 : printf("Atlanta");break;
		case 478 : printf("Macon");break;
		case 678 : printf("Atlanta");break;
		case 706 : printf("Cloumbus");break;
		case 762 : printf("Cloumbus");break;
		case 770 : printf("Atlanta");break;
		case 912 : printf("Savannah");break;
	}

	return 0;
}