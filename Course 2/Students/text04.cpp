// Alphar 20211216
#include <conio2.h>
#include <stdio.h>

int main()
{
//  clrscr();
 	textattr((LIGHTGRAY << 4) + WHITE);
  	printf("Climb");
  	textattr((BLACK << 4) + LIGHTGRAY);
  	printf(" every ");
  	textcolor(GREEN);
  	printf("mountain\r\n");
  	textcolor(LIGHTGRAY);
  	printf("Ford ");
  	textcolor(LIGHTMAGENTA);
  	printf("every ");
  	textcolor(LIGHTCYAN);
  	printf("stream\r\n");
  	textcolor(LIGHTGRAY);
  	printf("Follow every ");
  	textcolor(LIGHTRED);
  	printf("r");
  	textcolor(BROWN);
  	printf("a");
  	textcolor(YELLOW);
  	printf("i");
  	textcolor(GREEN);
  	printf("n");
  	textcolor(LIGHTBLUE);
  	printf("b");
  	textcolor(BLUE);
  	printf("o");
  	textcolor(MAGENTA);
  	printf("w\r\n");
  	textcolor(LIGHTGRAY);
  	printf("Till you find your ");
  	textattr((CYAN << 4) + YELLOW);
  	printf("dream");
  	getch();
  
  	return 0;
}
