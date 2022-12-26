#define MINX 21
#define MAXX 100
#define MINY 6
#define MAXY 25
#include <conio2.h>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
// show map region,
// show snake on screen with direction and length according to snake position,
// and show stone on screen according to stone position
void show(int x, int y, int dir, int len, int sx, int sy)
{
	if(dir==2||dir==4)
		len*=2; 
	// Dwaw map region
	// implement something here
	textattr((WHITE << 4) + WHITE);
	gotoxy(MINX-1,MINY-1);
	for(int i=MINX-1;i<=MAXX+1;i++){
		printf(" ");
	}
	for(int i=MINY-1;i<=MAXY+1;i++){
		gotoxy(MINX-1,i);
		printf(" ");
	}
	gotoxy(MINX-1,MAXY+1);
	for(int i=MINX-1;i<=MAXX+1;i++){
		printf(" ");
	}
	for(int i=MINY-1;i<=MAXY+1;i++){
		gotoxy(MAXX+1,i);
		printf(" ");
	}
	// Dwaw snake
	for(int i=0;i<len;i++){
		switch (dir) {
			case 1: gotoxy(x,(y+i-MINY)%(MAXY-MINY+1)+MINY); break;
			case 2: gotoxy((x-i+(MAXX-MINX+1)-MINX)%(MAXX-MINX+1)+MINX,y); break;
			case 3: gotoxy(x,(y-i+(MAXY-MINY+1)-MINY)%(MAXY-MINY+1)+MINY); break;
			case 4: gotoxy((x+i-MINX)%(MAXX-MINX+1)+MINX,y); break;
		}
		// Dwaw snake head and body
		// implement something here
		if(i==0){
			textattr((RED << 4) + WHITE);
			printf("8");
		}
		else{
			textattr((GREEN << 4) + BLACK);
			printf(" ");
		}
		

	}
	// Draw stone
	// implement something here
	textattr((WHITE << 4) + BLACK);
	gotoxy(sx,sy);
	printf("0");
	gotoxy(MINX-1,MINY-1);

}
// change ahead direction of snake according to key 'w', 'd', 's', 'a'
// 'p' is for exit this game
// the parameter is direction of snake
void control(int *dir)
{
	char key;
	// int kbhit(void); check if there is a key input,
	// if yes, return nonzero, or return zero
	if (kbhit())
		key = getch();
		switch(key){
			case 'w':
				*dir = 1;
				break;
			case 'a':
				*dir = 4;
				break;
			case 's':
				*dir = 3;
				break;
			case 'd':
				*dir = 2;
				break;
			case 'p' :
				textattr((BLACK << 4) + WHITE);
				exit(1);
	}
	// implement something here
	
}
// change position of snake according to ahead direction of snake
// the first parameter is direction of ahead
// the latter two parameters are current position of snake
// change position to next position in ahead direction
void move(int dir, int *x, int*y)
{
	// implement something here
	switch(dir){
		case 1:
			(*y)--;
			if(*y<MINY){
				*y = MAXY;
			}
			break;
		case 2:
			(*x)++;
			if(*x>MAXX)
				*x = MINX;
			break;
		case 3:
			(*y)++;
			if(*y>MAXY)
				*y = MINY;
			break;
		case 4:				
			(*x)--;
			if(*x<MINX)
				*x = MAXX;
			break;	
	}

}
// randomly generate stone
// the former two parameters are for position of stone
// the latter parameter is a checking flag for regenerating new stone or not
void gen_stone(int *sx, int*sy, int *flag)
{
	// implement something here
	if(*flag){
		*sx = rand()%(MAXX-MINX+1)+MINX;
		*sy = rand()%(MAXY-MINY+1)+MINY;
		*flag = 0;
	}
}
// check if snake eats the stone and add the length of snake
// the first three parameters are positon of snake and length of snake
// the last three parameters are positon of stone and flag for regenerating stone or not
void eat(int x, int y, int *len, int sx, int sy, int *sflag)
{
	// implement something here
	if(x==sx&&sy==y){
		(*len)++;
		*sflag = 1;
	}
}
int main()
{
	
	int **pos;
	pos = new int*[3];
	for(int i=0;i<100;i++){
		pos[i] = new int[100];
	}
	int x, y, dir, len=5; // snake information
	int sx, sy, sflag=0; //stone position
	// generate position and direction of snake head randomly
	// implement something here
	srand(time(NULL));
	sx = rand()%80+21;
	sy = rand()%19+6;
	x = rand()%80+21;
	y = rand()%19+6;
	dir = rand()%4+1;
	while (1) {
		textbackground(BLACK);
		clrscr();
		gen_stone(&sx, &sy, &sflag);
		control(&dir);
		move(dir, &x, &y);
		eat(x,y,&len,sx,sy,&sflag);
		show (x,y,dir,len,sx,sy);
		_sleep(100);
	}
	return 0;
}