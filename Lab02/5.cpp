#include <stdio.h>

int main()
{
    int a;
    int b;
    float c;
    float d;
    double in1;
    double in2;
    printf("Input two numbers: ");
    scanf("%lf %lf", &in1, &in2);
    a = in1;
    b = in2;
    c = in1;
    d = in2;

    printf("        123456789012345 123456789012345 123456789012345 123456789012345\n");
    printf("              sum      |    product    |  difference   |    quotient   \n");
    printf("Case 1:%16d|%15d|%15d|%15d\n", a + b, a * b, a - b, a / b);
    printf("Case 2:%16.10f|%15.10f|%15.10f|%15.10f\n", c + d, c * d, c - d, c / d);
    printf("Case 3:%16.10lf|%15.10lf|%15.10lf|%15.10lf\n", in1 + in2, in1 * in2, in1 - in2, in1 / in2);
    printf("Case 4:%16.10f|%15.10f|%15.10f|%15.10f\n", a + d, a * d, a - d, a / d);
    printf("Case 5:%16.10lf|%15.10lf|%15.10lf|%15.10lf\n", c + in2, c * in2, c - in2, c / in2);
    printf("Case 6:%16.10f|%15.10f|%15.10f|%15.10f\n", c + b, c * b, c - b, c / b);
    printf("Case 7:%16.10lf|%15.10lf|%15.10lf|%15.10lf\n", in1 + b, in1 * b, in1 - b, in1 / b);
    printf("Case 8:%16.10lf|%15.10lf|%15.10lf|%15.10lf\n", a + in2, a * in2, a - in2, a / in2);
    printf("Precision: Case2?Case3?Case5.");
}