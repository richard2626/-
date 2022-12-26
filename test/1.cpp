#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 0;
    char arr[100] = {"1234"};
    int *q = new int[1];
    int *p = q;
    for (int i = 0; i < 4; i++)
    {
        printf("%p %c\n", &arr[i], arr[i]);
    }
    // for (int i = 0; i < 10; i++)
    // {
    //     for (int j = 0; j < 2; j++)
    //     {
    //         printf("%p ", &arr[i]);
    //     }
    //     printf("\n");
    // }
    delete[] q;
    for (int i = 0; i < 13; i++)
    {
        *(p + i) = i;
    }
    for (int i = 0; i < 13; i++)
    {
        printf("%p %d\n", &p[i], p[i]);
    }
}