// Alphar 20211216
#include <conio2.h>
#include <stdio.h>

int main()
{
  	textbackground(BLACK);
  	clrscr();
  	textbackground(LIGHTGRAY);  //Set background color to LIGHTGRAY
  	textcolor(BLUE);  //Set foreground color to BLUE
  	highvideo(); //high-intensity
  	printf("This is a HIGH intensity word.\r\n");  //remember to add '\r' to begin at a new line when using cprintf
  	getch();
  
  	textcolor(LIGHTRED);
  	lowvideo();  //low-intensity
  	// textcolor(RED);
  	printf("This is a LOW intensity word.\r\n");
  	getch();
  
  	textcolor(BLUE);
  	printf("Oops! Don't press any key, or I'll be deleted!!");
  	if (getch())
		delline();  //delete a line at the position of cursor
  	
  	//set foreground to WHITE, background to GREEN
  	textattr((GREEN << 4) + WHITE);
  	cprintf("\rHaha!! You've deleted a line!!\r\n");
  	getch();
  
  	textattr((BLACK << 4) + LIGHTGRAY);
  	clrscr();  //fill with background color
  	cprintf("The end. Press any key.\r\n");
  	getch();
  
  	return 0;
}
