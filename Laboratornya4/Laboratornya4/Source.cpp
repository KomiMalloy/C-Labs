#define _CRT_SECURE_NO_WARNINGS
#include <tchar.h>

#include<iostream>
#include <conio.h>
#include < windows.h >#include "windows.h"





using namespace std;
const int space = 32;
const int zero = 48;
const int one = 49;
const int three = 51;
const int four = 52;
const int eight = 56;
const int nine = 57;
const int enter = 13;
const int minus = 45;
const int up_border = 0;
const int down_border = 6;
const int esc = 27;
const int tab = 9;
const int backspace= 8;
const int arrow = 224;
const int up = 72;
const int down = 80;
const int righty = 77;
const int lefty = 75;
int field[116][24];
int game_field[116][24];
int wall = 0;
int n = 115;
int m = 23;
int speed;
byte per_wall_color = 7;
byte per_snow_color = 7;
byte tim_wall_color = 7;
byte tim_snow_color = 7;

void gotoxy(int x, int y) 
{ 
COORD coordinate;
coordinate.X = x;
coordinate.Y = y+1;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinate);
}
void hidecursor() 
{ 
HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
CONSOLE_CURSOR_INFO info;
info.dwSize = 100;
info.bVisible = FALSE;
SetConsoleCursorInfo(consoleHandle, &info);
}
void new_map(int x, int y)
{
	int jm, jn;
	for (jm = 1; jm <= y; jm = jm + 1)
	{
		for (jn = 1; jn <= x; jn = jn + 1)
		{
			field[jn][jm] = 0;
		}
	}
}
void waiting()
{
	printf("\nPress  Enter to continue\n");
	for (int h = 0; h != enter;) { h = _getch(); }
}
void color(int c)
{
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(handle, c);
}
char beauty(int g)
{
	char c;
	switch (g)
	{
	case 0: c = ' '; break;
	case 1: c = 219; break;
	case 2: c = 127; break;
	case 3: c = 42; break;
	}
	return(c);
}
void map1(int x)
{
	system("CLS");
	printf("Use Enter to put the object and Esc to exit and Backspace to delete the object\n");
	int jm, jn;
	for (jm = 1; jm <= m; jm = jm + 1)
	{
		for (jn = 1; jn <= n; jn = jn + 1)
		{
			printf("%d", field[jn][jm]);

		}
		printf("\n");
	}
	

}
void map2()
{
	system("CLS");
	int jm, jn;
	printf ("%c", 201);
	for (jn = 2; jn <= n +1; jn = jn + 1) { printf("%c", 205); }
	printf("%c\n", 187);
	for (jm = 0; jm <= m; jm = jm + 1)
	{
		printf("%c", 186);
		for (jn = 1; jn <= n; jn = jn + 1)
		{
			if (game_field[jn][jm] == 1) { color(per_wall_color); }
			if (game_field[jn][jm] == 2) { color(per_snow_color); }
			if (game_field[jn][jm] == 3) { color(per_snow_color); }
			printf("%c", beauty(game_field[jn][jm])); 
			color(7);
		}
		printf("%c\n", 186);
	}
	printf("%c", 200);
	for (jn = 2; jn <= n + 1; jn = jn + 1) { printf("%c", 205); }
	printf("%c", 188);
	

}
void field_red(int object)
{
	int x = 1;
	int y = 1;
	int bord; int o;
	o = 0;
	int prev = field[1][1];
	field[1][1] = 1;
	map1(1);
	for (; o == 0;)//______________Механика выбора______________________________________________________________________________________
	{
		int h = _getch();

		if (h == esc) { field[x][y] = prev; o = 1; }
		if (h == arrow) //Стрелка
		{
			field[x][y] = prev;

			gotoxy(x - 1, y-1);
			printf("%d",prev);
			gotoxy(1, 25);
			h = _getch();
			if (h == up) { y = y - 1; };
			if (h == down) { y = y + 1; };
			if (h == lefty) { x = x - 1; };
			if (h == righty) { x = x + 1; };
			if (y == 0) { y = m; };
			if (y == m + 1) { y = 1; };
			if (x == 0) { x = n; };
			if (x == n + 1) { x = 1; };
			prev = field[x][y];
			field[x][y] = object;
			gotoxy(x - 1, y-1);
			printf("1");
			gotoxy(1, 25);
		}
		if ((h == enter) && (prev != object))
		{
			if (prev == 1) { wall = wall - 1; }
			
			prev = object;

			if (object == 1) { wall = wall + 1; }
			
		}
		if (h == 8)
		{
			if (prev == 1) { wall = wall - 1; }
			
			prev = 0;
			gotoxy(x - 1, y-1);
			printf("0");
			gotoxy(1, 25);
		}
		
		
		


	}
}
void construct()
{
	int jn, jm, h, j;

	system("CLS");

	wall = 0;
	new_map(n, m);
	int jo = 1;
	field_red(1);
	
}
void snow_menu(int j)
{
	system("CLS");
	if (j == 1)
	{
		printf("--> [1]Start game\n");
	}
	else
	{
		printf("    [1]Start game\n");
	}
	if (j == 2)
	{
		printf("--> [2]Field construction\n");
	}
	else
	{
		printf("    [2]Field construction\n");
	}
	if (j == 3)
	{
		printf("--> [Esc]Exit\n");
	}
	else
	{
		printf("    [Esc]Exit\n");
	}
	

}
void fall()
{
	int jm, jn;
	for (jm = m-1; jm >= 1; jm = jm - 1)
	{
		for (jn = 1; jn <= n; jn = jn + 1)
		{
			if ((game_field[jn][jm + 1] == 0) && (game_field[jn][jm] == 3)) { game_field[jn][jm] = 0; game_field[jn][jm + 1] = 3; gotoxy(jn, jm); printf("%c", beauty(0)); gotoxy(jn, jm + 1); printf("%c", beauty(3)); continue; }
			if (jn == 1) { if ((game_field[jn + 1][jm + 1] == 0) && (game_field[jn][jm] == 3) && (game_field[jn + 1][jm] == 0)) { game_field[jn][jm] = 0; game_field[jn + 1][jm + 1] = 3; gotoxy(jn, jm); printf("%c", beauty(0)); gotoxy(jn+1, jm + 1); printf("%c", beauty(3)); } continue; }
			if (jn == n) { if ((game_field[jn - 1][jm + 1] == 0) && (game_field[jn][jm] == 3) && (game_field[jn - 1][jm] == 0)) { game_field[jn][jm] = 0; game_field[jn - 1][jm + 1] = 3; gotoxy(jn, jm); printf("%c", beauty(0)); gotoxy(jn-1, jm + 1); printf("%c", beauty(3));} continue; }
			if ((game_field[jn -1 ][jm + 1] == 0) && (game_field[jn][jm] == 3) && (game_field[jn - 1][jm] == 0)) { game_field[jn][jm] = 0; game_field[jn - 1][jm + 1] = 3; gotoxy(jn, jm); printf("%c", beauty(0)); gotoxy(jn - 1, jm + 1); printf("%c", beauty(3)); continue; }
			if ((game_field[jn + 1][jm + 1] == 0) && (game_field[jn][jm] == 3) && (game_field[jn + 1][jm] == 0)) { game_field[jn][jm] = 0; game_field[jn + 1][jm + 1] = 3; gotoxy(jn, jm); printf("%c", beauty(0)); gotoxy(jn + 1, jm + 1); printf("%c", beauty(3)); continue; }
		
		}
	}
}
void snow_speed_menu(int j)
{
	system("CLS");
	printf("Choose game speed\n");
	if (j == 1)
	{
		printf("--> [1]fast\n");
	}
	else
	{
		printf("    [1]fast\n");
	}
	if (j == 2)
	{
		printf("--> [2]very fast\n");
	}
	else
	{
		printf("    [2]very fast\n");
	}
	if (j == 3)
	{
		printf("--> [3]very very fast\n");
	}
	else
	{
		printf("    [3]very very fast\n");
	}
	if (j == 4)
	{
		printf("--> [4]very very very fast\n");
	}
	else
	{
		printf("    [4]very very very fast\n");
	}
	if (j == 5)
	{
		printf("--> [Esc]Exit\n");
	}
	else
	{
		printf("    [Esc]Exit\n");
	}

}
void credits()
{
	system("CLS");
	printf("Producer - Izieiurov Stepan\n");
	printf("Publisher - Izieiurov Stepan\n");
	printf("Game designer - Izieiurov Stepan\n");
	printf("Painter - Izieiurov Stepan\n");
	printf("Programmer - Izieiurov Stepan\n");
	printf("Game level designer - Izieiurov Stepan\n");
	printf("Alpha Tester - Izieiurov Stepan\n");
	printf("Beta Tester - Garik Mkrtchan\n");
	printf("Beta Tester - Alexey Grechishnikov\n");
	waiting();
}
void snow_game()
{
	int i = 1;
	for (int o = 0; o == 0;)//______________Механика выбора______________________________________________________________________________________
	{
		if (i == up_border) { i = 5; };//Перескок
		if (i == down_border) { i = 1; };
		snow_speed_menu(i);
		int h = _getch();
		if ((h >= one) && (h <= four)) { i = h - zero; h = enter; }
		if (h == esc) { i = 5; h = enter; }
		if (h == arrow) //Стрелка
		{
			h = _getch();
			if (h == up) { i = i - 1; };
			if (h == down) { i = i + 1; };
		}
		if (h == enter)
		{
			if (i == 1) { o = 1; speed = 175; }
			if (i == 2) { o = 1; speed = 125; }
			if (i == 3) { o = 1; speed = 75; }
			if (i == 4) { o = 1; speed = 25;  }
			if (i == 5) { o = 1; }
		}

	}
	int backet = 1;
	int jm, jn;
	for (jm = 1; jm <= m; jm = jm + 1)
	{
		for (jn = 1; jn <= n; jn = jn + 1)
		{
			game_field[jn][jm] = field[jn][jm];
		}
	}
	map2();
	gotoxy(backet, 0); printf("%c", beauty(2));
	for (int o = 0; o == 0;)
	{
		gotoxy(1, 25);
		Sleep(speed);
		
		 fall(); 
		 gotoxy(1, 25);
		if (_kbhit() != 0)
		{
			int h = _getch();
			if (h == esc) { o = 1; }
			if (h == tab) { /*shop();*/ }
			if (h == backspace) 
			{
				for (int j = 1; j <= n; j++)
				{
					if (game_field[j][m] == 3) { game_field[j][m] = 0; }
				}
				for (int j = 1; j <= n; j++)
				{
					if (game_field[j][m - 1] == 3) { game_field[j][m - 1] = 0;  }
				}
				map2();
			}
			if ((h == space) && (game_field[backet][1] == 0)) { game_field[backet][1] = 3; gotoxy(backet, 1); printf("%c", beauty(3)); }
			if (h == arrow)
			{
				h = _getch();
				if ((h == up) && (speed > 25)) { speed = speed - 50; }
				if ((h == down) && (speed < 175)) { speed = speed + 50; }
				if ((h == righty)&&(backet<n)) { game_field[backet][0] = 0; gotoxy(backet, 0); printf("%c", beauty(0));  backet++; game_field[backet][0] = 2; gotoxy(backet, 0); printf("%c", beauty(2));}
				if (h == lefty && (backet > 1)) { game_field[backet][0] = 0; gotoxy(backet, 0); printf("%c", beauty(0)); backet--; game_field[backet][0] = 2; gotoxy(backet, 0); printf("%c", beauty(2));}

				
			}
		}

		for (int j=1;j<=n;j++)
		{
			if (game_field[j][1] == 3) { break; }
		}

		
	}
	game_field[backet][0] = 0;
	

}

int main()
{
	hidecursor();
	int i = 1;
	for (int o = 0; o == 0;)//______________Механика выбора______________________________________________________________________________________
	{
		if (i == up_border) { i = 3; };//Перескок
		if (i == down_border) { i = 1; };
		snow_menu(i);
		int h = _getch();
		if ((h >= one) && (h <= three)) { i = h - zero; h = enter; }
		if (h == esc) { i = 3; h = enter; }
		if (h == arrow) //Стрелка
		{
			h = _getch();
			if (h == up) { i = i - 1; };
			if (h == down) { i = i + 1; };
		}
		if (h == enter)
		{
			if (i == 1) { snow_game(); }
			if (i == 2) { construct(); }
			if (i == 3) { o = 1; }
		}

	}
}