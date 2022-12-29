#include <stdio.h>

int **generateMat(int, int);
void inputMat(int **, int, int);
int **multiplyMat(int **Mat1, int **Mat2, int M, int N, int K);
int **toeplitzMat(int **Mat, int M, int N);
void printMat(int **, int, int);

int main()
{
    int M, N, K;
    int **Mat1, **Mat2, **ans, **toep;
    printf("input row,column of 1st matrix and column of 2nd matrix (m n k)): ");
    while (scanf("%d %d %d", &M, &N, &K))
    {
        Mat1 = generateMat(M, N);
        printf("input data of a matrix: ");
        inputMat(Mat1, M, N);

        Mat2 = generateMat(N, K);
        printf("input data of a matrix: ");
        inputMat(Mat2, N, K);

        ans = multiplyMat(Mat1, Mat2, M, N, K);
        printf("\nMatrix1:\n");
        printMat(Mat1, M, N);
        printf("\nMatrix2:\n");
        printMat(Mat2, N, K);
        printf("\nAnswer:\n");
        printMat(ans, M, K);

        toep = toeplitzMat(ans, M, K);
        printf("\nToeplitzMatrix:\n");
        printMat(toep, M, K);
        printf("\ninput row,column of 1st matrix and column of 2nd matrix (m n k)): ");
    }
    return 0;
}
int **generateMat(int r, int c)
{
    int **ans = new int *[r];
    for (int i = 0; i < r; i++)
    {
        ans[i] = new int[c];
    }
    return ans;
}
void inputMat(int **ans, int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &ans[i][j]);
        }
    }
}
int **multiplyMat(int **Mat1, int **Mat2, int M, int N, int K);
int **toeplitzMat(int **Mat, int M, int N);
void printMat(int **, int, int);