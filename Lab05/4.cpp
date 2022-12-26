#include <stdio.h>

int main()
{
	int up;
	printf("Input upper: ");
	scanf("%d",&up);
	int score;
	int t;

	int max1=0;
	int max2=0;
	int max3=0;
	printf("Input scores: ");
	while(scanf("%d",&score)!=EOF){
		
		if(score>max3 && score<=up){
			max3 = score;
		}
		if(max1 < max2)
		{
			t = max1;
			max1 = max2;
			max2 = t;
		}
		if(max1 < max3)
		{
			t = max1;
			max1 = max3;
			max3 = t;
		}
		if(max2 < max3)
		{
			t = max2;
			max2 = max3;
			max3 = t;
		}	
		
	}
	printf("Scores: %d %d %d\n",max3,max2,max1);
	
	
	
}