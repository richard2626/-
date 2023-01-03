#include <stdio.h>
void sumavgpro(double, double, double, double *, double *, double *);
int main()
{
    double n1, n2, n3;
    double sump;
    double avgp;
    double prop;
    printf("input n1, n2, n3: ");
    while (scanf("%lf %lf %lf", &n1, &n2, &n3) != EOF)
    {
        sumavgpro(n1, n2, n3, &sump, &avgp, &prop);
        printf("sum = %.6lf\n", sump);
        printf("avg = %.6lf\n", avgp);
        printf("pro = %.6lf\n\n", prop);
        printf("input n1, n2, n3: ");
    }
}
void sumavgpro(double n1, double n2, double n3, double *sump, double *avgp, double *prop)
{
    *sump = n1 + n2 + n3;
    *avgp = *sump / 3.;
    *prop = n1 * n2 * n3;
}