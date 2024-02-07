#define _CRT_SECURE_NO_WARNINGS
#include <tchar.h>

#include<iostream>
#include <conio.h>
#include< windows.h >

using namespace std;
const byte space = 32;
const byte zero = 48;
const byte one = 49;
const byte four = 52;
const byte six = 54;
const byte eight = 56;
const byte nine = 57;
const byte enter = 13;
const byte minus = 45;
const byte up_border = 0;
const byte down_border = 8;
const byte esc = 27;
const byte tab = 9;
const byte arrow = 224;
const byte up = 72;
const byte down = 80;
char strA[21];
char strB[11];
byte LenghtA;
byte LenghtB;

byte StrLen(char strAq[])
{
	int null;
	for (int i = 0; i <= 20; i++)
	{
		if (strAq[i] == 0) { null = i; break; }
	}
	return(null);
}
void StrCpy(char* strAq, char strBq[])
{
	for (int i = 0; i <= 10; i++)
	{
		*strAq = strBq[i];
		strAq++;
	}
	
}
void StrCat(char* strAq, char strBq[])
{
	int LenA = StrLen(strAq);
	int LenB = StrLen(strBq);
	if ((LenA + LenB) <= 20)
	{
		strAq = strAq + LenA;
		for (int i = 0; i <= LenB; i++)
		{

			*strAq = strB[i];
			strAq++;
			

		}
	}
	else { printf("Строка B не поместится в строку A\n"); system("pause"); }
}
bool StrCmp(char strAq[], char strBq[])
{
	int null = 1;
	for (int i = 0; i <= 10; i++)
	{
		if (strAq[i] != strBq[i]) { null = 0; break; }
	}
	return(null);
}

void vvodA()
{
	for (int i = 0; i <= 20; i++)
	{
		strA[i] = 0;
	}
	system("CLS");
	printf("Введите строку 1\n");
	char sim;
	for (int i = 0; i <= 9; i++)
	{
		sim = _getch();
		if ((sim >= 32) && (sim <= 126)) { printf("%c", sim);  strA[i] = sim; strA[i + 1] = 0; }
		if (sim == enter) { i = 11; }
	}

}
void vvodB()
{	
	for (int i = 0; i <= 10; i++)
	{
		strB[i] = 0;
	}
	system("CLS");
	printf("Введите строку 2\n");
	char sim;
	for (int i = 0; i <= 9; i++)
	{
		sim = _getch();
		if ((sim >= 32) && (sim <= 126)) { printf("%c", sim);  strB[i] = sim; strB[i + 1] = 0; }
		if (sim == enter) { i = 11; }
	}

}

void menu(int j)//_____________________Меню______________________________________________________________________________________________________
{
	system("CLS");
	if (j == 1)
	{
		printf("--> [1]Длина\n"); 
	}
	else
	{
		printf("    [1]Длина\n"); 
	}
	if (j == 2)
	{
		printf("--> [2]Копирование\n");
	}
	else
	{
		printf("    [2]Копирование\n"); 
	}
	if (j == 3)
	{
		printf("--> [3]Сложение \n");
	}
	else
	{
		printf("    [3]Сложение\n");
	}
	if (j == 4)
	{
		printf("--> [4]Сравнение\n");
	}
	else
	{
		printf("    [4]Сравнение\n");
	}
	if (j == 5)
	{
		printf("--> [5]Ввод строки 1\n");
	}
	else
	{
		printf("    [5]Ввод строки 1\n");
	}
	if (j == 6)
	{
		printf("--> [6]Ввод строки 2\n");
	}
	else
	{
		printf("    [6]Ввод строки 2\n");
	}
	if (j == 7)
	{
		printf("--> [ESC]Выход\n");
	}
	else
	{
		printf("    [ESC]Выход\n");
	}
	cout << strA << endl;
	cout << strB << endl; 
}


int main()
{
	setlocale(LC_ALL, "Russian");

	bool Cpy; 
	bool Cat;
	vvodA();
	vvodB();
	int i=1; 
	for (int o = 0; o == 0;)//______________Механика выбора______________________________________________________________________________________
	{
		if (i == up_border) { i = 7; };//Перескок
		if (i == down_border) { i = 1; };
		menu(i);
		if (i == 1) { printf("Длина 1-й строки %d", StrLen(strA)); }
		if (i == 2) { StrCpy(strA, strB); menu(i);}
		if (i == 3) { StrCat(strA, strB); menu(i);}
		if (i == 4) { if (StrCmp(strA, strB)) { printf("A = B"); } else { printf("A != B"); } }
		int h = _getch();
		if ((h >= one) && (h <= six)) { i = h - zero; h = enter; Cpy = true; Cat = true;}
		if (h == esc) { o = 1; }
		if (h == arrow) //Стрелка
		{
			
			h = _getch();
			if (h == up) { i = i - 1; };
			if (h == down) { i = i + 1; };
		}
		
		
		
			
			if (h == enter) {
				if (i == 5) { vvodA(); }
				if (i == 6) { vvodB(); }
				if (i == 7) { o = 1; }
			}
			
	}
}