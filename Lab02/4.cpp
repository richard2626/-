#include <stdio.h>

int main()
{
    double input;

    printf("Input:");
    scanf("%lf", &input);

    printf("\nOutput:　\n");
    printf("The whole part is %d\n", (int)input);
    printf("The decimal part is %g\n", input - (int)input);
    printf("The integer part times the decimal part is %.2f\n", (float)(((int)input) * (input - (int)input)));
}
