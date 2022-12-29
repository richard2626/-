// Alphar 20211217
#include <windows.h> //�O�oinclude��
#include <conio.h>
#include <stdio.h>

int main()
{
	printf("Do ");
	Beep(523, 500); // 523 hertz (C5) for 500 milliseconds.
	_sleep(100);

	printf("Re ");
	Beep(587, 500);

	printf("Me ");
	Beep(659, 500);

	printf("Fa ");
	Beep(698, 500);

	printf("So ");
	Beep(784, 500);

	getch();
	return 0;
}
