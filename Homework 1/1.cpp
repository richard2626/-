#include <stdio.h>

int main()
{
    float sum = 0;
    float input;
    printf("Case I:\n");
    printf("Please enter five real numbers: ");
    scanf("%f", &input);

    printf("The five real numbers are:\n");
    printf("%.6f  ", input);
    sum += input;

    scanf("%f", &input);
    printf("%.6f  ", input);
    sum += input;

    scanf("%f", &input);
    printf("%.6f  ", input);
    sum += input;

    scanf("%f", &input);
    printf("%.6f  ", input);
    sum += input;

    scanf("%f", &input);
    printf("%.6f\n", input);
    sum += input;

    printf("Sum=%.6f\n", sum);
    printf("Average=%.6f\n\n", sum / 5);
    
    sum = 0;
    
	printf("Case II:\n");
    printf("Please enter five real numbers: ");
    scanf("%f", &input);

    printf("The five real numbers are:\n");
    printf("%.6f  ", input);
    sum += input;

    scanf("%f", &input);
    printf("%.6f  ", input);
    sum += input;

    scanf("%f", &input);
    printf("%.6f  ", input);
    sum += input;

    scanf("%f", &input);
    printf("%.6f  ", input);
    sum += input;

    scanf("%f", &input);
    printf("%.6f\n", input);
    sum += input;

    printf("Sum=%.6f\n", sum);
    printf("Average=%.6f\n", sum / 5);
}