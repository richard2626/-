// Alphar 20211217
#include <iostream>
#include <windows.h> // for PlaySound()
#include <conio.h>

//#define SND_FILENAME 0x20000
//#define SND_LOOP 8
//#define SND_ASYNC 1

int main()
{
	getch();
	PlaySound( "haha.wav", NULL, SND_FILENAME|SND_LOOP|SND_ASYNC);	
	getch();

	PlaySound( NULL, NULL, SND_FILENAME|SND_LOOP|SND_ASYNC);
	getch();

	return 0;
}
