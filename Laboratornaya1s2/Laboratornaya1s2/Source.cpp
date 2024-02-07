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
unsigned list_size=0;
int start_num = 0;

struct MData
{
	int data;
	MData* next_adress;
};
MData* start_adress;

MData* adress_search(int num, MData* begi)
{
	MData* next;
	for (int i=1;i<num;i++)
	{
		next = begi->next_adress;
		begi = next;
	}
	return(begi);
}

MData *create_list(unsigned length)
{
	MData* current=0, * next = 0;
	for (int i = 1; i <= length; i++)
	{
		current = new MData;
		current->next_adress = next;
		next = current;
	}
	return current;
}

void fill_list(MData* beg, int first_num)
{
	MData* next;
	while (beg != 0)
	{
		next = beg->next_adress;
		beg->data = first_num;
		beg = next;
		first_num++;
	}
};

void print_list(MData* beg)
{
	MData* next;
	for(int i=1;i<=list_size;i++)
	{
		next = beg->next_adress;
		printf("%d->", beg->data);
		beg = next;
	}
	printf("\b\b  ");
};

int new_list()
{
	if (list_size != 0) { printf("Список уже существует, для создания нового списка, удалите предыдущий\n"); system("Pause"); return(list_size); }
	system("CLS");
	printf("Сколько элементов будет в списке?\n");
	int h;
	for (int o = 0; o == 0;)
	{
		h = _getch();
		if ((h > zero) && (h <= nine)) { printf("%d", h - zero); list_size =  h - zero; o = 1; }
	}
	for (int o = 0; o == 0;)
	{
		h = _getch();
		if (h == enter) { o = 1; };
		if ((h >= zero) && (h <= nine)) { printf("%d", h - zero); list_size = list_size * 10 + h - zero; }
		if (list_size >= 100) { o = 1; };
	}
	system("CLS");
	printf("Какой элемент будет стартовым ? \n");
	for (int o = 0; o == 0;)
	{
		h = _getch();
		if ((h >= zero) && (h <= nine)) { printf("%d", h - zero); start_num = h - zero; o = 1; }
	}
	for (int o = 0; o == 0;)
	{
		h = _getch();
		if (h == enter) { o = 1; };
		if ((h >= zero) && (h <= nine)) { printf("%d", h - zero); start_num = start_num * 10 + h - zero; }
		if (start_num >= 100) { o = 1; };

	}
	start_adress = create_list(list_size);
	fill_list(start_adress, start_num);
};

void delete_full_list(MData*& beg)
{
	if (list_size)
	{
		MData* next;
		while (beg)
		{
			next = beg->next_adress;
			delete beg;
			beg = next;
		}
		printf("Успешно "); system("pause");

	}
	else{ printf("Ошибка\n"); system("pause"); }
}

void add_list(MData* beg) 
{
	system("CLS");
	printf("Сколько элементов вы хотите добавить?\n");
	int h;
	int A_list_size=0;
	int A_start_num=0;
	for (int o = 0; o == 0;)
	{
		h = _getch();
		if ((h > zero) && (h <= nine)) { printf("%d", h - zero); A_list_size = h - zero; o = 1; }
	}
	for (int o = 0; o == 0;)
	{
		h = _getch();
		if (h == enter) { o = 1; };
		if ((h >= zero) && (h <= nine)) { printf("%d", h - zero); A_list_size = A_list_size * 10 + h - zero; }
		if (A_list_size >= 100) { o = 1; };
	}
	system("CLS");
	printf("Какой элемент будет стартовым ? \n");
	for (int o = 0; o == 0;)
	{
		h = _getch();
		if ((h >= zero) && (h <= nine)) { printf("%d", h - zero); A_start_num = A_start_num * 10 + h - zero; o = 1; }
	}
	for (int o = 0; o == 0;)
	{
		h = _getch();
		if (h == enter) { o = 1; };
		if ((h >= zero) && (h <= nine)) { printf("%d", h - zero); A_start_num = A_start_num * 10 + h - zero; }
		if (A_start_num >= 100) { o = 1; };

	}
	system("CLS");
	printf("Перед номером какого элемента вставить новые элементы ? \n");
	int A_enter_num=0;
	for (int o = 0; o == 0;)
	{
		h = _getch();
		if ((h > zero) && (h <= nine)) { printf("%d", h - zero); A_enter_num = A_enter_num * 10 + h - zero; o = 1; }
	}
	for (int o = 0; o == 0;)
	{
		h = _getch();
		if (h == enter) { o = 1; };
		if ((h >= zero) && (h <= nine)) { printf("%d", h - zero); A_enter_num = A_enter_num * 10 + h - zero; }
		if (A_enter_num >= 100) { o = 1; };

	}
	int u = 1;
	if ((A_enter_num > list_size + 1) || (A_enter_num < 2)|| (list_size==0)) {
		if ((A_enter_num == 1)||(list_size==0))
		{
			MData* A_start_adress = create_list(A_list_size);
			fill_list(A_start_adress, A_start_num);	
			adress_search(A_list_size, A_start_adress)->next_adress = beg;
			start_adress = beg = A_start_adress;
			list_size += A_list_size;
		}
		else { system("CLS"); printf("Ошибка\n"); system("pause"); u = 0; }
	}
	else {
		list_size = list_size + A_list_size;
		if (u == 1)
		{
			MData* A_start_adress = create_list(A_list_size);
			fill_list(A_start_adress, A_start_num);
			MData* num_adress = adress_search(A_enter_num, beg);
			adress_search(A_enter_num - 1, beg)->next_adress = A_start_adress;
			adress_search(A_list_size + A_enter_num - 1, beg)->next_adress = num_adress;
		}
	}
	
}

