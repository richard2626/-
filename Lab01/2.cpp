#include <stdio.h>

int main()
{
    int a, b;
    double ans;
    printf("Input a,b,x: ");
    scanf("%d %d", &a, &b);
    printf("a,b,x are %d %d ", a, b);
    ans += (37. / 29) * (a - b);
    scanf("%d", &a);
    ans *= (double)(a * a) / 19;

    printf("%d\n\n", a);
    printf("Input c,d,y,e: ");
    scanf("%d ", &a);

    printf("c,d,y,e are ");

    b = a;
    printf("%d ", a);

    scanf("%d ", &a);
    b *= a;
    printf("%d ", a);

    scanf("%d ", &a);
    b *= a * a * a;
    printf("%d ", a);

    scanf("%d", &a);
    ans += (double)b / (17. + a);
    printf("%d", a);

    printf("\n\n");
    printf("Ans = %lf\n", ans);
}