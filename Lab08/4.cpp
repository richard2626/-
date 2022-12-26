#include <stdio.h>

void order(double *, double *,double*);
int main()
{
    double n1;
    double n2;
    double n3;
    printf("input n1, n2, n3: ");
    while (scanf("%lf %lf %lf", &n1, &n2,&n3) != EOF)
    {
        printf("\n--- Before ordering ---\n");
        printf("n1 = %.7lf, n2 = %.7lf, n3 = %.7lf\n", n1, n2,n3);
        order(&n1, &n2, &n3);
        printf("--- After ordering ---\n");
        printf("n1 = %.7lf, n2 = %.7lf, n3 = %.7lf\n\n", n1, n2, n3);
    printf("input n1, n2, n3: ");
    }
}
void order(double *n1, double *n2,double *n3)
{
    double temp;
    if (*n1 < *n2)
    {
        temp = *n1;
        *n1 = *n2;
        *n2 = temp;
    }
    if (*n1 < *n3)
    {
        temp = *n1;
        *n1 = *n3;
        *n3 = temp;
    }
    if (*n2 < *n3)
    {
        temp = *n2;
        *n2 = *n3;
        *n3 = temp;
    }
}