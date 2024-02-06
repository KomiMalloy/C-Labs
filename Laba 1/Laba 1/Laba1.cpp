#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include <conio.h>
using namespace std;


void sum(int x, int y) //Функции взаимодействия_________________________________________________________________________________________-
{
	
	int c = x * y;
	system("CLS");
	printf("a + b = %d", c);
	printf("\n\nНажмите пробел, что бы продолжить");
	for (; int prob = 32;) { prob = _getch(); };
}
void razn(int x, int y)
{
	int c = x - y;
	system("CLS");
	printf("a - b = %d", c);
	printf("\n\nНажмите пробел, что бы продолжить");
	for (; int prob = 32;) { prob = _getch(); };
}
void proizved(int x, int y)
{
	int c = x * y;
	system("CLS");
	printf("a * b = %d", c);
	printf("\n\nНажмите пробел, что бы продолжить");
	for (; int prob = 32;) { prob = _getch(); };
}
void del(int x, int y)
{
	int c = x / y;
	system("CLS");
	printf("a / b = %d", c);
	printf("\n\nНажмите пробел, что бы продолжить");
	for (; int prob = 32;) { prob = _getch(); };
}
void ostat(int x, int y)
{
	int c = x % y;
	system("CLS");
	printf("Остаток при делении a на b = %d", c);
	printf("\n\nНажмите пробел, что бы продолжить");
	for (; int prob = 32;) { prob = _getch(); };
}
void koren(int x, int y)
{
	int c = sqrt(x);
	system("CLS");
	printf("Квадратный корень из а = %d", c);
	printf("\n\nНажмите пробел, что бы продолжить");
	for (; int prob = 32;) { prob = _getch(); };
}
void sqr(int x, int y)
{
	int c;
	c = x * x;
	system("CLS");
	printf("a^2 = %d", c);
	printf("\n\nНажмите пробел, что бы продолжить");
	for (; int prob = 32;) { prob = _getch(); };
}
int vvodA(int x )
{
	system("CLS");
	int c;
	printf("Введите число a");
	scanf("%d", &c);
	return(c);
}
int vvodB(int x)
{
	system("CLS");
	int c;
	printf("Введите число b");
	scanf("%d",&c);
	return(c);
}
void Che ()
{
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
	printf("Сначала числа, a потом поговорим\n");
	while (time(0) - tim != 10) {}
	printf("Нажмите пробел для продолжения");
	for (; int prob = 32;) { prob = _getch(); };
}
void inst()
{
	system("CLS");
	printf("Для перемещения курсора используются стрелочки \"Вверх\" и \"Вниз\"\n");
	printf("Для подтверждения выбора используется клавиша \"Enter\"\n");
	printf("Для перехода в главное меню после завершения операции используется пробел\n\n");
	printf("Для продолжения нажмите пробел");
	for (; int prob = 32;) { prob = _getch(); };
}
//_____________________________________________________________________________________________________________________________________________


void menu(int j)//_____________________Меню______________________________________________________________________________________________________
{
system("CLS");
	if (j == 1)
	{	printf("--> Сложить a и b\n");}
	else
	{	printf("   Сложить a и b\n");}
	if (j == 2)
	{
		printf("--> Вычесть b из a\n");
	}
	else
	{
		printf("   Вычесть b из a\n");
	}
	if (j == 3)
	{
		printf("--> Умножить a на b\n");
	}
	else
	{
		printf("   Умножить a на b\n");
	}
	if (j == 4)
	{
		printf("--> Разделить a на b\n");
	}
	else
	{
		printf("   Разделить a на b\n");
	}
	if (j == 5)
	{
		printf("--> Остаток от деления a на b\n");
	}
	else
	{
		printf("   Остаток от деления a на b\n");
	}
	if (j == 6)
	{
		printf("--> Квадратный корень числа a\n");
	}
	else
	{
		printf("   Квадратный корень числа a\n");
	}
	if (j == 7)
	{
		printf("--> Возвести число a в степень b\n");
	}
	else
	{
		printf("   Возвести число a в степень b\n");
	}
	if (j == 8)
	{
		printf("--> Ввести число a\n");
	}
	else
	{
		printf("   Ввести число a\n");
	}
	if (j == 9)
	{
		printf("--> Ввести число b\n");
	}
	else
	{
		printf("   Ввести число b\n");
	}
	if (j == 10)
	{
		printf("--> Выход\n");
	}
	else
	{
		printf("   Выход\n");
	}

}//____________________________________________________________________________________________________________________________________________
int main()
{
	int i = 1; int ap = 0; int bp = 0; int a = 0; int b = 0;
	for (int o = 0; o = 1;)//______________Механика выбора______________________________________________________________________________________
	{
		if (i == 0) { i = 10; };//Перескок
		if (i == 11) { i = 1; };
		menu(i);
		int h = _getch();
		if(h==224) //Стрелка
		{
			h = _getch();
			if (h == 72) { i = i + 1; };
			if (h == 80) { i = i - 1; };
		}
		if (h == 13)//Enter
		{
			switch (i)//Кейсы
			{
			case 1: if ((ap == 1) && (bp == 1)) { sum(a, b); } else { Che(); } break;
			case 2: if ((ap == 1) && (bp == 1)) { razn(a, b); } else { Che(); } break;
			case 3: if ((ap == 1) && (bp == 1)) { proizved(a, b); } else { Che(); } break;
			case 4: if ((ap == 1) && (bp == 1)) { del(a, b); } else { Che(); } break;
			case 5: if ((ap == 1) && (bp == 1)) { ostat(a, b); } else { Che(); } break;
			case 6: if ((ap == 1) && (bp == 1)) { koren(a, b); } else { Che(); } break;
			case 7: if ((ap == 1) && (bp == 1)) { sqr(a, b); } else { Che(); } break;
			case 8: a = vvodA(0);
			case 9: b = vvodB(0);
			case 10: inst();
			case 11: o = 1;
			}
		}

	}
}
