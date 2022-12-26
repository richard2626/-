#include <iostream>
#include <stdio.h>
using namespace std;

unsigned int sec_in_month(int, int);
struct Datetime
{
    int year;
    int month;
    int day;
    int hour;
    int minute;
    int second;
};
struct TimeInterval
{
    int day;
    int hour;
    int minute;
    int second;
};
TimeInterval getTimeDifference(Datetime startDateTime, Datetime endDateTime);
void printDatetime(Datetime);
void printTimeDifference(TimeInterval timeDifference);
int status(Datetime start, Datetime end);
bool error(Datetime datetime);
int main()
{
    int y, mon, d, h, min, s;
    cout << "Input Start Datetime (Year Month Day Hour Minute Second): ";
    cin >> y >> mon >> d >> h >> min >> s;
    struct Datetime start = {
        .year = y,
        .month = mon,
        .day = d,
        .hour = h,
        .minute = min,
        .second = s};
    cout << "Input End Datetime (Year Month Day Hour Minute Second): ";
    cin >> y >> mon >> d >> h >> min >> s;
    struct Datetime end = {
        .year = y,
        .month = mon,
        .day = d,
        .hour = h,
        .minute = min,
        .second = s};

    switch (status(start, end))
    {
    case 1: // Error! Start Datetime is invalid.
        cout << "Error! Start Datetime is invalid." << endl;
        break;
    case 2: // Error! End Datetime is invalid.
        cout << "Error! End Datetime is invalid." << endl;
        break;
    case 3: // Error! End Datetime is before Start Datetime.
        cout << "Start Datetime = ";
        printDatetime(start);
        cout << "End Datetime = ";
        printDatetime(end);
        cout << "Error! End Datetime is before Start Datetime.\n";
        break;
    default:
        cout << "Start Datetime = ";
        printDatetime(start);
        cout << "End Datetime = ";
        printDatetime(end);
        printTimeDifference(getTimeDifference(start, end));
    }
}
TimeInterval getTimeDifference(Datetime start, Datetime end)
{
    struct TimeInterval tD;

    long long s = 0;
    for (int y = start.year; y < end.year; y++)
    {
        s += 365 * 86400;
        if (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0))
            s += 86400;
    }
    for (int m = 1; m < end.month; m++)
        s += sec_in_month(m, end.year);
    s += 86400 * (end.day - 1);
    s += 3600 * end.hour;
    s += 60 * end.minute;
    s += end.second;
    for (int m = 1; m < start.month; m++)
        s -= sec_in_month(m, start.year);
    s -= 86400 * (start.day - 1);
    s -= 3600 * start.hour;
    s -= 60 * start.minute;
    s -= start.second;
    tD.day = s / 86400;
    s %= 86400;
    tD.hour = s / 3600;
    s %= 3600;
    tD.minute = s / 60;
    s %= 60;
    tD.second = s;
    return tD;
}
unsigned int sec_in_month(int m, int y)
{
    if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
        return 31 * 86400;
    if (m == 4 || m == 6 || m == 9 || m == 11)
        return 30 * 86400;
    if (m == 2 && (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0)))
        return 29 * 86400;
    return 28 * 86400;
}
void printTimeDifference(TimeInterval tD)
{
    cout << "Time Difference = " << tD.day << " day " << tD.hour << " hour " << tD.minute << " minute " << tD.second << " second " << endl;
}

void printDatetime(Datetime datetime)
{
    printf("%d/%02d/%02d %02d:%02d:%02d\n", datetime.year, datetime.month, datetime.day, datetime.hour, datetime.minute, datetime.second);
}

int status(Datetime start, Datetime end)
{
    if (start.minute > 59 || start.hour > 23 || start.second > 59)
        return 1;
    if (end.hour > 23 || end.minute > 59 || end.second > 59)
        return 2;
    if (start.year > end.year)
        return 3;
    if (start.year >= end.year && start.month > end.month)
        return 3;
    if (start.year >= end.year && start.month >= end.month && start.day > end.day)
        return 3;
    if (start.year >= end.year && start.month >= end.month && start.day >= end.day && start.hour > end.hour)
        return 3;
    if (start.year >= end.year && start.month >= end.month && start.day >= end.day && start.hour >= end.hour && start.minute > end.minute)
        return 3;
    if (start.year >= end.year && start.month >= end.month && start.day >= end.day && start.hour >= end.hour && start.minute >= end.minute && start.second > end.second)
        return 3;
    if (error(start))
        return 1;
    if (error(end))
        return 2;
    return 0;
}
bool error(Datetime datetime)
{
    int m = datetime.month;
    if ((m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) && datetime.day > 31)
        return 1;
    if ((m == 4 || m == 6 || m == 9 || m == 11) && datetime.day > 30)
        return 1;
    if (m == 2 && (datetime.year % 400 == 0 || (datetime.year % 4 == 0 && datetime.year % 100 != 0)))
    {
        if (datetime.day > 29)
            return 1;
    }
    else if (m == 2 && datetime.day > 28)
        return 1;
    return 0;
}