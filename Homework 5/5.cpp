#include <stdio.h>

int main()
{
    int x, y;
    printf("Input coordinate x, y: ");
    while (scanf("%d %d", &x, &y) != EOF)
    {
        if (x == 0 || y == 0)
        {
            if (x == 0 && y == 0)
            {
                printf("(%d,%d) is the origin.\n", x, y);
            }
            else if (x == 0)
            {
                printf("(%d,%d) is on the y-axis.\n", x, y);
            }
            else
            {
                printf("(%d,%d) is on the x-axis.\n", x, y);
            }
        }
        else if (x > 0)
        {
            if (y > 0)
            {
                printf("(%d,%d) is in the first quadrant.\n", x, y);
            }
            else
            {
                printf("(%d,%d) is in the fourth quadrant.\n", x, y);
            }
        }
        else if (x < 0)
        {
            if (y > 0)
            {
                printf("(%d,%d) is in the second quadrant.\n", x, y);
            }
            else
            {
                printf("(%d,%d) is in the third quadrant.\n", x, y);
            }
        }
        printf("Input coordinate x, y: ");
    }
}