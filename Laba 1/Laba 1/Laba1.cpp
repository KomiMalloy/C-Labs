#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include <conio.h>
using namespace std;


void sum(int x, int y) //������� ��������������_________________________________________________________________________________________-
{
	
	int c = x * y;
	system("CLS");
	printf("a + b = %d", c);
	printf("\n\n������� ������, ��� �� ����������");
	for (; int prob = 32;) { prob = _getch(); };
}
void razn(int x, int y)
{
	int c = x - y;
	system("CLS");
	printf("a - b = %d", c);
	printf("\n\n������� ������, ��� �� ����������");
	for (; int prob = 32;) { prob = _getch(); };
}
void proizved(int x, int y)
{
	int c = x * y;
	system("CLS");
	printf("a * b = %d", c);
	printf("\n\n������� ������, ��� �� ����������");
	for (; int prob = 32;) { prob = _getch(); };
}
void del(int x, int y)
{
	int c = x / y;
	system("CLS");
	printf("a / b = %d", c);
	printf("\n\n������� ������, ��� �� ����������");
	for (; int prob = 32;) { prob = _getch(); };
}
void ostat(int x, int y)
{
	int c = x % y;
	system("CLS");
	printf("������� ��� ������� a �� b = %d", c);
	printf("\n\n������� ������, ��� �� ����������");
	for (; int prob = 32;) { prob = _getch(); };
}
void koren(int x, int y)
{
	int c = sqrt(x);
	system("CLS");
	printf("���������� ������ �� � = %d", c);
	printf("\n\n������� ������, ��� �� ����������");
	for (; int prob = 32;) { prob = _getch(); };
}
void sqr(int x, int y)
{
	int c;
	c = x * x;
	system("CLS");
	printf("a^2 = %d", c);
	printf("\n\n������� ������, ��� �� ����������");
	for (; int prob = 32;) { prob = _getch(); };
}
int vvodA(int x )
{
	system("CLS");
	int c;
	printf("������� ����� a");
	scanf("%d", &c);
	return(c);
}
int vvodB(int x)
{
	system("CLS");
	int c;
	printf("������� ����� b");
	scanf("%d",&c);
	return(c);
}
void Che ()
{
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
	printf("������� �����, a ����� ���������\n");
	while (time(0) - tim != 10) {}
	printf("������� ������ ��� �����������");
	for (; int prob = 32;) { prob = _getch(); };
}
void inst()
{
	system("CLS");
	printf("��� ����������� ������� ������������ ��������� \"�����\" � \"����\"\n");
	printf("��� ������������� ������ ������������ ������� \"Enter\"\n");
	printf("��� �������� � ������� ���� ����� ���������� �������� ������������ ������\n\n");
	printf("��� ����������� ������� ������");
	for (; int prob = 32;) { prob = _getch(); };
}
//_____________________________________________________________________________________________________________________________________________


void menu(int j)//_____________________����______________________________________________________________________________________________________
{
system("CLS");
	if (j == 1)
	{	printf("--> ������� a � b\n");}
	else
	{	printf("   ������� a � b\n");}
	if (j == 2)
	{
		printf("--> ������� b �� a\n");
	}
	else
	{
		printf("   ������� b �� a\n");
	}
	if (j == 3)
	{
		printf("--> �������� a �� b\n");
	}
	else
	{
		printf("   �������� a �� b\n");
	}
	if (j == 4)
	{
		printf("--> ��������� a �� b\n");
	}
	else
	{
		printf("   ��������� a �� b\n");
	}
	if (j == 5)
	{
		printf("--> ������� �� ������� a �� b\n");
	}
	else
	{
		printf("   ������� �� ������� a �� b\n");
	}
	if (j == 6)
	{
		printf("--> ���������� ������ ����� a\n");
	}
	else
	{
		printf("   ���������� ������ ����� a\n");
	}
	if (j == 7)
	{
		printf("--> �������� ����� a � ������� b\n");
	}
	else
	{
		printf("   �������� ����� a � ������� b\n");
	}
	if (j == 8)
	{
		printf("--> ������ ����� a\n");
	}
	else
	{
		printf("   ������ ����� a\n");
	}
	if (j == 9)
	{
		printf("--> ������ ����� b\n");
	}
	else
	{
		printf("   ������ ����� b\n");
	}
	if (j == 10)
	{
		printf("--> �����\n");
	}
	else
	{
		printf("   �����\n");
	}

}//____________________________________________________________________________________________________________________________________________
int main()
{
	int i = 1; int ap = 0; int bp = 0; int a = 0; int b = 0;
	for (int o = 0; o = 1;)//______________�������� ������______________________________________________________________________________________
	{
		if (i == 0) { i = 10; };//��������
		if (i == 11) { i = 1; };
		menu(i);
		int h = _getch();
		if(h==224) //�������
		{
			h = _getch();
			if (h == 72) { i = i + 1; };
			if (h == 80) { i = i - 1; };
		}
		if (h == 13)//Enter
		{
			switch (i)//�����
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
