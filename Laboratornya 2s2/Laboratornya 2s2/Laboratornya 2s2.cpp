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
const byte backspace = 8;
const byte arrow = 224;
const byte up = 72;
const byte down = 80;
const byte equals = 61;
unsigned list_size = 0;
int main_length;
int check(char check_array[100], int check_length);

double calcul(char calcul_array[100], int calcul_length, bool* error_message)
{
	int error = check(calcul_array, calcul_length);
	if (error != 0) { *error_message = true; return(error); }
	double result(0), a(0), b(0), c(0), l(0);
	char parentheses_array[100];
	int j(0), dot_count(10); int action_a(43); int action_b(43);
	
	for (j; j <= calcul_length+1;)
	{
		if((calcul_array[j] >= zero) && (calcul_array[j] <= nine)) {a = a * 10 + calcul_array[j] - zero;}  
		if (calcul_array[j] == 44)
		{
			j++;
			while (((calcul_array[j] >= zero) && (calcul_array[j] <= nine)))
			{
				l= (calcul_array[j] - zero) ;
				a = a + l/dot_count;
				j++;
				dot_count=dot_count * 10;
				l = 0;
			}
			j--;
			dot_count = 10;
		}
		if (calcul_array[j] == 40)
		{
			j++;
			int i = 0;
			int o = 1;
			while ( o!=0)
			{
				parentheses_array[i] = calcul_array[j];
				j++;
				i++;
				if (calcul_array[j] == '(') { o++; }
				if (calcul_array[j] == ')') { o--; }
			}
			a = calcul(parentheses_array, i,error_message);
			if (*error_message != 0) { *error_message = true; return(a); }
			for (i = 0; i <= 99; i++) parentheses_array[i] = 'M';
		}
		if ((calcul_array[j] == 43) || (calcul_array[j] == 45) || (j == calcul_length + 1)) { if (action_a == 43) { result += a; }; if (action_a == 45) { result -= a; }; action_a = calcul_array[j]; a = 0; }
		
		if (calcul_array[j] == 42)
		{
			action_b = 42;
			j++;
			while ((calcul_array[j] >= zero) && (calcul_array[j] <= nine))
			{
				b = b * 10 + calcul_array[j] - zero;
				j++;
			}
			if (calcul_array[j] == 44)
			{
				j++;
				while (((calcul_array[j] >= zero) && (calcul_array[j] <= nine)))
				{
					l = (calcul_array[j] - zero);
					b = b + l / dot_count;
					j++;
					dot_count = dot_count * 10;
					l = 0;
				}
				j--;
				dot_count = 10;
			}
			if (calcul_array[j] == 40)
			{
				j++;
				int i = 0;
				int o = 1;
				while (o != 0)
				{
					parentheses_array[i] = calcul_array[j];
					j++;
					i++;
					if (calcul_array[j] == '(') { o++; }
					if (calcul_array[j] == ')') { o--; }
				}
				b = calcul(parentheses_array, i, error_message);
				if (*error_message != 0) { *error_message = true; return(a); }
				for (i = 0; i <= 99; i++) parentheses_array[i] = 'M';
			}
			if (calcul_array[j] == 94)
			{
				action_b = 94;
				j++;
				while ((calcul_array[j] >= zero) && (calcul_array[j] <= nine))
				{
					c = c * 10 + calcul_array[j] - zero;
					j++;
				}
				if (calcul_array[j] == 44)
				{
					j++;
					while (((calcul_array[j] >= zero) && (calcul_array[j] <= nine)))
					{
						l = (calcul_array[j] - zero);
						c = c + l / dot_count;
						j++;
						dot_count = dot_count * 10;
						l = 0;
					}
				}
				if (calcul_array[j] == 40)
				{
					j++;
					int i = 0;
					int o = 1;
					while (o != 0)
					{
						parentheses_array[i] = calcul_array[j];
						j++;
						i++;
						if (calcul_array[j] == '(') { o++; }
						if (calcul_array[j] == ')') { o--; }
					}
					c = calcul(parentheses_array, i, error_message);
					if (*error_message != 0) { *error_message = true; return(a); }
					for (i = 0; i <= 99; i++) parentheses_array[i] = 'M';
				}

				b = pow(b, c);
				c = 0;

			}
			a = a * b;
			b = 0;
			j--;
		}
		if (calcul_array[j] == 47)
		{
			action_b = 47;
			j++;
			while ((calcul_array[j] >= zero) && (calcul_array[j] <= nine))
			{
				b = b * 10 + calcul_array[j] - zero;
				j++;
			}
			if (calcul_array[j] == 44)
			{
				j++;
				while (((calcul_array[j] >= zero) && (calcul_array[j] <= nine)))
				{
					l = (calcul_array[j] - zero);
					b = b + l / dot_count;
					j++;
					dot_count = dot_count * 10;
					l = 0;
				}
				dot_count = 10;
			}
			if (calcul_array[j] == 40)
			{
				j++;
				int i = 0;
				int o = 1;
				while (o != 0)
				{
					parentheses_array[i] = calcul_array[j];
					j++;
					i++;
					if (calcul_array[j] == '(') { o++; }
					if (calcul_array[j] == ')') { o--; }
				}
				b = calcul(parentheses_array, i, error_message);
				if (*error_message != 0) { *error_message = true; return(a); }
				for (i = 0; i <= 99; i++) parentheses_array[i] = 'M';
			}
			if (calcul_array[j] == 94)
			{
				
				j++;
				while ((calcul_array[j] >= zero) && (calcul_array[j] <= nine))
				{
					c = c * 10 + calcul_array[j] - zero;
					j++;
				}
				if (calcul_array[j] == 44)
				{
					j++;
					while (((calcul_array[j] >= zero) && (calcul_array[j] <= nine)))
					{
						l = (calcul_array[j] - zero);
						c = c + l / dot_count;
						j++;
						dot_count = dot_count * 10;
						l = 0;
					}
				}
				if (calcul_array[j] == 40)
				{
					j++;
					int i = 0;
					int o = 1;
					while (o != 0)
					{
						parentheses_array[i] = calcul_array[j];
						j++;
						i++;
						if (calcul_array[j] == '(') { o++; }
						if (calcul_array[j] == ')') { o--; }
					}
					c = calcul(parentheses_array, i, error_message);
					if (*error_message != 0) { *error_message = true; return(a); }
					for (i = 0; i <= 99; i++) parentheses_array[i] = 'M';
				}

				b = pow(b, c);
				c = 0;

			}
			a = a / b;
			b = 0;
			j--;
		}
		if (calcul_array[j] == 94)
		{
			action_b = 94;
			j++;
			while ((calcul_array[j] >= zero) && (calcul_array[j] <= nine))
			{
				b = b * 10 + calcul_array[j] - zero;
				j++;
			}
			if (calcul_array[j] == 44)
			{
				j++;
				while (((calcul_array[j] >= zero) && (calcul_array[j] <= nine)))
				{
					l = (calcul_array[j] - zero);
					b = b + l / dot_count;
					j++;
					dot_count = dot_count * 10;
					l = 0;
				}
				dot_count = 10;
			}
			if (calcul_array[j] == 40)
			{
				j++;
				int i = 0;
				int o = 1;
				while (o != 0)
				{
					parentheses_array[i] = calcul_array[j];
					j++;
					i++;
					if (calcul_array[j] == '(') { o++; }
					if (calcul_array[j] == ')') { o--; }
				}
				b = calcul(parentheses_array, i, error_message);
				if (*error_message != 0) { *error_message = true; return(a); }
				for (i = 0; i <= 99; i++) parentheses_array[i] = 'M';
			}
			a = pow(a, b);
			b = 0;
			j--;
		}
		j++;
	}
	return(result);
}

