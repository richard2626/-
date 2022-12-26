#include<stdio.h>

int main()
{
	int x;
	float y;
	double z;
	printf("Please input an integer number x: ");
	scanf("%d",&x);
	
	printf("Please input a floating number y: ");
	scanf("%f",&y);
	
	printf("Please input a double number z: \n");
	scanf("%lf",&z);
	
	printf("addr of x => %u (%x, %p)\n", &x,&x,&x);
	printf("addr of y => %u (%x, %p)\n", &y,&y,&y);
	printf("addr of z => %u (%x, %p)\n", &z,&z,&z);
	 
	printf("\ncontent of x => %d (HEX: %p)\n",x,x);
	printf("content of y => %f\n", y);
	printf("content of z => %lf\n", z);
	
	
	
	
}