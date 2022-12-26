#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void translate(int, int);
int main()
{
    // system("chcp 65001");
    long long input;
    int thousand;
    int temp;
    long long dev;
    int up = 0;
    printf("Input: ");
    while (scanf("%lld", &input) != EOF)
    {
        thousand = -1;
        temp = input;
        while (temp)
        {
            temp /= 10000;
            thousand++;
        }
        printf("Output: ");
        dev = pow(10000, thousand);
        up = 0;
        for (int i = 0; i <= thousand; i++)
        {
            translate((input / dev) % 10000, up);
            if ((input / dev) % 10000)
            {
                switch (dev)
                {
                case 10000:
                    printf("萬");
                    break;
                case 100000000:
                    printf("億");
                    break;
                }
            }
            input %= dev;
            dev /= 10000;
            up++;
        }
        printf("元整\n\n");
        printf("Input: ");
    }
}
void translate(int num, int up)
{
    bool up2 = false;
    int count = -1;
    int temp = num;
    while (temp)
    {
        count++;
        temp /= 10;
    }
    int dev = pow(10, count);
    if (count < 3 && up && num != 0)
    {
        printf("零");
    }
    for (int i = 0; i <= count; i++)
    {
        switch ((num / dev) % 10)
        {
        case 1:
            if (dev != 10 || up2)
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
        if ((num / dev) % 10)
        {
            switch (dev)
            {
            case 10:
                printf("拾");
                break;
            case 100:
                printf("佰");
                break;
            case 1000:
                printf("仟");
                break;
            }
        }
        else if (num * 10 / dev % 10)
            printf("零");

        up2 = true;
        dev /= 10;
    }
}