int check(char check_array[100],int check_length)
{
	if (not(((check_array[0] >= zero) && (check_array[0] <= nine))|| (check_array[0]==40)||(check_array[0] == 45))) {return(1); }
	if (not(((check_array[check_length -1] >= zero) && (check_array[0] <= nine)) || check_array[check_length -1] == 41)) { return(4); }
	int parentheses(0);
	if (check_length==main_length) {
		for (int j = 0; j <= check_length - 1; j++)
		{
			if (check_array[j] == 40) { parentheses++; }
			if (check_array[j] == 41) { parentheses--; }
		}
		if (parentheses != 0) { return(2); }
	}
	for (int j = 0; j <= check_length -2; j++)
	{
		int a = check_array[j];
		int b = check_array[j + 1];
		if ((((a >= 42) && (a <= 47))||(a==94)) && (((b >= 42) && (b <= 47))||(b==94))) { return(3); }
	}
	for (int j = 1; j <= check_length - 1; j++)
	{
		int a = check_array[j];
		int b = check_array[j - 1];
		if ((a == 40) && ((b >= zero) && (b <= nine))) { return(51); }

	}
	for (int j = 0; j <= check_length - 2; j++)
	{
		int a = check_array[j];
		int b = check_array[j +1];
		if ((a == 41) && ((b >= zero) && (b <= nine))) { return(52); }

	}
	for (int j = 0; j <= check_length - 1; j++)
	{
		if ((check_array[j] == 44) && (not(check_array[j + 1] >= zero) && (check_array[j + 1] <= nine))) { return(7); }
	}
	for (int j = 0; j <= check_length - 1; j++)
	{
		int a = check_array[j];
		if (a == 44)
		{
			for (int k = j + 1; k <= check_length - 1; k++)
			{
				if (check_array[k] == 44) { return(6); }
				if (check_array[k] == 43) { break; }
				if (check_array[k] == 45) { break; }
				if (check_array[k] == 94) { break; }
				if (check_array[k] == 47) { break; }
				if (check_array[k] == 42) { break; }
			}
		}
	}
	return(0);
	
}

