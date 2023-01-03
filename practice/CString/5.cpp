#include <stdio.h>
#include <string.h>
#include <iostream>

char add(char, char, char *);
int main()
{
    char *s = new char[100];
    char *f = new char[100];
    scanf("%s", s);
    scanf("%s", f);
    char *a = new char[100]();
    char *b = new char[100]();
    for (int i = 0; i < 100; i++)
    {
        a[i] = '0';
        b[i] = '0';
    }
    int max = strlen(s) > strlen(f) ? strlen(s) : strlen(f);
    for (int i = 0; i < strlen(s); i++)
    {
        a[i] = s[strlen(s) - i - 1];
    }
    for (int i = 0; i < strlen(f); i++)
    {
        b[i] = f[strlen(f) - i - 1];
    }
    char *ans = new char[100]();
    char c = '0';
    for (int i = 0; i <= max; i++)
    {
        ans[i] = add(a[i], b[i], &c);
    }
    ans[strlen(ans)] = c == '0' ? '\0' : c;
    for (int i = 0; i < strlen(ans); i++)
    {
        printf("%c", ans[strlen(ans) - i - 1]);
    }
    printf("\n");
}
char add(char a, char b, char *c)
{
    char ans;
    int out = int(a) - 48 + int(b) - 48 + int(*c) - 48;
    ans = char(out % 10 + 48);
    *c = char(out / 10 + 48);
    return ans;
}