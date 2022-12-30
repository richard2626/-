#include <stdio.h>
#include <stdlib.h>
#define SEED 12345

int seqsearch(int *, int, int, int &);
int binsearch(int *, int, int, int &);
void sort(int *, int);

int main()
{
    int N, M;
    srand(SEED);
    while (printf("N, M: "), scanf("%d %d", &N, &M) != EOF)
    {
        int *data = new int[N];
        int *datatmp = new int[M];
        int *sortdata = new int[N];
        // The following three for loop to randomly create N 個 "NOT duplicated" data //range from 1 to M
        for (int i = 1; i <= M; i++)
            datatmp[i - 1] = i;
        for (int i = 0; i < M; i++)
        {
            int t = rand() % M;
            int d = datatmp[i];
            datatmp[i] = datatmp[t];
            datatmp[t] = d;
        }
        for (int i = 0; i < N; i++)
            data[i] = datatmp[i];
        for (int i = 0; i < N; i++)
            sortdata[i] = data[i];
        sort(sortdata, N);
        int seqfind = 0, binfind = 0, sc = 0, bc = 0, tsc = 0, tbc = 0;
        for (int i = 0; i < M; i++)
        {
            int tar = rand() % M + 1;
            sc = 0;
            bc = 0;
            if (seqsearch(data, N, tar, sc))
                seqfind++;
            if (binsearch(sortdata, N, tar, bc))
                binfind++;
            tsc += sc;
            tbc += bc;
        }
        printf("--- Sequential Search ---\n");
        printf("The number of successful searches: %d\n", seqfind);
        printf("The percentage of successful searches: %.3lf%%\n", 100. * seqfind / M);
        printf("The average number of the search is %lg\n", 1.0 * tsc / M);
        printf("\n--- Binary Search ---\n");
        printf("The number of successful searches: %d\n", binfind);
        printf("The percentage of successful searches: %.3lf%%\n", 100. * binfind / M);
        printf("The average number of the search is %lg\n", 1.0 * tbc / M);
        printf("\n\n");
    }
    return 0;
}
int seqsearch(int *data, int N, int target, int &c)
{
    for (int i = 0; i < N; i++)
    {
        if (data[i] == target)
        {
            return 1;
        }
        c++;
    }
    return 0;
}
int binsearch(int *data, int N, int target, int &c)
{
    int high = N;
    int low = 0;
    int mid;
    while (high != low)
    {
        mid = (high + low) / 2;
        if (data[mid] == target)
        {
            return 1;
        }
        if (data[mid] > target)
        {

            high = mid - 1;
        }
        if (data[mid] < target)
        {
            low = mid + 1;
        }
    }
    return 0;
}
void sort(int *data, int N)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 1; j < N; j++)
        {
            if (data[i] < data[j])
            {
                int temp = data[i];
                data[i] = data[j];
                data[j] = temp;
            }
        }
    }
}