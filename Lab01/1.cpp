#include <stdio.h>
int main()
{

    int n;
    int rev = 0;
    int a1, a2, a3, a4, a5;
    int c;
    double b2 = 5.038;
    double c3 = 2.3;
    float score = 60;
    printf("Input a 5-digit number: ");
    scanf("%d", &n);

    printf("The reverse of the number: %d\n\n", n % 10 * 10000 + n / 10 % 10 * 1000 + n / 100 % 10 * 100 + n / 1000 % 10 * 10 + n / 10000);

    printf("Input integers parallel sides and height of trapezoid: ");
    scanf("%d %d %d", &a1, &a2, &a3);
    printf("The area of trapezoid is %lf\n\n", (double)((a1 + a2) * a3) / 2);

    printf("Input scores of 5 students:\n=>");
    scanf(" %d %d %d %d %d", &a1, &a2, &a3, &a4, &a5);
    printf("\n");

    printf("The scores of 5 students are %d %d %d %d %d\n", a5, a4, a3, a2, a1);
    printf("1. %lf\n", (double)c3 + 10.123);
    printf("2. %d\n", a1 + 2);
    printf("3. %lf\n", (double)a1 * b2);
    printf("The pass mark of student is %f.\n\n", score);

    printf("The radius is %d and height is %d.\n", a4, a5);
    printf("The volume of cylinder is %lf.\n", (double)a4 * a4 * a5 * 3.141592654);
    return 0;
}