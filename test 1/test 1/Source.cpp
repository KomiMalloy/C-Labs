#include<iostream>
#include <conio.h>
#include< cstdio >
#include <tchar.h>
#include < windows.h >#include "windows.h"


using namespace std;
void gotoxy(int x, int y)
{
	COORD coordinate;
	coordinate.X = x;
	coordinate.Y = y + 1;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinate);
}



int main()
{
	for (int i = 1; i < 256; i++)
	{
		printf("%d %c\n", i,i);
	}
	int h = 0;
	for (;h!=13;) {
		 h = _getch();
		printf("\n%c  %d", h,h);
	}

	system("CLS");
	for (int i = 0; i <= 200; i++) { printf("%d", 8); }
	int a = _getch() - 48;
	int b = _getch() - 48;
	gotoxy(a, b);
	printf("%d", 0);

	system("pause");
}