#include <stdio.h>
void sumavg(double, double, double, double *, double *);
int main()
{
    double n1, n2, n3;
    double sump;
    double avgp;
    printf("input n1, n2, n3: ");
    while (scanf("%lf %lf %lf", &n1, &n2, &n3) != EOF)
    {
        sumavg(n1, n2, n3, &sump, &avgp);
        printf("sum = %lf\n", sump);
        printf("avg = %lf\n\n", avgp);
        printf("input n1, n2, n3: ");
    }
}
void sumavg(double n1, double n2, double n3, double *sump, double *avgp)
{
    *sump = n1 + n2 + n3;
    *avgp = *sump / 3.;
}