#include <stdio.h>
#include <string.h>
#include <iostream>

char add(char, char, char);
int main()
{
    char s[100];
    char f[100];
    char l = '0';
    char ans[100];
    // scanf("%s", &s);
    // scanf("%s", &f);
    int max;
    char temp[100];
    if (strlen(s) > strlen(f))
    {
        max = strlen(s);
        for (int i = 0; i < max - strlen(f); i++)
            temp[i] = '0';
        strcat(temp, f);
        strcpy(f, temp);
        printf("%s", f);
    }
    else
    {
        max = strlen(f);
        for (int i = 0; i < max - strlen(s); i++)
            temp[i] = '0';
        strcat(temp, s);
        strcpy(s, temp);
        printf("%s", s);
    }
}
// char add(char a, char b, char c)
// {
// }