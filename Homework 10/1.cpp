#include <stdio.h>
#include <stdlib.h>

int main()
{

    printf("SEED = \n");
    printf("12345678901234567890123456789\n");
    int x = 0;
    int *p = new int[6];
    for (int i = 0; i < 6; i++)
    {
        *(p + i) = 0;
    }
    int toss;
    srand(12345);
    for (int i = 0; i < 100; i++)
    {
        //toss = double(rand()) / (RAND_MAX + 1.0) * 6;
        toss = rand()%6;
        *(p + toss) += 1;
    }
    for (int i = 0; i < 6; i++)
    {
        printf("%d: ", i + 1);
        for (int j = 0; j < *(p + i); j++)
        {
            printf("*");
        }
        printf("\n");
    }
    delete[] p;
}
