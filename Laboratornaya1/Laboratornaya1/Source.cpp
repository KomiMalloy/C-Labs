#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include <conio.h>
using namespace std;

void sum(int x,int y) //������� ��������������_________________________________________________________________________________________-
{
	const int iup = 2137383647;
	const int idown = -2147483648;
	const int space = 32;
	int prob = 0;
	long long c = x + y;
	if ((c < idown) || (c > iup)) { system("CLS"); printf("��� ��������� �����, ��� � ���� �� ���� ���������..."); }
	else
	{
		system("CLS");//clrscr();
		printf("%d", x); printf(" + %d", y); printf(" = %d", c);
	}
	printf("\n\n������� ������, ��� �� ����������");
	for (; prob != space;) { prob = _getch(); };
}
void razn(int x, int y)
{
	const int iup = 2137383647;
	const int idown = -2147483648;
	const int space = 32;
	int prob = 0;
	long long c = x - y;
	if ((c < idown) || (c > iup)) { system("CLS"); printf("��� ��������� �����, ��� � ���� �� ���� ���������..."); }
	else
	{
		system("CLS");
		printf("%d", x); printf(" - %d", y); printf(" = %d", c);
	}
	printf("\n\n������� ������, ��� �� ����������");
	for (; prob != space;) { prob = _getch(); };
}
void proizved(int x, int y)
{
	const int iup = 2137383647;
	const int idown = -2147483648;
	const int space = 32;
	int prob = 0; 
	int er = 0;
	long long c = 0;
	for (int i = 0; i != y; i++) { c = c + x; if ((c > iup) || (c < idown)) { er = 1; break; } }
	if (er == 1) { system("CLS"); printf("��� ��������� �����, ��� � ���� �� ���� ���������..."); }
	else
	{
		system("CLS");
		printf("%d", x); printf(" * %d", y); printf(" = %d", c);
		//printf("%d * %d = %d", x, y, c);
	}
	printf("\n\n������� ������, ��� �� ����������");
	for (; prob != space;) { prob = _getch(); };
}
void del(int x, int y)
{
	const int iup = 2137383647;
	const int idown = -2147483648;
	const int space = 32;
	int prob = 0;
	system("CLS");
	if (y != 0) 
	{long long c = x / y; 
	if ((c < idown) || (c > iup)) { system("CLS"); printf("��� ��������� �����, ��� � ���� �� ���� ���������..."); }
	else
	{
		printf("%d", x);
		printf(" / %d", y);
		printf(" = %d", c);
	}
	}
	else { printf("�� 0 ������ ������!"); }
	printf("\n\n������� ������, ��� �� ����������");
	for (; prob != space;) { prob = _getch(); };
}
void ostat(int x, int y)
{
	const int iup = 2137383647;
	const int idown = -2147483648;
	const int space = 32;
	int prob = 0; 
	system("CLS");
	if (y != 0) {
		long long c = x % y;
		if ((c < idown) || (c > iup)) { system("CLS"); printf("��� ��������� �����, ��� � ���� �� ���� ���������..."); }
		else
		{
			printf("������� ��� ������� %d", x); printf(" �� %d", y); printf(" = %d", c);
		}
	}
	else { printf("�� 0 ������ ������!"); }
	printf("\n\n������� ������, ��� �� ����������");
	for (; prob != space;) { prob = _getch(); };
}
 void koren(int x)
{
	 const int iup = 2137383647;
	 const int idown = -2147483648;
	 const int space = 32;
	 int prob = 0;
	system("CLS");
	if (x >= 0) { long long c = sqrt(x); if ((c < idown) || (c > iup)) { system("CLS"); printf("��� ��������� �����, ��� � ���� �� ���� ���������..."); }
	else { printf("���������� ������ %d", x);  printf(" = %d", c); }
	}
	else { printf("���������� �������� ������ �� �������������� �����, � ����� ������"); }
	printf("\n\n������� ������, ��� �� ����������");
	for (; prob != space;) { prob = _getch(); };
}
void sqr(int x, int y)
{
	const int iup = 2137383647;
	const int idown = -2147483648;//MAX_INT
	const int space = 32; 
	int i,er(0);
	int prob = 0;
	long long c=1;
	if (y < 0) { c = 0; }
	else
	{
		for (i = 0; i != y; i = i + 1)
		{
			c = c * x;
			if ((c < idown) || (c > iup)) { er = 1; break; }
		}
		if (er == 1) { system("CLS"); printf("��� ��������� �����, ��� � ���� �� ���� ���������..."); }
		else {
			system("CLS");
			printf("%d", x); printf("^%d", y); printf("=% d", c);
		}
	}
	if (c==0) { system("CLS"); printf("%d", x); printf("^%d", y); printf("=% d", c); }
	printf("\n\n������� ������, ��� �� ����������");
	for (; prob != space;) { prob = _getch(); };
}
int vvodA(int x)
{
	const int zero = 48;
	const int nine = 57;
	const int enter = 13;
	const int minus = 45;
	system("CLS");
	int c=0; int s; int p = 0; int zn = 0; int nul = 0;
	printf("������� ����� a\n");
	for (; p == 0;) { s = _getch();  if ((s >= zero) && (s <= nine)) { c = c * 10 + s - zero; p = 1; printf("%d", s - zero); } if ((s == minus) && (zn == 0)) { zn = 1; printf("-"); } if (s == zero) { nul = 1; } }
	p = 0;
	if (nul == 0) { for (; p != 8;) { s = _getch(); if (s == enter) { p = 8; }; if ((s >= zero) && (s <= nine)) { c = c * 10 + s - zero; printf("%d", s - zero); p++; } } }
	p = 0;
	if (nul == 1) { for (; p == 0;) { s = _getch(); if (s == enter) { p = 1; }; } }
	if (zn == 1) { c = -c; }
	return(c);
}
int vvodB(int x)
{
	const int zero = 48;
	const int nine = 57;
	const int enter = 13;
	const int minus = 45;
	system("CLS");
	int c=0; int s; int p = 0; int zn = 0; int nul = 0;
	printf("������� ����� b\n");
	for (; p == 0;) { s = _getch();  if ((s >= zero) && (s <= nine)) { c = c * 10 + s - zero; p = 1; printf("%d", s - zero); } if ((s == minus) && (zn == 0)) { zn = 1; printf("-"); } if (s == zero) { nul = 1; } }
	p = 0;
	if (nul == 0) { for (; p != 8;) { s = _getch(); if (s == enter) { p = 8; }; if ((s >= zero) && (s <= nine)) { c = c * 10 + s - zero; printf("%d", s - zero); p++; } } }
	p = 0;
	if (nul == 1) { for (; p == 0;) { s = _getch(); if (s == enter) { p = 1; }; } }
	if (zn == 1) { c = -c; }
	return(c); 
}
void Che()
{
	const int space = 32;
	int prob = 0;
	system("CLS");
	double tim;
	tim = time(0);
	while (time(0) - tim != 2) {}
	printf("׸?\n");
	while (time(0) - tim != 4) {}
	printf("� ����� �� �����?\n");
	while (time(0) - tim != 6) {}
	printf("� �����������, � �� ����������\n");
	while (time(0) - tim != 8) {}
	printf("��� ����� �����, a ����� ���������\n");
	while (time(0) - tim != 10) {}
	printf("������� ������ ��� �����������");
	for (; prob != space;) { prob = _getch(); };
}
void inst()
{
	const int space = 32;
	int prob = 0;
	system("CLS");
	printf("��� ����������� ������� ������������ ��������� \"�����\" � \"����\"\n");
	printf("��� ������������� ������ ������������ ������� \"Enter\"\n");
	printf("��� �������� � ������� ���� ����� ���������� �������� ������������ ������\n\n");
	printf("��� ����������� ������� ������");
	for (; prob != space;) { prob = _getch(); };
}
//_____________________________________________________________________________________________________________________________________________


