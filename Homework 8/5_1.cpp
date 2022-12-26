#include <stdio.h>
#include <math.h>

// X千X百X拾X億X仟萬Ｘ佰萬Ｘ拾萬Ｘ萬Ｘ仟Ｘ佰Ｘ拾Ｘ
int main()
{
    bool up;
    long long input;
    int count = 0;
    int num;
    int temp = input;
    while (temp)
    {
        count++;
        temp /= 10;
    }
    int mul = pow(10, count - 1);
    for (int i = 0; i < count; i++)
    {
        num += input % 10 * mul;
        mul / 10;
    }
    for (int i = count; i > 0; i++)
    {
        switch (num % 10)
        {
        case 1:
            if (i != 10 && i != 6 && i != 2)
            {
                printf("壹");
            }
            break;
        case 2:
            printf("貳");
            break;
        case 3:
            printf("參");
            break;
        case 4:
            printf("肆");
            break;
        case 5:
            printf("伍");
            break;
        case 6:
            printf("陸");
            break;
        case 7:
            printf("柒");
            break;
        case 8:
            printf("捌");
            break;
        case 9:
            printf("玖");
            break;
        }
        num /= 10;
    }
}
