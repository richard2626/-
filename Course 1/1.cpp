/***************************
 * 2022.09.13 ICP Course01 *
 * My first I/O program    *
 ***************************/
 
 //include header file of IO functions
 #include<stdio.h>
 
 int main() // enter the program from main function
 {	//opening brace
 
 	//information of course
	printf("This is NYCU EED TsaiMa's course:\n"); //print message
	printf("Introduction to Computer and Programming.\n"); //print message
	printf("\n"); //newline
	
	int id; //allocation of integer variable
	printf("Please enter your NYCU student ID: "); //prompt message
	scanf("%d", &id); //enter your student io
	
	printf("\n"); //newline
	//print personal information
	printf("My id is %d, please give me an Apple Watch Ultra!!!", id);
	
	return 0;
	//closing brace
 	
 	
 }
 