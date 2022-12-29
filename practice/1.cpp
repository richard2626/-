#include <stdio.h>
#include <cstring>
#include <stdlib.h>
#include "1.h"

char **findEdges(char image[H][W]);
int main()
{
    char **ans;
    printf("Original Picture:\n");
    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            printf("%c ", image[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
    ans = findEdges(image);
    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            printf("%c ", ans[i][j]);
        }
        printf("\n");
    }
}
char **findEdges(char image[H][W])
{
    char **ans = new char *[H];
    for (int i = 0; i < W; i++)
    {
        ans[i] = new char[W];
    }
    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            ans[i][j] = image[i][j];
        }
    }
    for (int i = 1; i < H - 1; i++)
    {
        for (int j = 1; j < W - 1; j++)
        {
            if (image[i][j] == '1')
            {
                if (image[i - 1][j] == '1' && image[i][j + 1] == '1' && image[i][j - 1] == '1' && image[i + 1][j] == '1')
                {
                    ans[i][j] = '0';
                }
            }
        }
    }
    return ans;
}