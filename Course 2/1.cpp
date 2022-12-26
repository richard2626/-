#include <conio2.h>
#include <stdio.h>
#include <windows.h>

#define MAX 5 // define the max recursions, try different numbers!
#define N 500
void playMusic(int *score, int i, char *note)
{
    switch (score[i])
    {
    case 0:
    	textattr((5 << 4) + 28);
    	*note = ' ';
        _sleep(400);
        break;
    case 1: // C4
        textattr((3 << 4) + 14);
        *note = 'C';
        Beep(262, 300);
        break;
    case 2: // D4
        textattr((2 << 4) + 16);
        *note = 'D';
        Beep(294, 300);
        break;
    case 3: // E4
        textattr((4 << 4) + 17);
        *note = 'E';
        Beep(330, 300);
        break;
    case 4: // F4
        textattr((6 << 4) + 18);
        *note = 'F';
        Beep(349, 300);
        break;
    case 5: // G4
        textattr((8 << 4) + 19);
        *note = 'G';
        Beep(392, 300);
        break;
    case 6: // A4
        textattr((10 << 4) + 20);
        *note = 'F';
        Beep(440, 300);
        break;
	
    }
}
void drawRect(int x1, int y1, int x2, int y2, char note)
{
    // textbackground(WHITE);
    int x, y;
    for (x = x1; x <= x2; x++)
        for (y = y1; y <= y2; y++)
        {
            gotoxy(x, y);
            printf("%c", note);
        }
    _sleep(300);
}
void drawSierpinski(int n, int x1, int y1, int x2, int y2, int *score, int *i)
{
    if (score[*i] == -1)
    {
    	textattr((BLACK << 4) + WHITE);
        clrscr();
        exit(1);
    }
    // draw the white rectangle
    char note;
    playMusic(score, *i, &note);
    drawRect((x1 + x2) / 2, y1, x2 - 1, (y1 + y2) / 2 - 1, note);
    if (n < MAX)
    {
    	(*i)++;
        drawSierpinski(n + 1, x1, y1, (x1 + x2 ) / 2, (y1 + y2 ) / 2, score, i);
      	(*i)++;
        drawSierpinski(n + 1, x1, (y1 + y2)/2, (x1+x2)/2, y2, score, i);
        (*i)++;
        drawSierpinski(n + 1, (x1 + x2) / 2, (y1 + y2) / 2, x2, y2, score, i);

        // Something missed here!
    }
}
int main()
{
    // change to yor song
    int score[N] = {3,3,3,0,3,3,3,0,3,5,1,2,3,0,4,4,4,0,4,3,3,0,3,2,2,3,2,0,5,0,3,3,3,0,3,3,3,0,3,5,1,2,3,0,4,4,4,4,4,3,3,3,5,5,4,2,1,0,-1};
//	{5, 3, 3, 0, 4, 2, 2, 0, 1, 2, 3, 4, 5, 5, 5, 0,
//                    5, 3, 3, 0, 4, 2, 2, 0, 1, 3, 5, 5, 1, 0,
//                    2, 2, 2, 2, 2, 3, 4, 0, 3, 3, 3, 3, 3, 4, 5, 0,
//                    5, 3, 3, 0, 4, 2, 2, 0, 1, 3, 5, 5, 1,
//                    -1};
    int i = 0;
    while (1)
    {
        textbackground(0);
        clrscr();
        drawSierpinski(1, 1, 2, 120, 31, score, &i); // try different sizes!
    	
    	textbackground(0);
		getch();
    }
    getch();
    return 0;
}