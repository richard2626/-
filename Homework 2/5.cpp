#include <stdio.h>

int main()
{
    double scan;
    double r = 0;
    printf("Input r1 r2 r3 r4 r5: ");
    scanf("%lf", &scan);
    r += 1 / scan;
    scanf("%lf", &scan);
    r += 1 / scan;
    scanf("%lf", &scan);
    r += 1 / scan;
    scanf("%lf", &scan);
    r += 1 / scan;
    scanf("%lf", &scan);
    r += 1 / scan;
    r = 1 / r;
    printf("Effective parallel resistance: %.7lf\n", r);
    printf("Input r6 r7:");
    scanf("%lf", &scan);
    r += scan;
    scanf("%lf", &scan);
    r += scan;
    printf("Effective total resistance: %.7f", r);
}