#include <stdio.h>

void order(double *, double *);
int main()
{
    double n1;
    double n2;
    printf("input n1, n2: ");
    while (scanf("%lf %lf", &n1, &n2) != EOF)
    {
        printf("\n--- Before ordering ---\n");
        printf("n1 = %.6lf, n2 = %.6lf\n", n1, n2);
        order(&n1, &n2);
        printf("--- After ordering ---\n");
        printf("n1 = %.6lf, n2 = %.6lf\n\n", n1, n2);
        printf("input n1, n2: ");
    }
}
void order(double *n1, double *n2)
{
    double temp;
    if (*n1 > *n2)
    {
        temp = *n1;
        *n1 = *n2;
        *n2 = temp;
    }
}