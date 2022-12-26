#include<stdio.h>

int main(){
	double num =1.414213562373095;
	double x,y;
	double cena, cenb;
	double corAa, corAb;
	double corBa, corBb;
	double fore, base, per;
	
	printf("Input lengths of x and y => ");
	scanf("%lf %lf",&x,&y);
	
	cena = x/2;
	cenb = x/2;
	printf("\nCoordinate of center of wakuwaku lake: (%lf, %lf)",cena, cenb);
	
	corAa = 0.5*x + y/num;
	corAb = 0.5*x;
	printf("\nCoordinate of corner A: (%lf, %lf)", corAa,corAb);
	
	corBa = 0.5*x;
	corBb = 0.5*x + y/num;
	printf("\nCoordinate of corner B: (%lf, %lf)", corBa,corBb);
	
	fore = (y*num-x)*(y*num-x);
	printf("\nArea of forest: %lf", fore);
	
	base = (x*num-y)*(x*num-y);
	printf("\nArea of spy base: %lf", base);
	
	per = 4*(y*num-x) + 4*(x*num-y);
	printf("\nPerimeter of wakuwaku lake: %lf\n", per);
	

	
}