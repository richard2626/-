#include <stdio.h>
#include <iostream>
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
int main()
{
    unsigned int t;
    cout << "Input Start Datetime (Year Month Day Hour Minute Second): ";
    int y, mon, d, h, min, s;
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
    return 0;
}

unsigned int sec_in_month(int y, int m)
{
    switch (m)
    {
    case 1:
        return 31 * 86400;
    case 2:
        if (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0))
        {
            return 29 * 86400;
        }
        return 28 * 86400;
    case 3:
        return 31 * 86400;
    case 4:
        return 30 * 86400;
    case 5:
        return 31 * 86400;
    case 6:
        return 30 * 86400;
    case 7:
        return 31 * 86400;
    case 8:
        return 31 * 86400;
    case 9:
        return 30 * 86400;
    case 10:
        return 31 * 86400;
    case 11:
        return 30 * 86400;
    case 12:
        return 31 * 86400;
    }
    return 0;
}

void printDatetime(Datetime datetime)
{
    printf("%d/%02d/%02d %02d:%02d:%02d\n", datetime.year, datetime.month, datetime.day, datetime.hour, datetime.minute, datetime.second);
}
TimeInterval getTimeDifference(Datetime start, Datetime end)
{
    struct TimeInterval tD;
    long long s = 0;
    while (start.year < end.year - 1 || (start.year < end.year && start.month < end.month))
    {
        s += sec_in_month(start.year, start.month);
        if (start.month == 12)
            start.month = 1, start.year++;
        else
            start.month++;
    }
    while (start.year < end.year || start.month < end.month - 1 || (start.month < end.month && start.day < end.day))
    {
        s += 86400;
        bool touch = false;
        start.day++;
        switch (start.month)
        {
        case 1:
            if (start.day > 31)
                start.day = 1, start.month++, touch = true;
            break;

        case 2:
            if (start.year % 400 == 0 || (start.year % 4 == 0 && start.year % 100 != 0))
            {
                if (start.day > 29)
                    start.day = 1, start.month++, touch = true;
            }
            else if (start.day > 28)
                start.day = 1, start.month++, touch = true;
            break;

        case 3:
            if (start.day > 31)
                start.day = 1, start.month++, touch = true;
            break;
        case 4:
            if (start.day > 30)
                start.day = 1, start.month++, touch = true;
            break;
        case 5:
            if (start.day > 31)
                start.day = 1, start.month++, touch = true;
            break;
        case 6:
            if (start.day > 30)
                start.day = 1, start.month++, touch = true;
            break;
        case 7:
            if (start.day > 31)
                start.day = 1, start.month++, touch = true;
            break;
        case 8:
            if (start.day > 31)
                start.day = 1, start.month++, touch = true;
            break;
        case 9:
            if (start.day > 30)
                start.day = 1, start.month++, touch = true;
            break;
        case 10:
            if (start.day > 31)
                start.day = 1, start.month++, touch = true;
            break;
        case 11:
            if (start.day > 30)
                start.day = 1, start.month++, touch = true;
            break;
        case 12:
            if (start.day > 31)
                start.day = 1, start.month++, touch = true;
            break;
        }
        if (start.month > 12)
            start.month = 1, start.year++;
    }
    while (start.year < end.year || start.month < end.month || start.day < end.day - 1 || (start.day < end.day && start.hour < end.hour))
    {
        s += 3600;
        bool touch = false;
        start.hour++;
        if (start.hour > 23)
            start.hour = 0, start.day++;
        switch (start.month)
        {
        case 1:
            if (start.day > 31)
                start.day = 1, start.month++, touch = true;
            break;

        case 2:
            if (start.year % 400 == 0 || (start.year % 4 == 0 && start.year % 100 != 0))
            {
                if (start.day > 29)
                    start.day = 1, start.month++, touch = true;
            }
            else if (start.day > 28)
                start.day = 1, start.month++, touch = true;
            break;

        case 3:
            if (start.day > 31)
                start.day = 1, start.month++, touch = true;
            break;
        case 4:
            if (start.day > 30)
                start.day = 1, start.month++, touch = true;
            break;
        case 5:
            if (start.day > 31)
                start.day = 1, start.month++, touch = true;
            break;
        case 6:
            if (start.day > 30)
                start.day = 1, start.month++, touch = true;
            break;
        case 7:
            if (start.day > 31)
                start.day = 1, start.month++, touch = true;
            break;
        case 8:
            if (start.day > 31)
                start.day = 1, start.month++, touch = true;
            break;
        case 9:
            if (start.day > 30)
                start.day = 1, start.month++, touch = true;
            break;
        case 10:
            if (start.day > 31)
                start.day = 1, start.month++, touch = true;
            break;
        case 11:
            if (start.day > 30)
                start.day = 1, start.month++, touch = true;
            break;
        case 12:
            if (start.day > 31)
                start.day = 1, start.month++, touch = true;
            break;
        }
        if (start.month > 12)
            start.month = 1, start.year++;
        // cout << start.month << " " << start.day << " " << start.hour << " " << start.minute << " " << start.second << endl;
    }
    while (start.year < end.year || start.month < end.month || start.day < end.day || start.hour < end.hour - 1 || (start.hour < end.hour && start.minute < end.minute))
    {
        s += 60;
        bool touch = false;
        start.minute++;

        if (start.minute > 59)
            start.minute = 0, start.hour++;
        if (start.hour > 23)
            start.hour = 0, start.day++;
        switch (start.month)
        {
        case 1:
            if (start.day > 31)
                start.day = 1, start.month++, touch = true;
            break;

        case 2:
            if (start.year % 400 == 0 || (start.year % 4 == 0 && start.year % 100 != 0))
            {
                if (start.day > 29)
                    start.day = 1, start.month++, touch = true;
            }
            else if (start.day > 28)
                start.day = 1, start.month++, touch = true;
            break;

        case 3:
            if (start.day > 31)
                start.day = 1, start.month++, touch = true;
            break;
        case 4:
            if (start.day > 30)
                start.day = 1, start.month++, touch = true;
            break;
        case 5:
            if (start.day > 31)
                start.day = 1, start.month++, touch = true;
            break;
        case 6:
            if (start.day > 30)
                start.day = 1, start.month++, touch = true;
            break;
        case 7:
            if (start.day > 31)
                start.day = 1, start.month++, touch = true;
            break;
        case 8:
            if (start.day > 31)
                start.day = 1, start.month++, touch = true;
            break;
        case 9:
            if (start.day > 30)
                start.day = 1, start.month++, touch = true;
            break;
        case 10:
            if (start.day > 31)
                start.day = 1, start.month++, touch = true;
            break;
        case 11:
            if (start.day > 30)
                start.day = 1, start.month++, touch = true;
            break;
        case 12:
            if (start.day > 31)
                start.day = 1, start.month++, touch = true;
            break;
        }
        if (start.month > 12)
            start.month = 1, start.year++;
        // cout << start.month << " " << start.day << " " << start.hour << " " << start.minute << " " << start.second << endl;
    }
    while (start.year < end.year || start.month < end.month || start.day < end.day || start.hour < end.hour || start.minute < end.minute - 1 || (start.minute < end.minute && start.second < end.second))
    {
        s += 1;
        bool touch = false;
        start.second++;
        if (start.second > 59)
            start.second = 0, start.minute++;
        if (start.minute > 59)
            start.minute = 0, start.hour++;
        if (start.hour > 23)
            start.hour = 0, start.day++;
        switch (start.month)
        {
        case 1:
            if (start.day > 31)
                start.day = 1, start.month++, touch = true;
            break;

        case 2:
            if (start.year % 400 == 0 || (start.year % 4 == 0 && start.year % 100 != 0))
            {
                if (start.day > 29)
                    start.day = 1, start.month++, touch = true;
            }
            else if (start.day > 28)
                start.day = 1, start.month++, touch = true;
            break;

        case 3:
            if (start.day > 31)
                start.day = 1, start.month++, touch = true;
            break;
        case 4:
            if (start.day > 30)
                start.day = 1, start.month++, touch = true;
            break;
        case 5:
            if (start.day > 31)
                start.day = 1, start.month++, touch = true;
            break;
        case 6:
            if (start.day > 30)
                start.day = 1, start.month++, touch = true;
            break;
        case 7:
            if (start.day > 31)
                start.day = 1, start.month++, touch = true;
            break;
        case 8:
            if (start.day > 31)
                start.day = 1, start.month++, touch = true;
            break;
        case 9:
            if (start.day > 30)
                start.day = 1, start.month++, touch = true;
            break;
        case 10:
            if (start.day > 31)
                start.day = 1, start.month++, touch = true;
            break;
        case 11:
            if (start.day > 30)
                start.day = 1, start.month++, touch = true;
            break;
        case 12:
            if (start.day > 31)
                start.day = 1, start.month++, touch = true;
            break;
        }
        if (start.month > 12)
            start.month = 1, start.year++;
        // cout << start.month << " " << start.day << " " << start.hour << " " << start.minute << " " << start.second << endl;
    }
    while (start.year != end.year || start.month != end.month || start.day != end.day || start.hour != end.hour || start.minute != end.minute || start.second != end.second)
    {

        s += 1;
        bool touch = false;
        start.second++;
        if (start.second > 59)
            start.second = 0, start.minute++;
        if (start.minute > 59)
            start.minute = 0, start.hour++;
        if (start.hour > 23)
            start.hour = 0, start.day++;
        switch (start.month)
        {
        case 1:
            if (start.day > 31)
                start.day = 1, start.month++, touch = true;
            break;

        case 2:
            if (start.year % 400 == 0 || (start.year % 4 == 0 && start.year % 100 != 0))
            {
                if (start.day > 29)
                    start.day = 1, start.month++, touch = true;
            }
            else if (start.day > 28)
                start.day = 1, start.month++, touch = true;
            break;

        case 3:
            if (start.day > 31)
                start.day = 1, start.month++, touch = true;
            break;
        case 4:
            if (start.day > 30)
                start.day = 1, start.month++, touch = true;
            break;
        case 5:
            if (start.day > 31)
                start.day = 1, start.month++, touch = true;
            break;
        case 6:
            if (start.day > 30)
                start.day = 1, start.month++, touch = true;
            break;
        case 7:
            if (start.day > 31)
                start.day = 1, start.month++, touch = true;
            break;
        case 8:
            if (start.day > 31)
                start.day = 1, start.month++, touch = true;
            break;
        case 9:
            if (start.day > 30)
                start.day = 1, start.month++, touch = true;
            break;
        case 10:
            if (start.day > 31)
                start.day = 1, start.month++, touch = true;
            break;
        case 11:
            if (start.day > 30)
                start.day = 1, start.month++, touch = true;
            break;
        case 12:
            if (start.day > 31)
                start.day = 1, start.month++, touch = true;
            break;
        }
        if (start.month > 12)
            start.month = 1, start.year++;
        // cout << start.month << " " << start.day << " " << start.hour << " " << start.minute << " " << start.second << endl;
    }
    int day = s / 86400;
    s %= 86400;
    int hour = s / 3600;
    s %= 3600;
    int minute = s / 60;
    s %= 60;
    int second = s;
    tD.day = day;
    tD.hour = hour;
    tD.minute = minute;
    tD.second = second;

    return tD;
}

