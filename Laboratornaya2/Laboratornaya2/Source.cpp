#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include <conio.h>
#include< windows.h >
using namespace std;


int vvodA(int x)
{
	const int zero = 48;
	const int nine = 57;
	const
		int enter = 13;
	const int minus = 45;
	int c = 0; int s; int p = 0; int zn = 0; int nul = 0;
	for (; zn == 0;)
	{
		system("CLS");
		printf("Введите число a (0<a<13)\n");
		p = 0; c = 0;
		for (; p == 0;) { s = _getch(); if ((s >= zero) && (s <= nine)) { c = c * 10 + s - zero;  printf("%d", s - zero); } if (s == enter)  { p = 1;  } }
		if ((c > 0) && (c < 13)) { zn = 1; }
	}
	return(c);
}
int vvodB(int x)
{
	const int zero = 48;
	const int nine = 57;
	const
		int enter = 13;
	const int minus = 45;
	int c = 0; int s; int p = 0; int zn = 0; int nul = 0;
	for (; zn == 0;)
	{
		system("CLS");
		printf("Введите число b (0<b<13)\n");
		p = 0; c = 0;
		for (; p == 0;) { s = _getch(); if ((s >= zero) && (s <= nine)) { c = c * 10 + s - zero;  printf("%d", s - zero); } if (s == enter) { p = 1; } }
		if ((c > 0) && (c < 13)) { zn = 1; }
	}
	return(c);
}
void Che()
{
	const int enter = 13;
	int prob = 0;
	system("CLS");
	double tim;
	tim = time(0);
	while (time(0) - tim != 2) {}
	printf("Чё?\n");
	while (time(0) - tim != 4) {}
	printf("А числа то какие?\n");
	while (time(0) - tim != 6) {}
	printf("Я калькулятор, а не экстрасенс\n");
	while (time(0) - tim != 8) {}
	printf("Иди введи числа, a потом поговорим\n");
	while (time(0) - tim != 10) {}
	printf("Нажмите enter для продолжения");
	for (; prob != enter;) { prob = _getch(); };
}
void inst()
{
	const int enter = 13;
	int prob = 0;
	system("CLS");
	printf("Для перемещения курсора используются стрелочки \"Вверх\" и \"Вниз\"\n");
	printf("Для подтверждения выбора используется клавиша \"Enter\"\n");
	printf("Для перехода в главное меню после завершения операции используется Enter\n\n");
	printf("Для продолжения нажмите enter");
	for (; prob != enter;) { prob = _getch(); };
}
void spin1(int x1, int y1)
{
	int m[13][13];
	int x = 1;
	int y = 1;
	int k = 0;
	int start = 1;
	int sx = x1;
	int sy = y1;
	int stop = x1 * y1;
	for (int o = 0; o == 0;)
	{
		for (x = x1 ; x > start - 1; x = x - 1)
		{
			k++; y = start;
			m[x][y] = k;
			if (k == stop) { break; }

		}
		if (k == stop) { break; }
		for (y = start + 1; y < y1 + 1; y++)
		{
			k++; x = start;
			m[x][y] = k;
			if (k == stop) { break; }

		}
		if (k == stop) { break; }
		for (x = start+1; x < x1 + 1; x++)
		{
			k++; y = y1;
			m[x][y] = k;
			if (k == stop) { break; }
		}
		if (k == stop) { break; }
		for (y = y1 - 1; y > start; y = y - 1)
		{
			k++; x = x1;
			m[x][y] = k;
			if (k == stop) { break; }
		}
		if (k == stop) { break; }
		start = start + 1;
		x1 = x1 - 1;
		y1 = y1 - 1;

	}
	for (int i = 1; i != sy + 1; i++)
	{
		for (int j = 1; j != sx + 1; j++)
		{
			printf("%4d", m[j][i]);
		}
		printf("\n");
	}

}
void spin2(int x1, int y1)
{
	int m[13][13];
	int x = 1;
	int y = 1;
	int k = 0;
	int start = 1;
	int sx = x1;
	int sy = y1;
	int stop = x1 * y1;
	for (int o = 0; o ==0;)
	{
		for (x = start; x < x1+1; x++)
		{
			k++; y = start;
			m[x][y] = k;
			if (k == stop) { break; }

		}
		if (k == stop) { break; }
		for (y = start+1; y < y1 + 1;y++)
		{
			k++; x = x1;
			m[x][y] = k;
			if (k == stop) { break; }

		}
		if (k == stop) { break; }
		for (x = x1-1; x > start - 1; x = x - 1)
		{
			k++; y = y1;
			m[x][y] = k;
			if (k == stop) { break; }
		}
		if (k == stop) { break; }
		for (y = y1-1; y > start ; y = y - 1)
		{
			k++; x = start;
			m[x][y] = k;
			if (k == stop) { break; }
		}
		if (k == stop) { break; }
		start = start + 1;
		x1 = x1 - 1;
		y1 = y1 - 1;

	}
	for (int i = 1; i != sy+1; i++)
	{
		for (int j = 1; j != sx+1; j++)
		{
			printf("%4d", m[j][i]);
		}
		printf("\n");
	}

}
void spin3(int x1, int y1) 
{
	int m[13][13];
	int x = 1;
	int y = 1;
	int k = x1*y1+1;
	int start = 1;
	int sx = x1;
	int sy = y1;
	int stop = 1;
	for (int o = 0; o == 0;)
	{
		for (x = x1; x > start - 1; x = x - 1)
		{
			k--; y = start;
			m[x][y] = k;
			if (k == stop) { break; }

		}
		if (k == stop) { break; }
		for (y = start + 1; y < y1 + 1; y++)
		{
			k--; x = start;
			m[x][y] = k;
			if (k == stop) { break; }

		}
		if (k == stop) { break; }
		for (x = start + 1; x < x1 + 1; x++)
		{
			k--; y = y1;
			m[x][y] = k;
			if (k == stop) { break; }
		}
		if (k == stop) { break; }
		for (y = y1 - 1; y > start; y = y - 1)
		{
			k--; x = x1;
			m[x][y] = k;
			if (k == stop) { break; }
		}
		if (k == stop) { break; }
		start = start + 1;
		x1 = x1 - 1;
		y1 = y1 - 1;

	}
	for (int i = 1; i != sy + 1; i++)
	{
		for (int j = 1; j != sx + 1; j++)
		{
			printf("%4d", m[j][i]);
		}
		printf("\n");
	}

}
void spin4(int x1, int y1)
{
	int m[13][13];
	int x = 1;
	int y = 1;
	int k = x1*y1+1;
	int start = 1;
	int sx = x1;
	int sy = y1;
	int stop = 1;
	for (int o = 0; o == 0;)
	{
		for (x = start; x < x1 + 1; x++)
		{
			k--; y = start;
			m[x][y] = k;
			if (k == stop) { break; }

		}
		if (k == stop) { break; }
		for (y = start + 1; y < y1 + 1; y++)
		{
			k--; x = x1;
			m[x][y] = k;
			if (k == stop) { break; }

		}
		if (k == stop) { break; }
		for (x = x1 - 1; x > start - 1; x = x - 1)
		{
			k--; y = y1;
			m[x][y] = k;
			if (k == stop) { break; }
		}
		if (k == stop) { break; }
		for (y = y1 - 1; y > start; y = y - 1)
		{
			k--; x = start;
			m[x][y] = k;
			if (k == stop) { break; }
		}
		if (k == stop) { break; }
		start = start + 1;
		x1 = x1 - 1;
		y1 = y1 - 1;

	}
	for (int i = 1; i != sy + 1; i++)
	{
		for (int j = 1; j != sx + 1; j++)
		{
			printf("%4d", m[j][i]);
		}
		printf("\n");
	}

}
//____________________________________________________________________________________________________________________________________________


