#include <iostream>
#include <string>
#include <cstring>
using namespace std;

void mode_1(string, int);
void mode_2(string, int);
void mode_3(string, int);
void mode_4(string, int);
void mode_5(string, int);

int main()
{
    char s[100];
    int len;
    int mode;
    while (1)
    {
        cin.getline(s, 100);
        mode = int(s[0] - '0');
        len = strlen(s);
        if (!mode)
        {
            break;
        }
        switch (mode)
        {
        case 1:
            mode_1(s, len);
            break;
        case 2:
            mode_2(s, len);
            break;
        case 3:
            mode_3(s, len);
            break;
        case 4:
            mode_4(s, len);
            break;
        case 5:
            mode_5(s, len);
            break;
        }
    }

    return 0;
}
void mode_1(string s, int len)
{
    for (int i = 2; i < len; i++)
    {
        cout << int(s[i]);
    }
    cout << endl;
}
void mode_2(string s, int len)
{
    for (int i = 2; i < len; i++)
    {

        cout << hex << int(s[i]);
    }
    cout << endl;
}
void mode_3(string s, int len)
{
    int num;
    int pos = 2;
    while (pos + 1 < len)
    {
        num = 0;
        while (num < 32)
        {
            num *= 10;
            num += int(s[pos] - '0');
            pos++;
        }
        cout << (char)num;
    }
    cout << endl;
}
void mode_4(string s, int len)
{
    int num;
    int pos = 2;
    while (pos + 1 < len)
    {
        num = 0;
        while (num < 32)
        {
            num *= 16;
            if (int(s[pos]) >= 65)
            {
                num += int(s[pos] - 'a') + 10; // 0123456789ABCDEF
            }
            else
            {
                num += int(s[pos] - '0');
            }
            pos++;
        }
        cout << (char)num;
    }
    cout << endl;
}
void mode_5(string s, int len)
{
    string ans = "";
    int shi;
    int temp;
    if (int(s[2]) >= 97)
    {
        shi = -(int(s[2] - 'a'));
    }
    else if (int(s[2]) >= 65)
    {
        shi = int(s[2] - 'A');
    }
    for (int i = 4; i < len; i++)
    {
        temp = int(s[i]) + shi;
        if ((int(s[i]) >= 65 && int(s[i]) <= 90) || (int(s[i]) >= 97 && int(s[i]) <= 122))
        {
            if (int(s[i]) >= 65 && int(s[i]) <= 90)
            {
                if (temp > 90)
                {
                    temp -= 26;
                }
                if (temp < 65)
                {
                    temp += 26;
                }
                ans += char(temp);
            }
            else
            {
                if (temp > 122)
                {
                    temp -= 26;
                }
                if (temp < 97)
                {
                    temp += 26;
                }
                ans += char(temp);
            }
        }
        else
        {
            ans += char(int(s[i]));
        }
    }
    cout << ans << endl;
}