void delete_part_of_list(MData* beg)
{
	system("CLS");

	printf("Сколько элементов вы хотите удалить?\n");
	int h;
	int D_list_size = 0;
	int D_start_num = 0;
	for (int o = 0; o == 0;)
	{
		h = _getch();
		if ((h > zero) && (h <= nine)) { printf("%d", h - zero); D_list_size = h - zero; o = 1; }
	}
	for (int o = 0; o == 0;)
	{
		h = _getch();
		if (h == enter) { o = 1; };
		if ((h >= zero) && (h <= nine)) { printf("%d", h - zero); D_list_size = D_list_size * 10 + h - zero; }
		if (D_list_size >= 100) { o = 1; };
	}
	if (D_list_size > list_size) { D_list_size = list_size; }
	system("CLS");
	printf("С какого элемента будем удалять ? \n");
	for (int o = 0; o == 0;)
	{
		h = _getch();
		if ((h > zero) && (h <= nine)) { printf("%d", h - zero); D_start_num =  + h - zero; o = 1; }
	}
	for (int o = 0; o == 0;)
	{
		h = _getch();
		if (h == enter) { o = 1; };
		if ((h >= zero) && (h <= nine)) { printf("%d", h - zero); D_start_num = D_start_num * 10 + h - zero; }
		if (D_start_num >= 100) { o = 1; };

	}
	if (D_start_num>list_size-D_list_size+1) { printf("Ошибка "); system("pause"); }
	else
	{
		if (D_start_num == 1)
		{
			MData* next;
			MData* b = adress_search(D_list_size + D_start_num, beg);
			for (int i = 1; i < list_size; i++)
			{
				next = beg->next_adress;
				if ((i >= D_start_num) && (i <= D_start_num + D_list_size - 1)) { delete beg; }
				beg = next;
			}

			list_size = list_size - D_list_size;
			start_adress = beg = b;
		}
		else
		{
			MData* next;
			MData* a = adress_search(D_start_num - 1, beg);
			MData* b = adress_search(D_list_size + D_start_num, beg);
			for (int i = 1; i < list_size; i++)
			{
				next = beg->next_adress;
				if ((i >= D_start_num) && (i <= D_start_num + D_list_size - 1)) { delete beg; }
				beg = next;
			}

			a->next_adress = b;
			list_size = list_size - D_list_size;
		}
	}
}

