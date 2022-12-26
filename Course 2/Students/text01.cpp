// Alphar 20221205
//Demonstrate gotoxy(), wherex(), wherey(), clreol(), insline(), and delline()
#include <stdio.h>
#include <conio2.h>  //for Dev-C++, use conio2.h

int main()
{
	clrscr();
  	printf("12345678901234567890\n");
  	printf("LINE 002: abcdefghij\n");
  	printf("LINE 003: ABCDEFGHIJ\n");
  	printf("LINE 004: 1234567890\n");
  	printf("LINE 005: !@#$%^&*()\n");
  	
  
  	gotoxy(10, 20);
  	printf("I am at (%d, %d).", wherex(), wherey());  //show position
  	getch();
  
  	gotoxy(10, 2);
  	getch();
  
  	clreol();  //clear everything from cursor to the end of line
  	getch();
  
  	gotoxy(5, 3);
  	getch();
  
	delline();  //delete LINE 003. all lines below the deleted one move upward
  	getch();
  
  	gotoxy(3, 2);
  	getch();
  
  	insline();  //insert a line before LINE 002
  	getch();
  
  	return 0;
}
