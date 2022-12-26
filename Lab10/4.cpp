#include <stdio.h>
#include <stdlib.h>

int main()
{
	int m ,n;
	while(scanf("%d %d",&m,&n)){
	    printf("\n   12345678901234567890123456789\n");
	    int x = 0;
	    int *p = new int[m];
	    for (int i = 0; i < m; i++)
	    {
	        *(p + i) = 0;
	    }
	    int toss;
	    srand(12345);
	    for (int i = 0; i < n; i++)
	    {
	        //toss = double(rand()) / (RAND_MAX + 1.0) * 6;
	        toss = rand()%m;
	        *(p + toss) += 1;//p[toss] += 1
	    }
	    for (int i = 0; i < m; i++)
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
	
		
   
}