void menu(int j)//_____________________����______________________________________________________________________________________________________
{
	system("CLS");
	if (j == 1)
	{
		printf("--> [1]������� a � b\n");
	}
	else
	{
		printf("    [1]������� a � b\n");
	}
	if (j == 2)
	{
		printf("--> [2]������� b �� a\n");
	}
	else
	{
		printf("    [2]������� b �� a\n");
	}
	if (j == 3)
	{
		printf("--> [3]�������� a �� b\n");
	}
	else
	{
		printf("    [3]�������� a �� b\n");
	}
	if (j == 4)
	{
		printf("--> [4]��������� a �� b\n");
	}
	else
	{
		printf("    [4]��������� a �� b\n");
	}
	if (j == 5)
	{
		printf("--> [5]������� �� ������� a �� b\n");
	}
	else
	{
		printf("    [5]������� �� ������� a �� b\n");
	}
	if (j == 6)
	{
		printf("--> [6]���������� ������ �� a\n");
	}
	else
	{
		printf("    [6]���������� ������ �� a\n");
	}
	if (j == 7)
	{
		printf("--> [7]�������� ����� a � ������� b\n");
	}
	else
	{
		printf("    [7]�������� ����� a � ������� b\n");
	}
	if (j == 8)
	{
		printf("--> [8]������ ����� a\n");
	}
	else
	{
		printf("    [8]������ ����� a\n");
	}
	if (j == 9)
	{
		printf("--> [9]������ ����� b\n");
	}
	else
	{
		printf("    [9]������ ����� b\n");
	}
	if (j == 10)
	{
		printf("--> [TAB]����������\n");
	}
	else
	{
		printf("    [TAB]����������\n");
	}
	if (j == 11)
	{
		printf("--> [ESC]�����\n");
	}
	else
	{
		printf("    [ESC]�����\n");
	}

}//____________________________________________________________________________________________________________________________________________
int main()
{
	setlocale(LC_ALL, "Russian");
	inst();
	const int space = 32;
	const int zero = 48;
	const int one = 49;
	const int nine = 57;
	const int enter = 13;
	const int minus = 45;
	const int up_border = 0;
	const int down_border = 12;
	const int esc = 27;
	const int tab = 9;
	const int arrow = 224;
	const int up = 72;
	const int down = 80;
	int i = 1; int ap = 0; int bp = 0; int a = 0; int b = 0;
	for (int o = 0; o == 0;)//______________�������� ������______________________________________________________________________________________
	{
		if (i == up_border) { i = 11; };//��������
		if (i == down_border) { i = 1; };
		menu(i);
		int h = _getch();
		if ((h >= one) && (h <= nine)) { i = h - zero; h = enter; }
		if (h == esc) { i = 11; h = enter; }
		if (h == tab) { i = 10; h = enter; }
		if (h == arrow) //�������
		{
			h = _getch();
			if (h == up) { i = i - 1; };
			if (h == down) { i = i + 1; };
		}
		if (h == enter)//Enter
		{
			switch (i)//�����
			{
			case 1: if ((ap == 1) && (bp == 1)) {}
				  else { Che(); }
				  if (ap == 0) { a = vvodA(0); ap = 1; }
				  if (bp == 0) { b = vvodB(0); bp = 1; }
				  sum(a, b);
				  break;
			case 2: if ((ap == 1) && (bp == 1)) {  }
				  else { Che(); }
				  if (ap == 0) { a = vvodA(0); ap = 1; }
				  if (bp == 0) { b = vvodB(0); bp = 1; }
				  razn(a, b);
				  break;
			case 3: if ((ap == 1) && (bp == 1)) {  }
				  else { Che(); }
				  if (ap == 0) { a = vvodA(0); ap = 1; }
				  if (bp == 0) { b = vvodB(0); bp = 1; }
				  proizved(a, b);
				  break;
			case 4: if ((ap == 1) && (bp == 1)) {  }
				  else { Che(); }
				  if (ap == 0) { a = vvodA(0); ap = 1; }
				  if (bp == 0) { b = vvodB(0); bp = 1; }
				  del(a, b);
				  break;
			case 5: if ((ap == 1) && (bp == 1)) { }
				  else { Che(); }
				  if (ap == 0) { a = vvodA(0); ap = 1; }
				  if (bp == 0) { b = vvodB(0); bp = 1; }
				  ostat(a, b);
				  break;
			case 6: if (ap == 1) {  }
				  else { Che(); }
				  if (ap == 0) { a = vvodA(0); ap = 1; }
				  koren(a);
				  break;
			case 7: if ((ap == 1) && (bp == 1)) { }
				  else { Che(); }
				  if (ap == 0) { a = vvodA(0); ap = 1; }
				  if (bp == 0) { b = vvodB(0); bp = 1; }
				  sqr(a, b);
				  break;
			case 8: a = vvodA(0); ap = 1; break;
			case 9: b = vvodB(0); bp = 1; break;
			case 10: inst(); break;
			case 11: o = 1; break;
			}
		}

	}
}

