#define _CRT_SECURE_NO_WARNINGS
#include <tchar.h>

#include<iostream>
#include <conio.h>
#include< windows.h >


using namespace std;
const int space = 32;
const int zero = 48;
const int one = 49;
const int four = 52;
const int eight = 56;
const int nine = 57;
const int enter = 13;
const int minus = 45;
const int up_border = 0;
const int down_border = 6;
const int esc = 27;
const int tab = 9;
const int arrow = 224;
const int up = 72;
const int down = 80;
const int righty = 77;
const int lefty = 75;
int field[12][12];
int game_field[12][12];
int n(3), m(3);
int max_food ;
int max_food1 = 4;
int food = 0;
int max_wall;
int wall = 0;
int head = 0;
int score = 0;
int money = 0;
int wall_eater=0;
int Xsnake[121];
int Ysnake[121];
int X;
int Y;
int startfood;
byte per_body_color = 7;
byte per_head_color = 7;
byte tim_body_color = 7;
byte tim_head_color = 7;

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
void color_menu(int j)
{
	system("CLS");
	if (j == 1)
	{
		printf("--> [1]Blue                                                                 You have %d$\n");
	}
	else
	{
		printf("    [1]Blue                                                                 You have %d$\n");
	}
	if (j == 2)
	{
		printf("--> [2]Green\n");
	}
	else
	{
		printf("    [2]Green\n");
	}
	if (j == 3)
	{
		printf("--> [3]Turquoise\n");
	}
	else
	{
		printf("    [3]Turquoise\n");
	}
	if (j == 4)
	{
		printf("--> [4]Red\n");
	}
	else
	{
		printf("    [4]Red\n");
	}
	if (j == 5)
	{
		printf("--> [5]Purple\n");
	}
	else
	{
		printf("    [5]Purple\n");
	}
	if (j == 6)
	{
		printf("--> [6]Yellow\n");
	}
	else
	{
		printf("    [6]Yellow\n");
	}
	if (j == 7)
	{
		printf("--> [7]White lunar\n");
	}
	else
	{
		printf("    [7]White lunar\n");
	}
	if (j == 8)
	{
		printf("--> [8]Grey\n");
	}
	else
	{
		printf("    [8]Grey\n");
	}
	if (j == 9)
	{
		printf("--> [Esc]Exit\n");
	}
	else
	{
		printf("    [Esc]Exit\n");
	}

	color(tim_body_color);
	printf("\n%c", 142);
	printf("%c", 142);
	printf("%c", 142);
	printf("%c", 142);
	color(tim_head_color);
	printf("%c\n", 2);
	color(7);
	printf("Press ENTER to buy");
}
void head_red()
{
	int i = 1;
	tim_body_color = per_body_color;
	color_menu(i);
	for (int o = 0; o == 0;)//______________Механика выбора______________________________________________________________________________________
	{
		int h = _getch();
		if ((h >= one) && (h <= eight)) { i = h - zero;  }
		if (h == esc) { i = 9; h = enter; }
		if (h == arrow) //Стрелка
		{
			h = _getch();
			if (h == up) { i = i - 1; };
			if (h == down) { i = i + 1; };
		}
		if (i == 0) { i = 9; };//Перескок
		if (i == 10) { i = 1; };
		if ((i >= 1) && (i <= 8)) { tim_head_color = i;  }
		if (h == enter)
		{
			if ((i >= 1) && (i <= 8)) { per_head_color = i; money = money - 5; o = 1; }
			if (i == 9) { o = 1; }
		}
		color_menu(i);

	}
}
void body_red()
{
	int i = 1;
	tim_head_color = per_head_color;
	
	color_menu(i);
	for (int o = 0; o == 0;)//______________Механика выбора______________________________________________________________________________________
	{
		int h = _getch();
		if ((h >= one) && (h <= eight)) { i = h - zero; }
		if (h == esc) { i = 9; h = enter; }
		if (h == arrow) //Стрелка
		{
			h = _getch();
			if (h == up) { i = i - 1; };
			if (h == down) { i = i + 1; };
		}
		if (i == 0) { i = 9; };//Перескок
		if (i == 10) { i = 1; };
		if ((i >= 1) && (i <= 8)) { tim_body_color = i; }
		if (h == enter)
		{
			if ((i >= 1) && (i <= 8)) { per_body_color = i; money = money - 5; o = 1; }
			if (i == 9) { o = 1; }
		}
		color_menu(i);

	}

}
int beauty(int g)
{
	char c;
	switch (g)
	{
	case 0: c = ' '; break;
	case 1: c = 219; break;
	case 2: c = 3; break;
	case 3: c = 2; break;
	case 4:c = 142; break;
	}
	return(c);
}
void shop_menu(int j)
{
	system("CLS");
	if (j == 1)
	{
		printf("--> [1] (10 dollar)Buy one more apple                                                   You have %d$\n",money);
	}
	else
	{
		printf("    [1] (10 dollar)Buy one more apple                                                   You have %d$\n", money);
	}
	if (j == 2)
	{
		printf("--> [2] (15 dollar)Buy one possibility to eat a wall\n");
	}
	else
	{
		printf("    [2] (15 dollar)Buy one possibility to eat a wall\n");
	}
	if (j == 3)
	{
		printf("--> [3] (5 dollar)Change head color\n");
	}
	else
	{
		printf("    [3] (5 dollar)Change head color\n");
	}
	if (j == 4)
	{
		printf("--> [4] (5 dollar)Change body color\n");
	}
	else
	{
		printf("    [4] (5 dollar)Change body color\n");
	}
	if (j == 5)
	{
		printf("--> [Esc] (0 dollar)Exit\n");
	}
	else
	{
		printf("    [Esc] (0 dollar)Exit\n");
	}
}
void shop()
{
	int i=1;
	for (int o = 0; o == 0;)//______________Механика выбора______________________________________________________________________________________
	{
		if (i == up_border) { i = 5; };//Перескок
		if (i == down_border) { i = 1; };
		shop_menu(i);
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
			if (i == 1) { if (money >= 10) { if (max_food1 < m * n) { max_food1++; money = money - 10; } else { printf("Enouth food for this size of field "); waiting(); } } else { printf("Not enouth money "); waiting(); } }
			if (i == 2) { if (money >= 15) { wall_eater++; money = money - 15; } else { printf("Not enouth money "); waiting();} }
			if (i == 3) { if (money >= 5) { head_red(); } else { printf("Not enouth money "); waiting();} }
			if (i == 4) { if (money >= 5) { body_red(); } else { printf("Not enouth money "); waiting();} }
			if (i == 5)  { o = 1; }
		}

	}
}
void new_food()
{
	srand(time(0));
	for (int j = 0; j != 1;)
	{

		for (int i = 0; i != 1;)
		{
			int x = ((rand()) % (n)) + 1;
			int y = ((rand()) % (m)) + 1;
			if (game_field[x][y] == 0) { i = 1; game_field[x][y] = 2; }
		}
		food = food + 1;
		if (food == max_food) { j = 1; }
	}
}
void map_clear()
{
	int jm, jn;
	for (jm = 1; jm <= m; jm = jm + 1)
	{
		for (jn = 1; jn <= n; jn = jn + 1)
		{
			if ((game_field[jn][jm] == 3) || (game_field[jn][jm] == 4)) { game_field[jn][jm] = 0; }
		}
		
	}
	for (jm = 1; jm <= m; jm = jm + 1)
	{
		for (jn = 1; jn <= n; jn = jn + 1)
		{
			if ((jn == Xsnake[0]) && (jm == Ysnake[0])) { game_field[jn][jm] = 3; }
			for (int i = 1; i <= score ; i = i + 1)
			{
				if ((jn == Xsnake[i]) && (jm == Ysnake[i])) { game_field[jn][jm] = 4; }
			}
		}

	}
	game_field[Xsnake[0]][Ysnake[0]] = 3;
}
void dvig(int a, int b)
{
	for (int i = score; i >= 1; i = i - 1)
	{
		Ysnake[i] = Ysnake[i - 1];
		Xsnake[i] = Xsnake[i - 1];
	}
	Ysnake[0] = b;
	Xsnake[0] = a;
	
}
void rost(int a, int b)
{
	Xsnake[score + 1] = Xsnake[score]; Ysnake[score + 1] = Ysnake[score];
	for (int i = score; i >= 1; i = i - 1)
	{
		Ysnake[i] = Ysnake[i - 1];
		Xsnake[i] = Xsnake[i - 1];
	}
	Ysnake[0] = b;
	Xsnake[0] = a;

}
void menu(int j)
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
		printf("--> [2]Shop\n");
	}
	else
	{
		printf("    [2]Shop\n");
	}
	if (j == 3)
	{
		printf("--> [3]Field construction\n");
	}
	else
	{
		printf("    [3]Field construction\n");
	}
	if (j == 4)
	{
		printf("--> [4]Credits\n");
	}
	else
	{
		printf("    [4]Credits\n");
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
void construct_menu(int j)
{
	system("CLS");
	if (j == 1)
	{
		printf("--> [1]Wall location\n");
	}
	else
	{
		printf("    [1]Wall location\n");
	}
	if (j == 2)
	{
		printf("--> [2]Food location\n");
	}
	else
	{
		printf("    [2]Food location\n");
	}
	if (j == 3)
	{
		printf("--> [3]Head location\n");
	}
	else
	{
		printf("    [3]Head location\n");
	}
	if (j == 4)
	{
		printf("--> [4]Delete all objects\n");
	}
	else
	{
		printf("    [4]Delete all objects\n");
	}
	if (j == 5)
	{
		printf("--> [Esc]Ready\n");
	}
	else
	{
		printf("    [Esc]Ready\n");
	}
}
void credits() 
{ system("CLS"); 
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
void map1(int x)
{
	system("CLS");
	int jm, jn; 
	for (jm = 1; jm <= m; jm = jm + 1)
	{
		for (jn = 1; jn <= n; jn = jn + 1)
		{	
			printf("%d", field[jn][jm]); 
			
		}
		printf("\n");
	}
	printf("\nUse Enter to put the object and Esc to exit and Backspace to delete the object");
	
}
void map2(int x)
{
	system("CLS");
	int jm, jn;
	printf("%c", 201);
	for (jn = 2; jn <= n+1; jn = jn + 1) { printf("%c", 205); }
	printf("%c\n", 187);
	for (jm = 1; jm <= m; jm = jm + 1)
	{
		printf("%c", 186);
		for (jn = 1; jn <= n; jn = jn + 1)
		{	
			if (game_field[jn][jm] == 3) { color(per_head_color); }
			if (game_field[jn][jm] == 4) { color(per_body_color); }
			printf("%c", beauty(game_field[jn][jm]));
			color(7);
		}
		printf("%c\n", 186);
	}
	printf("%c", 200);
	for (jn = 2; jn <= n+1 ; jn = jn + 1) { printf("%c", 205); }
	printf("%c\n", 188);
	printf("Tab - shop\nEsc - exit");
	
}
void field_red(int object)
{
	int x = 1;
	int y = 1;
	int bord; int o;
	o = 0;
	int prev = field[1][1];
	field[1][1] = object;
	map1(1);
	for ( ; o ==0;)//______________Механика выбора______________________________________________________________________________________
	{
		int h = _getch();
		
		if (h == esc) { field[x][y] = prev; o = 1; }
		if (h == arrow) //Стрелка
		{
			field[x][y] = prev;
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
		}
		if ((h == enter) && (prev != object))
		{ 
			if (prev == 1) { wall = wall - 1; }
			if (prev == 2) { food = food - 1; }
			if (prev == 3) { head = 0; }
			prev = object; 
			 
			if (object == 1) { wall = wall+1; }
			if (object == 2) { food = food+1; }
			if (object == 3) { head = 1; Xsnake[0] = x; Ysnake[0] = y; X = x; Y = y; }
		}
		if (h == 8) 
		{
			if (prev == 1) { wall = wall - 1; }
			if (prev == 2) { food = food - 1; }
			if (prev == 3) { head = 0; }
			prev = 0;
			
		}
		map1(1);
		if ((object == 1) && (wall == n * m - max_food1 - 1)) { break; }
		if ((object == 2) && (food == max_food1)) { break; }
		if ((object == 3) && (head == 1)) { break; }
		startfood = food;


	}
}
void construct()
{	
	int jn,jm,h,j;
	
	for (int flag = 0; flag != 1;)
	{	
		system("CLS");
		printf("Enter the size of the field n*m[3 to 11]\n");
		printf("n: ");
		for (h = 0; (h < zero) || (h > nine);) { h = _getch(); }
		n = h - zero; printf("%d", n);
		if (n == 1) { for (h = 0; ((h < zero) || (h > nine)) && (h != enter);) { h = _getch(); } }
		if ((h >= zero) && (h <= one)) { n = 10 * n + h - zero; printf("%d", h - zero);
		}
		if ((n > 2) && (n < 12)) { flag = 1; }
	}
	printf("\nm:");
	for (int flag = 0; flag != 1;)
	{	
		system("CLS");
		printf("m:");
		for (h = 0; (h < zero) || (h > nine);) { h = _getch(); }
		m = h - zero; printf("%d", m);
		if (m == 1) { for (h = 0; ((h < zero) || (h > one)) && (h != enter);) { h = _getch(); } }
		if ((h >= zero) && (h <= one)) { m = 10 * m + h - zero; printf("%d", h - zero);
		}
		if ((m > 2) && (m < 12)) { flag = 1; }
	}

	system("CLS");

	max_wall = m * n - 5;
	wall = 0;
	new_map(n, m);
	int jo=1;
	food = 0;
	head = 0;
	for (int o = 0; o == 0;)//______________Механика выбора______________________________________________________________________________________
	{
		if (jo == up_border) { jo = 5; };//Перескок
		if (jo == down_border) { jo = 1; };
		construct_menu(jo);
		int h = _getch();
		if ((h >= one) && (h <= four)) { jo = h - zero; h = enter; }
		if (h == enter) {  h = enter; }
		if (h == esc) { h = enter; jo = 5; }
		if (h == arrow) //Стрелка
		{
			h = _getch();
			if (h == up) { jo = jo - 1; };
			if (h == down) { jo = jo + 1; };
		}
		if (h == enter)
		{
			if (jo == 1) { if (wall <n*m-5) { field_red(1); } else { printf("\nNo more walls on the field\n"); waiting();} }
			if (jo == 2) { if (food <max_food1) { field_red(2); } else { printf("\nNo more food on the field\n"); waiting();} }
			if (jo == 3) { if (head ==0) { field_red(3); } else { printf("\nYou can add only one snake's head\n"); waiting();} }
			if (jo == 4) {
				new_map(n, m); wall = 0; head = 0; food = 0; printf("\nSuccessfully\n"); waiting();}
			if (jo == 5) { o = 1; }
		}

	}
}
void game()
{

	int h;
	Xsnake[0] = X;
	Ysnake[0] = Y;
	food = 0;
	int x = Xsnake[0];
	int y = Ysnake[0];
	max_food = max_food1;
	food = startfood;
	if (max_food1 > n * m - 1) { max_food = n * m - 1; }
	int jm, jn;
	for (int u = 1; u <= 120; u++) { Xsnake[u] = 0; }
	for (int u = 1; u <= 120; u++) { Ysnake[u] = 0; }
	for (jm = 1; jm <= m; jm = jm + 1)
	{
		for (jn = 1; jn <= n; jn = jn + 1)
		{
			game_field[jn][jm]=field[jn][jm] ;
		}
	}
	x = X;
	y = Y;
	if (food < max_food) { new_food(); }
	for ( score=0; score+1+wall < n * m;)
	{
		map2(1);
		h = _getch();
		if (h == arrow) //Стрелка
		{
			if (food < max_food) { new_food(); }
			h = _getch();
			if (h == up) { y = y - 1; };
			if (h == down) { y = y + 1; };
			if (h == lefty) { x = x - 1; };
			if (h == righty) { x = x + 1; };
			if (x <= 0) { x = n; }
			if (y <= 0) { y = m; }
			if (x > n) { x = 1; }
			if (y > m) { y = 1; }
			if (game_field[x][y] == 0) { dvig(x,y); map_clear();}
			if (game_field[x][y] == 2) { rost(x,y); score++; money++; map_clear(); food--; }
			if (game_field[x][y] == 1)
			{
				if (wall_eater > 0) { wall_eater--; dvig(x, y); map_clear(); wall--; }
				else {   break;}
			}
			if (game_field[x][y] == 4) { break;  }
			if (score  + max_food + wall >= n * m) { /*score = n * m - wall;*/  max_food--; }

		}
		if (h == tab) { shop(); if (max_food1 <= n * m - score - 1) { max_food = max_food1; } }
		if (h == esc) { break; }
	}
	map2(1);
	printf("\nGame over!\n");
	printf("\nYou get %d Scores!\n", score);
	waiting();
}

int main()
{
	for (int i = 1; i < 256; i++)
		printf("%d - %c\n", i, i);
	waiting();
	int i = 1, a_kak(0);
	for (int o = 0; o == 0;)//______________Механика выбора______________________________________________________________________________________
	{
		if (i == up_border) { i = 5; };//Перескок
		if (i == down_border) { i = 1; };
		menu(i);
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
			if (i == 1) {
				if (a_kak == 1) { if (head == 1) { game(); } else { printf("\nPut snake`s head"); waiting(); } }
				else { printf("\nConstruct the field\n"); waiting(); }
			}
			if (i == 2) { shop(); }
			if (i == 3) { construct(); a_kak = 1; }
			if (i == 4) { credits(); }
			if (i == 5) { o = 1; }
		}

	}
}