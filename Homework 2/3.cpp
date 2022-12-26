#include <stdio.h>

int main()
{
    int input;
    printf("Please input 7-9 digit number: ");
    scanf("%d", &input);
    int num;
    int input2 = input;
    input2 /= 10000;
    num = input2 % 10;
    printf("Output:\nThe fifth-rightmost digit of the input data is %d\n", num);
    int a, b, c;
    c = input % 1000;
    input /= 1000;
    b = input % 1000;
    input /= 1000;
    a = input;
    printf("The input data with commas between every third digits is %d,%03d,%03d", a, b, c);
}