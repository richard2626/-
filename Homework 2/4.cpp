#include <stdio.h>

int main()
{
    double radius;
    float pi = 3.14159;
    double diameter;
    double cir;
    double area;
    printf("Input Radius (float): ");
    scanf("%lf", &radius);
    cir = pi * radius * 2;
    area = pi * radius * radius;
    diameter = 2 * radius;
    printf("123456789012345678901234567890\n");
    printf("Diameter     : %15.10f\n", (float)diameter);
    printf("Circumference: %15.10f\n", (float)cir);
    printf("Area         : %15.10f\n", (float)area);
    
    printf("Input Radius (double): ");
	printf("123456789012345678901234567890\n");
    printf("Diameter     : %15.10lf\n", (double)diameter);
    printf("Circumference: %15.10lf\n", (double)cir);
    printf("Area         : %15.10lf", (double)area);
}