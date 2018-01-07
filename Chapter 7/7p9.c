#include <stdio.h>
#include <ctype.h>


int main()
{
	int input_h,input_m;
	char am_pm;

    printf("\nEnter a 24-hour time: ");
    scanf("%d:%d %c", &input_h, &input_m, &am_pm);

    switch (toupper(am_pm)){
        case 'A':
            break;
        case 'P':
            input_h = input_h + 12;
            break;
        default:
            printf("Specify am or pm please\n");
            return 0;
    }
    printf("%d:%d\n",input_h,input_m);

    return 0;
}