void menu(int i, int j,int x, int y)//_____________________Меню______________________________________________________________________________________________________
{
	system("CLS");
	if (j == 1)
	{
		printf("--> [1]Спираль из переферии к центру, против часовой стрелки\n");
	}
	else
	{
		printf("    [1]Спираль из переферии к центру, против часовой стрелки\n");
	}
	if (j == 2)
	{
		printf("--> [2]Спираль из переферии к центру, по часовой стрелке\n");
	}
	else
	{
		printf("    [2]Спираль из переферии к центру, по часовой стрелке\n");
	}
	if (j == 3)
	{
		printf("--> [3]Спираль из центра к переферии, по часовой стрелке\n");
	}
	else
	{
		printf("    [3]Спираль из центра к переферии, по часовой стрелке\n");
	}
	if (j == 4)
	{
		printf("--> [4]Спираль из центра к переферии, против часовой стрелки\n");
	}
	else
	{
		printf("    [4]Спираль из центра к переферии, против часовой стрелки\n");
	}
	if (j == 5)
	{
		printf("--> [5]Ввод данных\n");
	}
	else
	{
		printf("    [5]Ввод данных\n");
	}
	if (j == 6)
	{
		printf("--> [TAB]Инструкция\n");
	}
	else
	{
		printf("    [TAB]Инструкция\n");
	}
	if (j == 7)
	{
		printf("--> [ESC]Выход\n");
	}
	else
	{
		printf("    [ESC]Выход\n");
	}
	switch (i)
	{
	case 1: spin1(x,y);
		break;
	case 2: spin2(x,y);
		break;
	case 3: spin3(x,y);
		break;
		case 4: spin4(x,y);
	break;
	}



	

}//____________________________________________________________________________________________________________________________________________
int main()
{
	setlocale(LC_ALL, "Russian");
	inst();
	const int space = 32;
	const int zero = 48;
	const int one = 49;
	const int seven = 53;
	const int enter = 13;
	const int minus = 45;
	const int up_border = 0;
	const int down_border = 8;
	const int esc = 27;
	const int tab = 9;
	const int arrow = 224;
	const int up = 72;
	const int down = 80;
	int k = 1;
	int i = 1; int ap = 0; int bp = 0; int a = 0; int b = 0;
	a = vvodA(0);
	b = vvodB(0);
	for (int o = 0; o == 0;)//______________Механика выбора______________________________________________________________________________________
	{
		if (i == up_border) { i = 7; };//Перескок
		if (i == down_border) { i = 1; };
		if ((i > 0) && (i < 5)) { k = i; }
		menu(k,i,a,b);
		int h = _getch();
		if ((h >= one) && (h <= seven)) { i = h - zero; h = enter; }
		if (h == esc) { i = 7; h = enter; }
		if (h == tab) { i = 6; h = enter; }
		if (h == arrow) //Стрелка
		{
			h = _getch();
			if (h == up) { i = i - 1; };
			if (h == down) { i = i + 1; };
		}
		if (h == enter)
		{	
			if (i == 6) { inst(); }
			if (i == 7) { o = 1; }
			if (i == 5) { a = vvodA(0); b = vvodB(0); }
		}

	}
}

