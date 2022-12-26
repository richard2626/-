#include <stdio.h>

int main(){
	
	long x,y,z;
	long ans,temp;

	printf("Input x, y, z => ");
	scanf("%ld %ld %ld", &x,&y,&z);
	
	ans = z%10;
	temp = z/10;
	ans -= temp%10;
	printf("\n%ld+%ld = %ld\n",x,y,x+y);
	printf("%ld-%ld = %ld\n",x,y,x-y);
	printf("%ld*%ld = %d\n",x,y,x*y);
	printf("%ld/%ld = %ld ... %ld\n",x,y,x/y,x%y);
	printf("Difference of the last two digits of %ld = %ld\n", z,ans*(-1));
	printf("Average of %ld, %ld, %ld = %ld\n",x,y,z,(x+y+z)/3);
	

	
}