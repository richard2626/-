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
int **multiplyMat(int **Mat1, int **Mat2, int M, int N, int K)
{
    int **ans = new int *[M];
    for (int i = 0; i < M; i++)
    {
        ans[i] = new int[K];
    }
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < K; j++)
        {
            ans[i][j] = 0;
        }
    }
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < K; j++)
        {
            for (int k = 0; k < N; k++)
            {
                ans[i][j] += Mat1[i][k] * Mat2[k][j];
            }
        }
    }
    return ans;
}
int **toeplitzMat(int **Mat, int M, int N)
{
    int **ans = new int *[M];
    for (int i = 0; i < M; i++)
    {
        ans[i] = new int[N];
    }
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (i - j < 0)
            {
                ans[i][j] = Mat[0][j - i];
            }
            else if (i - j > 0)
            {
                ans[i][j] = Mat[i - j][0];
            }
            else
            {
                ans[i][j] = Mat[0][0];
            }
        }
    }
    return ans;
}
void printMat(int **Mat, int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%4d", Mat[i][j]);
        }
        printf("\n");
    }
}