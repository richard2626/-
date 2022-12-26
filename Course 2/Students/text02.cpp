// Alphar 20211216
// Demonstrate seeting attributes in textmode
#include <conio2.h>  //for Dev-C++, use conio2.h
#include <stdio.h>

int main()
{	
  textbackground(LIGHTRED);
  clrscr();
  printf("This is my first colored-text program.\r\n");
  getch();
  
  //using textcolor() to set the foreground color
  textcolor(YELLOW);
  printf("I use textcolor() to set these words to yellow first.\r\n");
  getch();
  
  //using textbackground() to set the background color
  textbackground(BLUE);
  printf("Next, I use textbackground() to set these sentence into blue background\r\n");
  getch();
    
  //using textattr() to set the foreground and background color
  textattr((BROWN << 4) + LIGHTGREEN);
  printf("I try the function textattr to change the properties of these words, too.\r\n");
  getch();
  
  //sentence with different color
  textcolor(LIGHTGRAY);
  printf("Be sure to use ");
  textcolor(BLUE);
  printf("\\r\\n");
  textcolor(RED);
  printf(" if you want to add text in the beginning of a new line.\r\n");
  getch();
  
  printf("I've got to go. See you.\r\n");
  getch();
  
  return 0;
}
