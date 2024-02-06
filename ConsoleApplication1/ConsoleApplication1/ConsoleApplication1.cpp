#include <iostream>
#include <conio.h>
#include <windows.h>
#include <string>
#include <fstream>
#include<locale.h>
using namespace std;

char mas[25][80];
char* s_name[10];
int snow[80];

void Create();
void gotoxy(int xpos, int ypos);
void print();
void print_slide();
void slide();
int wherex();
int wherey();

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Russian");
	for (int i = 0; i < 10; s_name[i] = NULL, i++);
	for (int i = 0; i < 80; i++) {
		snow[i] = 0;
		for (int j = 0; j < 25; j++) {
			if (j == 0 || j == 24 || i == 0 || i == 79) mas[j][i] = '$';
			else mas[j][i] = ' ';
		}
	}
	int code = 1;
	int flag = 1;
	print();
	Create();
	while (code != 27) {
		code = _getch();
		if (code == 0 || code == 224)
			code = _getch();
		switch (code)
		{
		case 75:
			if (flag > 1)flag--;
			gotoxy(flag + 1, 0);
			cout << ' ';
			gotoxy(flag, 0);
			cout << '|';
			break;
		case 77:
			if (flag < 78) flag++;
			gotoxy(flag - 1, 0);
			cout << ' ';
			gotoxy(flag, 0);
			cout << '|';
			break;
		case 13:
			while (1) {
				int drop = 0;
				if (_kbhit()) drop = _getch();
				if (drop == 13) {
					mas[1][flag] = '*';
					snow[flag]++;
					drop = 0;
				}
				if (drop == 0 || drop == 224) {
					if (_kbhit()) drop = _getch();
					if (drop == 77 && flag < 78) {
						flag++;
						gotoxy(flag - 1, 0);
						cout << ' ';
						gotoxy(flag, 0);
						cout << '|';
					}
					if (drop == 75 && flag > 1) {
						flag--;
						gotoxy(flag + 1, 0);
						cout << ' ';
						gotoxy(flag, 0);
						cout << '|';
					}
				}
				if (drop == 'm')break;
				if (drop == 27) {
					cout << endl;
					return 0;
				}
				print_slide();
				slide();
				int result = _kbhit();
				/*if (result != 0) {
					int sk = _getch();
					switch (sk)
					{
					case 75:
						Sleep(10);
						break;
					case 80:
						Sleep(70);
					default:
						break;
					}
				}*/
				/*Sleep(10);*/
			}

		}
	}
	return 0;
}
void slide() {
	for (int i = 24; i > 0; i--) {
		for (int j = 1; j < 79; j++) {
			if (mas[i][j] == '*' && mas[i + 1][j] == '-') continue;
			else if (i != 24 && mas[i][j] == '*' && mas[i + 1][j] == ' ') {
				mas[i][j] = ' ';
				mas[i + 1][j] = '*';
			}
			else if (mas[i][j] == '*' && mas[i + 2][j - 1] == ' ' && mas[i + 1][j - 1] != '-' && mas[i][j - 1] != '-') {
				mas[i][j] = ' ';
				mas[i + 1][j - 1] = '*';
			}
			else if (i != 22 && j != 78 && mas[i][j] == '*' && mas[i + 2][j + 1] == ' ' && mas[i + 1][j + 1] != '-' && mas[i][j + 1] != '-') {
				mas[i][j] = ' ';
				mas[i + 1][j + 1] = '*';
			}
		}
	}
	_kbhit();
	if ((_kbhit()) && (_getch() == 224)) {
		switch (_getch())
		{
		case 75:
			Sleep(10);
			break;
		case 80:
			Sleep(70);
		default:
			break;
		}
	}

}

void print() {
	system("cls");
	gotoxy(0, 1);
	for (int i = 0; i < 25; i++) {
		for (int j = 0; j < 80; j++) {
			cout << mas[i][j];
		}
		cout << endl;
	}
	cout << endl;
}

void print_slide() {
	for (int i = 1; i < 24; i++) {
		gotoxy(1, i + 1);
		for (int j = 1; j < 80; j++) {
			cout << mas[i][j];
		}
	}
}


void Create() {
	bool exit = true;

	print();
	int code = 1;
	int x = 1, y = 3;
	while (code != 22) {
		code = _getch();
		if (code == 0 || code == 224)
			code = _getch();
		switch (code) {
		case 75:
			if (x > 1)x -= 1;
			gotoxy(x, y);
			break;
		case 77:
			if (x < 78) x += 1;
			gotoxy(x, y);
			break;
		case 72:
			if (y > 3)y -= 1;
			gotoxy(x, y);
			break;
		case 80:
			if (y < 24)y += 1;
			gotoxy(x, y);
			break;
		case 13:
			mas[y - 1][x] = '-';
			//x--;
			cout << '-';
			if (x == 78) {
				gotoxy(x, y);
			}
			gotoxy(x, y);
			break;
		case 8:
			//x--;
			mas[y - 1][x] = ' ';
			cout << ' ';
			//x--;
			gotoxy(x, y);
			break;
		case 's':
			code = 22;
			break;
		}

	}

}


void gotoxy(int xpos, int ypos)
{
	COORD scrn;

	HANDLE hOuput = GetStdHandle(STD_OUTPUT_HANDLE);

	scrn.X = xpos; scrn.Y = ypos;

	SetConsoleCursorPosition(hOuput, scrn);
}

int wherex() {
	CONSOLE_SCREEN_BUFFER_INFO csbi;

	GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);

	return csbi.dwCursorPosition.X;
}

int wherey() {
	CONSOLE_SCREEN_BUFFER_INFO csbi;

	GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);

	return csbi.dwCursorPosition.Y;
}