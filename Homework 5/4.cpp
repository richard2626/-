#include <stdio.h>

int main()
{
    int coupon;
    int money = 0;
    int ans;
    int temp;
    printf("Please input the number of dollars: ");
    while (scanf("%d", &money))
    {
        coupon = 0;
        ans = 0;
        while ((coupon > 6) || (money > 1))
        {
            ans += money / 3;
            coupon += 2 * (money / 3);
            ans += coupon / 6;
            temp = coupon / 6;
            coupon %= 6;
            coupon += 2 * (temp);
            money -= money / 3;
        }
        printf("The number of chocolate bars you can collect is %d\n", ans);
        printf("The number of leftover coupons is %d\n\n", coupon);
        printf("Please input the number of dollars: ");
    }
}