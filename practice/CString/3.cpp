#include <stdio.h>
#include <string.h>

int main()
{
    char *s = new char[100];
    printf("Input: ");
    fgets(s, 100, stdin);
    char *take = new char[100];
    int count = 0;
    take = strtok(s, ", ");
    while (take != NULL)
    {
        take = strtok((char *)('\0'), ", ");
        count++;
    }
    printf("the total number of words: %d\n", count);
}