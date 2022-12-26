#include <stdio.h>

int main()
{
	int a,b,r;
	a=1;
	printf("Input: ");
	scanf(" %d",&b);
	r = b;
	while(scanf(" %d",&a)){
		while(a!=b){
			while(a>b){
				a -= b;
			}
			while(b>a){
			
				b -= a;
			}
		}	
		r =a;
	}
	printf("GCD = %d\n",r);
	
}