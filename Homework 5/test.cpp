#include <stdio.h>
void test();
int main()
{
    int n;
    scanf("%d", &n);
    while (n--)
    {
        test();
    }
}
void test()
{
    char s[100];
    scanf(" %c", &s);
    printf("%s\n", s);
}