void edit_data(MData* beg)
{
	if (list_size == 0) { printf("Ошибка"); system("Pause"); }
	else
	{
		system("CLS");
		printf("Который элемент будем редактировать?\n");
		int h;
		int E_list_num;
		for (int o = 0; o == 0;)
		{
			h = _getch();
			if ((h > zero) && (h <= nine)) { printf("%d", h - zero); E_list_num = h - zero; o = 1; }
		}
		for (int o = 0; o == 0;)
		{
			h = _getch();
			if (h == enter) { o = 1; };
			if ((h >= zero) && (h <= nine)) { printf("%d", h - zero); E_list_num = E_list_num * 10 + h - zero; }
			if (E_list_num >= 100) { o = 1; };
		}
		if (E_list_num > list_size) { printf("\nНет такого элемента "); system("pause"); } return;
		system("CLS");
		printf("Какое значение примет редактируемый элемент? \n");
		int new_data;
		for (int o = 0; o == 0;)
		{
			h = _getch();
			if ((h >= zero) && (h <= nine)) { printf("%d", h - zero); new_data = h - zero; o = 1; }
		}
		for (int o = 0; o == 0;)
		{
			h = _getch();
			if (h == enter) { o = 1; };
			if ((h >= zero) && (h <= nine)) { printf("%d", h - zero); new_data = new_data * 10 + h - zero; }
			if (new_data >= 100) { o = 1; };

		}
		MData* next;
		MData* a = beg;
		for (int i = 1; i < E_list_num; i++)
		{
			next = a->next_adress;
			a = next;
		}
		a->data = new_data;
	}
}


void sort(MData* begP)
{
	if (list_size)
	{
		int x = 1; MData* start = begP;
		while (x == 1)
		{
			x = 0;
			begP = start;
			MData* next;
			MData* begN = begP->next_adress;
			int a;
			while (begN != 0)
			{
				if (begP->data > begN->data) { a = begP->data; begP->data = begN->data; begN->data = a; x = 1; }
				next = begN->next_adress;
				begN = next;
				next = begP->next_adress;
				begP = next;
			}
		}
		
	}
	else { printf("Ошибка "); system("pause"); }
}
void menu(int j)//_____________________Меню______________________________________________________________________________________________________
{
	system("CLS");
	if (j == 1)
	{
		printf("--> [1]Создать список\n");
	}
	else
	{
		printf("    [1]Создать список\n");
	}
	if (j == 2)
	{
		printf("--> [2]Удалить список\n");
	}
	else
	{
		printf("    [2]Удалить список\n");
	}
	if (j == 3)
	{
		printf("--> [3]Добавить один или несколько элементов \n");
	}
	else
	{
		printf("    [3]Добавить один или несколько элементов\n");
	}
	if (j == 4)
	{
		printf("--> [4]Удалить один или несколько элементов\n");
	}
	else
	{
		printf("    [4]Удалить один или несколько элементов\n");
	}
	if (j == 5)
	{
		printf("--> [5]Сортировка\n");
	}
	else
	{
		printf("    [5]Сортировка\n");
	}
	if (j == 6)
	{
		printf("--> [6]Изменение значения конкретного элемента\n");
	}
	else
	{
		printf("    [6]Изменение значения конкретного элемента\n");
	}
	if (j == 7)
	{
		printf("--> [ESC]Выход\n\n");
	}
	else
	{
		printf("    [ESC]Выход\n\n");
	}
	print_list(start_adress);
}


int main()
{
	setlocale(LC_ALL, "Russian");
	int i = 1;
	for (int o = 0; o == 0;)//______________Механика выбора______________________________________________________________________________________
	{
		if (i == up_border) { i = 7; };//Перескок
		if (i == down_border) { i = 1; };
		menu(i);
		
		int h = _getch();
		if ((h >= one) && (h <= six)) { i = h - zero; h = enter; }
		if (h == esc) { o = 1; }
		if (h == arrow) //Стрелка
		{

			h = _getch();
			if (h == up) { i = i - 1; };
			if (h == down) { i = i + 1; };
		}




		if (h == enter) {
			if (i == 1) { if (list_size == 0) { new_list(); } else { printf("\nОшибка, лист уже существует "); system("pause"); } }
			if (i == 2) { if (list_size) { delete_full_list(start_adress); list_size = 0; } else { printf("\nОшибка, листа не существует "); system("pause");} }
			if (i == 3) { add_list(start_adress); }
			if (i == 4) { if (list_size) { delete_part_of_list(start_adress); } else { printf("\nОшибка, листа не существует "); system("pause"); } }
			if (i == 5) { if (list_size) { sort(start_adress); } else { printf("\nОшибка, листа не существует "); system("pause"); } }
			if (i == 6) { if (list_size) { edit_data(start_adress); } else { printf("\nОшибка, листа не существует "); system("pause"); } }
			if (i == 7) { o = 1; delete_full_list(start_adress); }
		}

	}
}