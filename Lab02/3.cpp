#include <stdio.h>

int main()
{
    int a, b;
    int ans = 0;
    printf("Input: ");
    scanf("%d %d", &a, &b);
    int x1, x2, y1, y2, z1, z2, w1, w2;
    x1 = (a & 8) >> 3;
    y1 = (a & 4) >> 2;
    z1 = (a & 2) >> 1;
    w1 = (a & 1);

    x2 = (b & 8) >> 3;
    y2 = (b & 4) >> 2;
    z2 = (b & 2) >> 1;
    w2 = (b & 1);

    printf("%d => %d", a, x1);
    printf("%d", y1);
    printf("%d", z1);
    printf("%d\n", w1);

    printf("%d => %d", b, x2);
    printf("%d", y2);
    printf("%d", z2);
    printf("%d\n", w2);

    printf("%d + %d = ", a, b);

    int cin = 0;
    int cout;
    int s1;
    int c1;
    s1 = w1 ^ w2;
    c1 = w1 & w2;
    cout = (c1) | ((cin) & (s1));
    ans += (cin ^ s1);

    cin = cout;
    s1 = z1 ^ z2;
    c1 = z1 & z2;
    cout = (c1) | ((cin) & (s1));
    ans += 10 * (cin ^ s1);

    cin = cout;
    s1 = y1 ^ y2;
    c1 = y1 & y2;
    cout = (c1) | ((cin) & (s1));
    ans += 100 * (cin ^ s1);

    cin = cout;
    s1 = x1 ^ x2;
    c1 = x1 & x2;
    cout = (c1) | ((cin) & (s1));
    ans += 1000 * (cin ^ s1);
    ans += 10000 * cout;
    printf("%d", ans);
}