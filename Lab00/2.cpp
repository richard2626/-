#include <stdio.h>

int main(){
	double id;
	char laname;
	char fir1;
	char fir2;
	char sex;
	long bir;
	float height;
	double weight; 
	double sw;
	double bmi;
	
	printf("Input ID (int): ");
	scanf("%d\n",&id);
	
	printf("Input first letter of last name (char): ");
	scanf("%c\n",&laname);
	
	printf("Input first letter of first name 1 (char): ");
	scanf("%c\n",&fir1);
	
	printf("Input first letter of first name 2 (char): ");
	scanf("%c\n",&fir2);
	
	printf("Input sex (char): ");
	scanf("%c\n",&sex);
	
	printf("Input birthday (long): ");
	scanf("%ld\n",&bir);
	
	printf("Input height (float): ");
	scanf("%f\n",&height);
	
	printf("Input weight (double): ");
	scanf("%lf\n",&weight);
	
	sw = 0.65*(height-75);
	bmi = weight/((height/100)*(height/100));

	
	printf("\n*********** NYCU ID Card ***********\n");
	printf("* (\\_/)  * ID %d\n", id);
	printf("* ( O_O) * NAME\n");
	printf("* />   > * %c.-%c. %c.\n",fir1,fir2,laname);
	printf("**********\n");
	printf("SEX:%c  BIRTHDAY:%ld\n",sex,bir);
	printf("HEIGHT:%fCM\n",height);
	printf("WEIGHT:%lf(%lf)KG\n",weight,sw);
	printf("BMI:%lf\n",bmi);
}
	                                         