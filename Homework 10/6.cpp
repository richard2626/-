#include <stdio.h>
#include <string.h>

int main()
{
    char *a;
    char *b;
    char *p;
    char in;
    int len;
    int pos;
    a = new char[100];
    b = new char[100];
    printf("Enter on strand of DNA molecule segment:\n");
    while (scanf("%s", a) != EOF)
    {

        printf("Enter complementary strand:\n");
        scanf("%s", b);
        printf("Enter length of palindromic sequence: \n");
        scanf("%d", &len);
        printf("The DNA:\n");
        printf("%s\n", a);
        printf("%s\n\n", b);
        printf("Palindromes of length is %d\n\n", len);
        p = new char[len];
        bool same;
        for (int i = 0; i < strlen(a) - len + 1; i++)
        {
            same = true;
            for (int j = 0; j < len; j++)
            {
                if (a[j + i] != b[i + len - 1 - j])
                {
                    same = false;
                    break;
                }
            }
            if (same)
                pos = i;
        }
        printf("Palindrome at position %d\n", pos);
        for (int i = pos; i < pos + len; i++)
        {
            printf("%c", a[i]);
        }
        printf("\n");
        for (int i = pos; i < pos + len; i++)
        {
            printf("%c", b[i]);
        }
        printf("\n\n=================\n\n");

        printf("Enter on strand of DNA molecule segment:\n");
    }
}