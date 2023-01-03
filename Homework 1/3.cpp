#include <stdio.h>

int main()
{
    int input;
    int sum = 0;
    int q, w, e, r, t;
    printf("Input a five-digit number\n=>\n");
    scanf("%d", &input);
    printf("***(a)***\n");
    int a = input;
    int b = a;
    printf("Sum of digits of %d = ", input);
    sum += input % 10;
    t = input % 10;
    input /= 10;
    sum += input % 10;
    r = input % 10;
    input /= 10;
    sum += input % 10;
    e = input % 10;
    input /= 10;
    sum += input % 10;
    w = input % 10;
    input /= 10;
    sum += input % 10;
    q = input % 10;
    input /= 10;
    sum += input % 10;
    printf("%d+%d+%d+%d+%d = ", q, w, e, r, t);
    printf("%d\n\n", sum);
    printf("***(b)***\n");
    a += 11111;
    printf("Adding one to each of its digits of %d = %d\n", b, a);
}
