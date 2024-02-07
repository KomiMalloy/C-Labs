#include <iostream>
#include <stack>
#include <conio.h>
#include <iomanip>
using namespace std;
const int esc(27), fs(0), arrs(224);
bool error = false;

struct leks
{
	char type; //0-число; + сложение и т.д.
	long double val;
};
leks zero;
bool Math(stack <leks>& Stack_n, stack <leks>& Stack_o, leks& item) {
	long double a, b, c;
	a = Stack_n.top().val;
	Stack_n.pop();
	switch (Stack_o.top().type)
	{
	case '+':
		if (Stack_n.empty()) {
			cerr << "\nОшибка в условии бинарной функции\n";
			return false;
		}
		else {
			b = Stack_n.top().val;
			Stack_n.pop();
			c = a + b;
			item.type = '0';
			item.val = c;
			Stack_n.push(item);
			Stack_o.pop();
			break;
		}
	case '-':
		if (Stack_n.empty()) {
			cerr << "\nОшибка в условии бинарной функции\n";
			return false;
		}
		else {
			b = Stack_n.top().val;
			Stack_n.pop();
			c = b - a;
			item.type = '0';
			item.val = c;
			Stack_n.push(item);
			Stack_o.pop();
			break;
		}
	case '*':
		if (Stack_n.empty()) {
			cerr << "\nОшибка в условии бинарной функции\n";
			return false;
		}
		else {
			b = Stack_n.top().val;
			Stack_n.pop();
			c = a * b;
			item.type = '0';
			item.val = c;
			Stack_n.push(item);
			Stack_o.pop();
		}
		break;
	case '/':
		if (Stack_n.empty()) {
			cerr << "\nОшибка в условии бинарной функции\n";
			return false;
		}
		else {
			b = Stack_n.top().val;
			if (a == 0) {
				cerr << "\nОшибка деления на 0\n";
				return false;
			}
			else {
				Stack_n.pop();
				c = (b / a);
				item.type = '0';
				item.val = c;
				Stack_n.push(item);
				Stack_o.pop();
				break;
			}
		}
	case '^':
		if (Stack_n.empty()) {
			cerr << "\nОшибка в условии бинарной функции\n";
			return false;
		}
		else {
			b = Stack_n.top().val;
			Stack_n.pop();
			c = pow(b, a);
			item.type = '0';
			item.val = c;
			Stack_n.push(item);
			Stack_o.pop();
		}
		break;

	default:
		cerr << "Ошибка при счёте!";
		return false;
		break;
	}
	return true;
}
int Rank(char ch) {
	if (ch == 's' || ch == 'c' || ch == 't' || ch == 'g' || ch == 'e') return 4;
	if (ch == '^') return 3;
	if (ch == '+' || ch == '-')	return 1;
	if (ch == '*' || ch == '/')	return 2;
	else return 0;
}
int main()
{
	char ch;
	long double val;
	bool flag = 1;
	bool check;
	int brcount;
	stack <leks> Stack_n;
	stack <leks> Stack_o;
	leks item;
	zero.type = '0';
	zero.val = 0;
	setlocale(LC_ALL, "rus");
#if 1
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(20);
#endif
	do
	{
		check = false;
		brcount = 0;
		while (!Stack_n.empty())
			Stack_n.pop();
		while (!Stack_o.empty())
			Stack_o.pop();
		cout << "\tКалькулятор!";
		cout << "\t\t   |\t\tПоддерживаемые функции:\t\t  |\n";
		cout << "Для выхода введите любое выражение |\t\t   + - * / ^ ()\t\t\t  |\n";
		cout << setfill('=') << setw(83) << "=";
		cout << "\nВведите выражение:\n";

		while (true) {
			ch = cin.peek();
			if (ch == '\n') break;
			if (ch == ' ') {
				cin.ignore();
				continue;
			}

			if (ch >= '0' && ch <= '9' || ch == '-' && flag == 1) {
				cin >> val;
				item.type = '0';
				item.val = val;
				Stack_n.push(item);
				flag = 0;
				continue;
			}
			if (ch == '+' || ch == '-' && flag == 0 || ch == '*' || ch == '/' || ch == '^')
			{
				if (Stack_o.size() == 0) {
					item.type = ch;
					item.val = 0;
					Stack_o.push(item);
					cin.ignore();
					continue;
				}
				if (Stack_o.size() != 0 && Rank(ch) > Rank(Stack_o.top().type)) {
					item.type = ch;
					item.val = 0;
					Stack_o.push(item);
					cin.ignore();
					continue;
				}
				if (Stack_o.size() != 0 && Rank(ch) <= Rank(Stack_o.top().type)) {
					if (Math(Stack_n, Stack_o, item) == false) {
						error = true;
						break;
					}
					continue;
				}
			}
			if (ch == '(') {
				flag = 1;
				brcount++;
				item.type = ch;
				item.val = 0;
				Stack_o.push(item);
				cin.ignore();
				continue;
			}
			if (ch == ')') {
				if (brcount > 0) {
					brcount--;
					while (Stack_o.top().type != '(') {
						if (Math(Stack_n, Stack_o, item) == false) {
							error = true;
							break;
						}
						else continue;
					}
					Stack_o.pop();
					cin.ignore();
					continue;
				}
				else {
					cerr << "\nОшибка в вводе скобок!\n";
					error = true;
					break;
				}
			}
			else {
				cerr << "\nНедопустимые символы!\n";
				error = true;
				break;
			}
		}
		if (!error and !brcount) {
			while (Stack_o.size() != 0) {
				if (Math(Stack_n, Stack_o, item) == false) {
					error = true;
					break;
				}
				else continue;
			}
			if (!Stack_n.empty())
				cout << "Результат: " << Stack_n.top().val << endl;
		}
		error = false;
		cout << "\nНажмите любую клавишу для продолжения\nНажите escape для выхода\n";
		int button = _getch();
		if (button == fs or button == arrs) button = _getch();
		if (button == esc) break;
		system("cls");
		cin.ignore();
		brcount = 0;
	} while (true);
	return 0;
}