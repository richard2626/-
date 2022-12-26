#include <stdio.h>

int main()
{
    double a;
    double b;
    printf("Input two numbers: ");
    scanf("%lf %lf", &a, &b);
    printf("\n1234567890123456789012345678901234567890123456789012345678901|\n");
    printf("              sum   |   product  | difference |   quotient   |\n");
    printf("Case 1:%13d|%12d|%12d|%14d|\n", (int)a + (int)b, (int)a * (int)b, (int)a - (int)b, (int)a / (int)b);
    printf("Case 2:%13.8f|%12.8f|%12.8f| %14.10f|\n", (float)a + (float)b, (float)a * (float)b, (float)a - (float)b, (float)a / (float)b);
    printf("Case 3:%13.8lf|%12.8lf|%12.8lf|%14.10lf|\n", (double)a + (double)b, (double)a * (double)b, (double)a - (double)b, (double)a / (double)b);
    printf("Case 4:%13.8f|%12.8f|%12.8f|%14.10f|\n", (int)a + (float)b, (int)a * (float)b, (int)a - (float)b, (int)a / (float)b);
    printf("Precision: Case 3 > Case 2 > Case 4.");
}