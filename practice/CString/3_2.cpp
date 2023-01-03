#include <stdio.h>
#include <string.h>

int main()
{
    char *s = new char[100];
    printf("Input: ");
    fgets(s, 100, stdin);
    char *take = new char[100];
    int count = 0;
    char c;
    int i = 0;
    c = s[i];
    while (c != '_')
    {
        c = s[++i];
    }
    take = strtok(&s[i], "_");
    printf("%s\n", take);
}