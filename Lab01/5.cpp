#include <stdio.h>

int main()
{

    int second;
    printf("Time conversion:\nInput time in seconds: \n");
    scanf("%d", &second);
    printf("The conversion result of %d seconds is\n", second);
    printf("Days: %d\n", second / 86400);
    second %= 86400;
    printf("Hours: %d\n", second / 3600);
    second %= 3600;
    printf("Minutes: %d\n", second / 60);
    second %= 60;
    printf("Seconds: %d\n", second);
}