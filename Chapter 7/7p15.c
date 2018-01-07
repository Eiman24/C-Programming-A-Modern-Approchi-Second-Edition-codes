#include <stdio.h>

int main(void)
{
    float input, i, factorial = 1;

    printf("\nEnter a positive integer: ");
    scanf("%f", &input);

    for (i = 1; i <= input; i++)
        factorial *= i;

    printf("Factorial of %.0f: %.0f\n\n", input, factorial);

    return 0;
}