void printTimeDifference(TimeInterval tD)
{
    cout << "Time Difference = " << tD.day << " day " << tD.hour << " hour " << tD.minute << " minute " << tD.second << " second " << endl;
}

int status(Datetime start, Datetime end)
{
    if (start.minute > 59 || start.hour > 23 || start.second > 59)
        return 1;

    if (end.hour > 23 || end.minute > 59 || end.second > 59)
        return 2;

    {
        if (start.year > end.year)
        {
            return 3;
        }
        if (start.year >= end.year && start.month > end.month)
        {
            return 3;
        }
        if (start.year >= end.year && start.month >= end.month && start.day > end.day)
        {
            return 3;
        }
        if (start.year >= end.year && start.month >= end.month && start.day >= end.day && start.hour > end.hour)
        {
            return 3;
        }
        if (start.year >= end.year && start.month >= end.month && start.day >= end.day && start.hour >= end.hour && start.minute > end.minute)
        {
            return 3;
        }
        if (start.year >= end.year && start.month >= end.month && start.day >= end.day && start.hour >= end.hour && start.minute >= end.minute && start.second > end.second)
        {
            return 3;
        }
    }
    switch (start.month)
    {
    case 1:
        if (start.day > 31)
            return 1;
        break;
    case 2:
        if (start.year % 400 == 0 || (start.year % 4 == 0 && start.year % 100 != 0))
        {
            if (start.day > 29)
                return 1;
            break;
        }
        else if (start.day > 28)
            return 1;
        break;
    case 3:
        if (start.day > 31)
            return 1;
        break;
    case 4:
        if (start.day > 30)
            return 1;
        break;

    case 5:
        if (start.day > 31)
            return 1;
        break;

    case 6:
        if (start.day > 30)
            return 1;
        break;

    case 7:
        if (start.day > 31)
            return 1;
        break;

    case 8:
        if (start.day > 31)
            return 1;
        break;

    case 9:
        if (start.day > 30)
            return 1;
        break;

    case 10:
        if (start.day > 31)
            return 1;
        break;

    case 11:
        if (start.day > 30)
            return 1;
        break;

    case 12:
        if (start.day > 31)
            return 1;
        break;
    }
    switch (end.month)
    {
    case 1:
        if (end.day > 31)
            return 2;
        break;
    case 2:
        if (end.year % 400 == 0 || (end.year % 4 == 0 && end.year % 100 != 0))
        {
            if (end.day > 29)
                return 2;
            break;
        }
        else if (end.day > 28)
            return 2;
        break;
    case 3:
        if (end.day > 31)
            return 2;
        break;
    case 4:
        if (end.day > 30)
            return 2;
        break;

    case 5:
        if (end.day > 31)
            return 2;
        break;

    case 6:
        if (end.day > 30)
            return 2;
        break;

    case 7:
        if (end.day > 31)
            return 2;
        break;

    case 8:
        if (end.day > 31)
            return 2;
        break;

    case 9:
        if (end.day > 30)
            return 2;
        break;

    case 10:
        if (end.day > 31)
            return 2;
        break;

    case 11:
        if (end.day > 30)
            return 2;
        break;

    case 12:
        if (end.day > 31)
            return 2;
        break;
    }

    return 0;
}

// Start Datetime = 2000/01/01 00:00:00
// End Datetime = 2022/10/31 18:30:00
// Time Difference = 8339 day 18 hour 30 minute 0 second