int main2()
{
	system("CLS");
	printf("Введите выражение\n");
	char main_array[100];
	int h = 0;
	int i = 0;
	while ((h != enter)&&(h!= equals))
	{

		h = _getch();
		if ((h == backspace) && (i > 0))
		{
			i--;
			main_array[i] = 0;
			printf("\b \b");
		}
		if ((h >= zero) && (h <= nine))
		{
			main_array[i]=h;
			i++;
			printf("%c", h);
			continue;

		}
		switch (h)
		{
		case 40:
		case 41:
			main_array[i] = h;
			i++;
			printf("%c", h);
			break;
		case 43:
		case 45:
		case 94:
		case 47:
		case 42:
		case 44:
			main_array[i] = h;
			i++;
			printf("%c", h);
			break;
		case esc:
			return(1);
			break;
		}
		double result;
		
		
	}

	main_length = i; bool err= 0;
	double res=calcul(main_array,main_length,&err);
	if (err)
	{
		printf("\n");
		int err_num = res;
		switch(err_num)
		{
		case 1: {printf("Ошибка, Выражение не может начинаться с этого символа"); break; }
		case 2: {printf("Ошибка, Несооствие числа открывающих и закрывающих скобок"); break; }
		case 3: {printf("Ошибка, Два подряд идущих знака действия"); break; }
		case 4: {printf("Ошибка, Выражение не может заканчиваться этим символом"); break; }
		case 51: {printf("Ошибка, Обнаружено число перед скобкой,\nЕсли вы хотите умножить скобку на число, используйте знак '*'."); break; }
		case 52: {printf("Ошибка, Обнаружено число после скобки,\nЕсли вы хотите умножить скобку на число, используйте знак '*'."); break; }
		case 6: {printf("Ошибка, Обнаружено более 1-й запятой в числе"); break; }
		case 7: {printf("Ошибка, После запятой ничего нет"); break; }
		}
		printf("\n");
	}
	else printf(" = %f\n", res);
	system("pause");


	return(0);
}

int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	while (main2() == 0){}
}