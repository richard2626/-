#include <stdio.h>

void printCal(int, int);
bool inqua(int, int);
int BeginDay(int, int);
int day_in_m(int, int);
void Head(int);

int main()
{
    int year, q;
    printf("Please input the year and the quarter: ");
    while (scanf("%d %d", &year, &q) != EOF)
    {
        printf("\n");
        printCal(q, year);
    }
}
void printMon(int m, int y)
{
    Head(m);
    int w = BeginDay(m, y);
    int n = day_in_m(m, y);
    for (int b = 0; b < w; b++)
    {
        printf("   ");
    }
    for (int date = 1; date <= n; date++)
    {
        printf("%3d", date);
        if (w == 6)
        {
            printf("\n");
            w = 0;
        }
        else
        {
            w++;
        }
    }
}
void printCal(int q, int y)
{

    for (int m = q * 3 - 2; m <= q * 3; m++)
    {

        printMon(m, y);
        printf("\n");
        if (m % 3 != 0)
        {
            printf("\n");
        }
    }
    printf("============================\n\n");
    printf("Please input the year and the quarter: ");
}

int BeginDay(int m, int y)
{
    int sum = 0;
    sum += y;
    sum += int((y - 1) / 4.);
    sum -= int((y - 1) / 100.);
    sum += int((y - 1) / 400.);
    for (int i = 1; i < m; i++)
    {
        sum += day_in_m(i, y);
    }
    return sum %= 7;
}
void Head(int m)
{
    switch (m)
    {
    case 1:
        printf("January\n");
        break;
    case 2:
        printf("February\n");
        break;
    case 3:
        printf("March\n");
        break;
    case 4:
        printf("April\n");
        break;
    case 5:
        printf("May\n");
        break;
    case 6:
        printf("June\n");
        break;
    case 7:
        printf("July\n");
        break;
    case 8:
        printf("August\n");
        break;
    case 9:
        printf("September\n");
        break;
    case 10:
        printf("October\n");
        break;
    case 11:
        printf("November\n");
        break;
    case 12:
        printf("December\n");
        break;
    }
    printf("----------------------------\n");
    printf("Sun Mon Tue Wed Thu Fri Sat\n");
    printf("----------------------------\n");
}

int day_in_m(int m, int y)
{
    if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
    {
        return 31;
    }
    else if (m == 4 || m == 6 || m == 9 || m == 11)
    {
        return 30;
    }
    if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
    {
        return 29;
    }
    else
        return 28;
}
