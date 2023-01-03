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
    scanf(" %c", &s[0]);
    printf("%s\n", s);
}