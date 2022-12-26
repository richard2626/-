#include <stdio.h>

int main()
{
    int p[] = {0, 1, 2, 3, 4};
    char a[6] = "abcde";
    for (int i = 0; i < 5; i++)
    {
        printf("%c\n", a[i]);
    }
    char *t = a + 2;
    printf("%s\n", t);
    int *s;
    s = p + 1;

    for (int i = 0; i < 5; i++)
    {
        printf("%p %d %p %d\n", &p[i], p[i], &s[i], s[i]);
    }
}