#include <stdio.h>

int main()
{
    double input;

    printf("Input:");
    printf("Output:　\n");
    scanf("%lf", &input);
    printf("The whole part is %d\n", (int)input);
    printf("The decimal part is %g\n", input - (int)input);
}
