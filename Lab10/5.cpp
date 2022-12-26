#include <stdio.h>
#include <stdlib.h>

int main()
{
	//72,23,38,86,62,29,99,96,67,78,87,76,65,58,86,69,93,34,45,55,52,7,74,48,83,39,90,18,82,26,65,53,39,96,66
    int n;
    int arr[100] = {72,23,38,86,62,29,99,96,67,78,87,76,65,58,86,69,93,34,45,55,52,7,74,48,83,39,90,18,82,26,65,53,39,96,66};
    int p[20] = {0};
    int count = 0;
    int sum = 0;
	int i=0;
	int in;
	int len = 0;
	while(arr[len]){
		len++;
	}
	while(scanf("%d",&in)){
		arr[len] = in;
		len++;
	}
	i = 0;
    while (arr[i])
    {
        if (arr[i] == -1)
            break;
        if (arr[i] == 100)
        {
            *(p + 19) += 1;
        }
        else
            *(p + (arr[i] / 5)) += 1;

        sum += arr[i];
        i++;
    }
	count = i;
    double m = double(sum) / count;
    printf("MEAN = %.3lf\n", m);
    int am = 0;
    int bm = 0;
    for (int i = 0; i < count; i++)
    {
        if (*(arr + i) > m)
        {
            // printf("%d", *(arr + i));
            am++;
        }
        if (*(arr + i) < m)
            bm++;
    }
    printf("ABOVE MEAN = %d\n", am);
    printf("BELOW MEAN = %d\n\n", bm);
    for (int i = 0; i < 20; i++)
    {
        if (i == 19)
            printf("95~100: ");
        else
            printf("%2d~%3d: ", i * 5, i * 5 + 4);
        for (int j = 0; j < *(p + i); j++)
            printf("*");
        printf("\n");
    }
}