// Alphar 20221219

#include <stdio.h>
#include <conio2.h>

struct char_info buff[4096];  //Dev-C

int main()
{
  int a, i, j;
  int maxx = 120, maxy = 29;  //Dev: maxx = 120, maxy = 29;
  textbackground(BLACK);
  textcolor(WHITE);
  clrscr();
  for (i = 1; i <= maxy; i++)  //vertical coordinates
  {
	printf("%2d", i);
	if (i != maxy)
    	printf("\r\n");
  }
  getch();
  
  gotoxy(1, 1);
  for (i = 1; i <= maxx; i++)  //horizontal coordinates
    printf("%d", i % 10);
  getch();
  
  textattr((BLUE << 4) + LIGHTGRAY);  //setting background and text color
  for (i = 11; i <= 70; i++)
    for (j = 3; j <= 22; j++)
    {
      gotoxy(i, j);
      if (j == 3)
        printf("%c", 'A' + (i - 1) % 10);
      else if (i == 11)
        printf("%c", 'A' + (j - 3));
      else
        printf(" ");
    }
  getch();
  
  textcolor(YELLOW);
  gotoxy(18, 4);
  printf("* (%d, %d)", wherex(), wherey());  //wherex(), wherey(): CURRENT text window
  getch();

  gotoxy(51, 4);
  printf("movetext()");
  gotoxy(51, 5);
  printf("Orz");
  getch();

  textcolor(LIGHTGREEN);
  gotoxy(13, 5);
  printf("gettext() to copy");
  gotoxy(13, 6);
  printf("puttext() to paste");
  getch();

  //demonstrate movetext()
  movetext(51, 1, 60, 5, 61, 21);  //Dev
  getch();

  movetext(61, 21, 70, 25, maxx - 3, maxy - 3);  //Dev
  getch();

  //demonstrate gettext() and puttext()
  //for Dev-C++, replace all buff in lines 105~112 into buf
  gettext(1, 1, 20, 10, buff);  //20 * 10
  puttext(61, 16, 80, 25, buff);  //20 * 10
  getch();
  puttext(31, 6, 40, 25, buff);  //10 * 20, notice the arragement of text
  getch();
  puttext(51, 6, 60, 15, buff);  //10 * 10, insufficient rectangular size
  getch();
  puttext(maxx - 9, 6, maxx + 10, 15, buff);  //20 * 10, exceeding the border
  getch();

  return 0;
}
