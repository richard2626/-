#include <iostream>
#include <stdio.h>
#include <string>
#include <cstring>
#include <math.h>

using namespace std;

void mode_1();
void mode_2();
bool iserrorbase(string, int);
int to_decimal(string, int);
string convert(int, int);

int main()
{
    int mode;
    printf("Enter 1 for Greatest Common Divisor Calculation\n");
    printf("Enter 2 for Number Base Conversion\n");
    printf("Enter 3 to exit\n");
    while (1)
    {
        cin >> mode;
        if (mode == 3)
        {
            break;
        }
        switch (mode)
        {
        case 1:
            mode_1();
            break;
        case 2:
            mode_2();
            break;
        default:
            cout << "Invalid option!" << endl;
        }
        printf("Enter 1 for Greatest Common Divisor Calculation\n");
        printf("Enter 2 for Number Base Conversion\n");
        printf("Enter 3 to exit\n");
    }
}
void mode_1()
{
    int a, b;
    cout << "Please enter two positive integers: ";
    cin >> a >> b;
    if (a == 0 || b == 0)
    {
        cout << "Greatest Common Divisor: " << (a == 0 ? b : a) << endl;
    }
    else
    {
        while (a != b)
        {
            while (a > b)
            {
                a -= b;
            }
            while (b > a)
            {
                b -= a;
            }
        }
        cout << "Greatest Common Divisor: " << a << endl;
    }

    /*
   36 45
   36 9
   27 9
   18 9
   9 9
   */
}
void mode_2()
{
    string s;
    int obase;
    int cbase;
    cout << "Please enter a number to convert: ";
    cin >> s;
    cout << "Please enter the original base: ";
    cin >> obase;
    cout << "Please enter the converted base: ";
    cin >> cbase;
    if (obase > 10 || obase < 2 || cbase > 16 || cbase < 2)
    {
        cout << "Base out of range!" << endl;
    }
    else if (iserrorbase(s, obase))
    {
        cout << "Error Base!" << endl;
    }
    else
    {
        cout << "Converted Number: " << convert(to_decimal(s, obase), cbase) << endl;
    }
}
string convert(int dec, int cbase)
{
    string ans = "";
    int k;
    while (dec)
    {
        k = dec % cbase;
        if (k >= 10)
        {
            ans = char(k + 55) + ans;
        }
        else
            ans = char(k + '0') + ans;
        dec /= cbase;
    }
    return ans;
}
int to_decimal(string s, int obase)
{
    long long sum = 0;
    for (int i = 0; i < s.length(); i++)
    {
        sum += pow(obase, s.length() - i - 1) * (int(s.at(i) - '0'));
    }
    return sum;
}
bool iserrorbase(string s, int obase)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (int(s.at(i) - '0') >= obase) // 2147483647
        {
            return 1;
        }
    }

    return 0;
}