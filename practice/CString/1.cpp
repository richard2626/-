#include <stdio.h>
#include <string.h>

int main()
{
    char s[100] = {"0123456789"};
    char c;
    for (int i = 0; i < 10; i++)
    {
        printf("%s\n", s);
        c = s[0];
        strcpy(s, &s[1]);
        strcat(s, &c);
    }
}