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
const byte X = 120;
const byte Y = 'y';
unsigned list_size = 0;

void gotoxy(int x, int y)
{
	COORD coordinate;
	coordinate.X = x-1;
	coordinate.Y = y-1;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinate);
}

int check(char check_array[1000], int check_length);

double calcul(char calcul_array[1000], int calcul_length, bool* error_message)
{
	int error = check(calcul_array, calcul_length);
	if (error != 0) { *error_message = true; return(error); }
	double result(0), a(0), b(0), c(0), l(0);
	char parentheses_array[100];
	int j(0), dot_count(10); int action_a(43); int action_b(43);

	for (j; j <= calcul_length + 1;)
	{
		if ((calcul_array[j] >= zero) && (calcul_array[j] <= nine)) { a = a * 10 + calcul_array[j] - zero; }
		if (calcul_array[j] == 44)
		{
			j++;
			while (((calcul_array[j] >= zero) && (calcul_array[j] <= nine)))
			{
				l = (calcul_array[j] - zero);
				a = a + l / dot_count;
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
			while (calcul_array[j] != 41)
			{
				parentheses_array[i] = calcul_array[j];
				j++;
				i++;

			}
			a = calcul(parentheses_array, i, error_message);
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
				while (calcul_array[j] != 41)
				{
					parentheses_array[i] = calcul_array[j];
					j++;
					i++;

				}
				b = calcul(parentheses_array, i, error_message);
				if (*error_message != 0) { *error_message = true; return(b); }
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
					while (calcul_array[j] != 41)
					{
						parentheses_array[i] = calcul_array[j];
						j++;
						i++;

					}
					c = calcul(parentheses_array, i, error_message);
					if (*error_message != 0) { *error_message = true; return(c); }
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
				while (calcul_array[j] != 41)
				{
					parentheses_array[i] = calcul_array[j];
					j++;
					i++;

				}
				b = calcul(parentheses_array, i, error_message);
				if (*error_message != 0) { *error_message = true; return(b); }
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
					while (calcul_array[j] != 41)
					{
						parentheses_array[i] = calcul_array[j];
						j++;
						i++;

					}
					c = calcul(parentheses_array, i, error_message);
					if (*error_message != 0) { *error_message = true; return(c); }
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
				while (calcul_array[j] != 41)
				{
					parentheses_array[i] = calcul_array[j];
					j++;
					i++;

				}
				b = calcul(parentheses_array, i, error_message);
				if (*error_message != 0) { *error_message = true; return(b); }
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

int check(char check_array[1000], int check_length)
{
	if (not(((check_array[0] >= zero) && (check_array[0] <= nine)) || (check_array[0] == 40) || (check_array[0] == 45) || (check_array[0] == X) || (check_array[0] == Y))) { return(1); }
	if (not(((check_array[check_length - 1] >= zero) && (check_array[check_length - 1] <= nine)) || (check_array[check_length - 1] == 41) || (check_array[check_length - 1] == X) || (check_array[check_length - 1] == Y))) { return(4); }
	int parentheses(0);
	for (int j = 0; j <= check_length - 1; j++)
	{
		if (check_array[j] == 40) { parentheses++; }
		if (check_array[j] == 41) { parentheses--; }
	}
	if (parentheses != 0) { return(2); }
	for (int j = 0; j <= check_length - 2; j++)
	{
		int a = check_array[j];
		int b = check_array[j + 1];
		if ((((a >= 42) && (a <= 47)) || (a == 94)) && (((b >= 42) && (b <= 47)) || (b == 94))) { return(3); }
	}
	for (int j = 1; j <= check_length - 1; j++)
	{
		int a = check_array[j];
		int b = check_array[j - 1];
		if ((a == 40) && (((b >= zero) && (b <= nine))||(b==X) || (b == Y))) { return(51); }

	}
	for (int j = 0; j <= check_length - 2; j++)
	{
		int a = check_array[j];
		int b = check_array[j + 1];
		if ((a == 41) && (((b >= zero) && (b <= nine))||(b==X) || (b == Y))) { return(52); }

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
				if (check_array[k] == X) { return(6); }
				if (check_array[k] == 43) { break; }
				if (check_array[k] == 45) { break; }
				if (check_array[k] == 94) { break; }
				if (check_array[k] == 47) { break; }
				if (check_array[k] == 42) { break; }
			}
		}

	}
	for (int j = 1; j <= check_length - 2; j++)
	{
		if ((check_array[j] == X)|| (check_array[j] == Y))
		{
			if (check_array[j + 1] == X) { return (8); }
			if (check_array[j + 1] == Y) { return (8); }
			if (check_array[j + 1] == 40) { return (8); }
			if (check_array[j + 1] == 44) { return (8); }
			if ((check_array[j + 1]>=zero)&&(check_array[j + 1] <= nine)) { return (8); }
			if (check_array[j - 1] == X) { return (8); }
			if (check_array[j - 1] == 41) { return (8); }
			if (check_array[j - 1] == 44) { return (8); }
			if ((check_array[j - 1] >= zero) && (check_array[j - 1] <= nine)) { return (8); }
		}

	}
	return(0);

}

int powe(int a, int b)
{
	int x = 1;
	for (int i = 1; i <= b; i++)
	{
		x = x * a;
	}
	if (b == 0) { x = 1; }
	return(x);
}

int rounde(double x)
{
	int y = x;
	return y;
}

double teqila(char teqila_array1[1000], int teqila_length, double x_data,double y_data, double teqila_scale)
{
	char teqila_array[1000];
	for (int r = 0; r < 1000; r++) { teqila_array[r] = teqila_array1[r]; }
	double Yqa,Xqa;
	int  Yqb,Xqb, Xl(0),Yl(0);
	bool Yminus = false;
	bool Xminus = false;
	if (x_data < 0) { Xminus = true; }
	if (y_data < 0) { Yminus = true; }
	x_data=fabs(x_data);
	y_data = fabs(y_data);
	if (teqila_scale < 1)
	{
		int Ynum_after_dot(0);
		int Ynum_before_dot(0);
		int Xnum_after_dot(0);
		int Xnum_before_dot(0);
		Xqa = teqila_scale;
		while (Xqa != 1)
		{
			Xnum_after_dot++;
			Xqa = Xqa * 10;
		}
		Yqa = teqila_scale;
		while (Yqa != 1)
		{
			Ynum_after_dot++;
			Yqa = Yqa * 10;
		}

		Xqb = rounde(x_data);
		if (Xqb != 0) {
			while (Xqb != 0)
			{
				Xnum_before_dot++;
				Xqb = Xqb / 10;
			}
		}
		else { Xnum_before_dot = 1; }
		Yqb = rounde(y_data);
		if (Yqb != 0) {
			while (Yqb != 0)
			{
				Ynum_before_dot++;
				Yqb = Yqb / 10;
			}
		}
		else { Ynum_before_dot = 1; }
		Xl = Xnum_before_dot + 1 + Xnum_after_dot;
		Yl = Ynum_before_dot + 1 + Ynum_after_dot;
		char Xteqila_data[100];
		char Yteqila_data[100];
		int Xbefore=rounde(x_data);
		int Ybefore = rounde(y_data);
		x_data = x_data - Xbefore;
		y_data = y_data - Ybefore;
		int Xafter = (x_data * (powe(10, Xnum_after_dot)));
		int Yafter = (y_data * (powe(10, Ynum_after_dot)));
		//after = after % (powe(10, num_before_dot+1));
		for (int j = 0; j <= Xnum_before_dot - 1; j++)
		{
			Xteqila_data[j] = (Xbefore / (powe(10, Xnum_before_dot - 1 - j))) + zero;
			Xbefore = Xbefore % powe(10, Xnum_before_dot - 1 - j);
		}
		for (int j = 0; j <= Ynum_before_dot - 1; j++)
		{
			Yteqila_data[j] = (Ybefore / (powe(10, Ynum_before_dot - 1 - j))) + zero;
			Ybefore = Ybefore % powe(10, Ynum_before_dot - 1 - j);
		}
		Xteqila_data[Xnum_before_dot] = ',';
		Yteqila_data[Ynum_before_dot] = ',';
		for (int j = 0; j <= Xnum_after_dot - 1; j++)
		{
			Xteqila_data[Xnum_before_dot+1+j] = (Xafter / (powe(10, Xnum_after_dot - 1-j ))) + zero;
			Xafter = Xafter % powe(10, Xnum_after_dot - 1-j );
		}
		for (int j = 0; j <= Ynum_after_dot - 1; j++)
		{
			Yteqila_data[Ynum_before_dot + 1 + j] = (Yafter / (powe(10, Ynum_after_dot - 1 - j))) + zero;
			Yafter = Yafter % powe(10, Ynum_after_dot - 1 - j);
		}
		if (Xminus)
		{
			for (int i = Xl - 1; i >= 0; i--) { Xteqila_data[i + 1] = Xteqila_data[i]; }
			Xl++;
			for (int i = Xl - 1; i >= 1; i--) {Xteqila_data[i + 1] = Xteqila_data[i]; }
			Xl++;
			Xteqila_data[0] = '(';
			Xteqila_data[1] = '-';
			Xteqila_data[Xl] = ')';
			Xl++;
		}if (Yminus)
		{
			for (int i = Yl - 1; i >= 0; i--) { Yteqila_data[i + 1] = Yteqila_data[i]; }
			Yl++;
			for (int i = Yl - 1; i >= 1; i--) { Yteqila_data[i + 1] = Yteqila_data[i]; }
			Yl++;
			Yteqila_data[0] = '(';
			Yteqila_data[1] = '-';
			Yteqila_data[Yl] = ')';
			Yl++;
		}
		for (int j=0; j <= teqila_length-2; j++)
		{
			if (teqila_array[j] == 'x')
			{
				for (int i=1; i <= Xl-1; i++)
				{
					for (int k = teqila_length-1; k >= j+1; k--) { teqila_array[k + 1] = teqila_array[k]; }
					teqila_length += 1;
				}
				for (int k = 0; k <= Xl - 1; k++)
				{
					teqila_array[j + k] = Xteqila_data[k];
				}
			}
		}
		for (int j = 0; j <= teqila_length - 2; j++)
		{
			if (teqila_array[j] == 'y')
			{
				for (int i = 1; i <= Yl - 1; i++)
				{
					for (int k = teqila_length - 1; k >= j + 1; k--) { teqila_array[k + 1] = teqila_array[k]; }
					teqila_length += 1;
				}
				for (int k = 0; k <= Yl - 1; k++)
				{
					teqila_array[j + k] = Yteqila_data[k];
				}
			}
		}
		
		if (teqila_array[teqila_length-1] == 'x')
		{
			for (int k = 0; k <= Xl - 1; k++)
			{
				teqila_array[teqila_length-1 + k] = Xteqila_data[k];
			}
			teqila_length += Xl-1;
		}
		if (teqila_array[teqila_length - 1] == 'y')
		{
			for (int k = 0; k <= Yl - 1; k++)
			{
				teqila_array[teqila_length - 1 + k] = Yteqila_data[k];
			}
			teqila_length += Yl - 1;
		}
	}

	if (teqila_scale >= 1)
	{
		
		

		Xqb = rounde(x_data);
		if (Xqb != 0) {
			while (Xqb != 0)
			{
				Xl++;
				Xqb = Xqb / 10;
			}
		}
		else { Xl = 1; }
		Yqb = rounde(y_data);
		if (Yqb != 0) {
			while (Yqb != 0)
			{
				Yl++;
				Yqb = Yqb / 10;
			}
		}
		else { Yl = 1; }
		
		char Xteqila_data[100]; char Yteqila_data[100];
		int Xbefore = rounde(x_data);
		int Ybefore = rounde(y_data);
		for (int j = 0; j <= Xl - 1; j++)
		{
			Xteqila_data[j] = (Xbefore / (powe(10, Xl - 1 - j))) + zero;
			Xbefore = Xbefore % powe(10, Xl - 1 - j);
		}
		for (int j = 0; j <= Yl - 1; j++)
		{
			Yteqila_data[j] = (Ybefore / (powe(10, Yl - 1 - j))) + zero;
			Ybefore = Ybefore % powe(10, Yl - 1 - j);
		}
		if (Xminus)
		{
			for (int i = Xl - 1; i >= 0; i--) { Xteqila_data[i + 1] = Xteqila_data[i]; }
			Xl++;
			for (int i = Xl - 1; i >= 1; i--) { Xteqila_data[i + 1] = Xteqila_data[i]; }
			Xl++;
			Xteqila_data[0] = '(';
			Xteqila_data[1] = '-';
			Xteqila_data[Xl] = ')';
			Xl++;
		}
		if (Yminus)
		{
			for (int i = Yl - 1; i >= 0; i--) { Yteqila_data[i + 1] = Yteqila_data[i]; }
			Yl++;
			for (int i = Yl - 1; i >= 1; i--) { Yteqila_data[i + 1] = Yteqila_data[i]; }
			Yl++;
			Yteqila_data[0] = '(';
			Yteqila_data[1] = '-';
			Yteqila_data[Yl] = ')';
			Yl++;
		}
		for (int j=0; j <= teqila_length - 1; j++)
		{
			if (teqila_array[j] == 'x')
			{
				for (int i = j + 1; i <= Xl + j - 1; i++)
				{
					for (int k = teqila_length - 1; k >= i; k--) { teqila_array[k + 1] = teqila_array[k]; }
					teqila_length += 1;
				}
				for (int k = 0; k <= Xl - 1; k++)
				{
					teqila_array[j + k] = Xteqila_data[k];
				}
			}
		}for (int j = 0; j <= teqila_length - 1; j++)
		{
			if (teqila_array[j] == 'y')
			{
				for (int i = j + 1; i <= Yl + j - 1; i++)
				{
					for (int k = teqila_length - 1; k >= i; k--) { teqila_array[k + 1] = teqila_array[k]; }
					teqila_length += 1;
				}
				for (int k = 0; k <= Yl - 1; k++)
				{
					teqila_array[j + k] = Yteqila_data[k];
				}
			}
		}
		
		if (teqila_array[teqila_length] == 'x')
		{
			for (int k = 0; k <= Xl - 1; k++)
			{
				teqila_array[teqila_length + k] = Xteqila_data[k];
			}
			teqila_length += Xl;
		}
		if (teqila_array[teqila_length] == 'y')
		{
			for (int k = 0; k <= Yl - 1; k++)
			{
				teqila_array[teqila_length + k] = Yteqila_data[k];
			}
			teqila_length += Yl;
		}
	}
	bool err=0;
	double res = calcul(teqila_array, teqila_length, &err);
	return(res);


}

void graphic( char graph_array[1000], int graph_array_length,  double graph_scale, int zero_coord_X_data, int zero_coord_Y_data)

{
	
		
		int x_coord = 1;
		double x = (x_coord + zero_coord_X_data) * graph_scale;
		int y_coord=-1;
		double y;
		system("CLS");
		setlocale(LC_ALL, "C");
		if ((zero_coord_X_data <= 0) && (zero_coord_X_data >= -101))
		{
			for (int p = 1; p <= 25; p++) { gotoxy(-zero_coord_X_data, p); printf("%c", 179); }
		}
		if ((zero_coord_Y_data >= 0) && (zero_coord_Y_data <= 25))
		{
			for (int p = 1; p <= 101; p++) { gotoxy(p, zero_coord_Y_data); printf("%c", 196); }
		}
		if (((zero_coord_X_data <= 0) && (zero_coord_X_data >= -101)) && ((zero_coord_Y_data >= 0) && (zero_coord_Y_data <= 25))) { gotoxy(-zero_coord_X_data, zero_coord_Y_data); printf("%c", 197); }
		setlocale(LC_ALL, "RUSSIAN");
		double result[25];
		double scale_control = graph_scale;
		bool flag = false;
		while (x_coord <= 100)
		{
			scale_control = graph_scale; flag = true;
			for (int i = 0; i <= 24; i++) { result[i] = 0; }
			y_coord = 1;
			x = (x_coord + zero_coord_X_data) * graph_scale;
		
			while (y_coord <= 25)
			{
				y= (-y_coord + zero_coord_Y_data) * graph_scale;
				if ((abs(teqila(graph_array, graph_array_length, x, y, graph_scale)))<=graph_scale/2.5) { gotoxy(x_coord, y_coord);  printf("*"); }
				y_coord++;
			}
			
		
			x_coord++;
		}

}

int main2()
{
	system("CLS");
	printf("Введите выражение\n0=");
	char main_array[1000];
	int h = 0;
	int i = 0;
	while ((h != enter) && (h != equals))
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
			main_array[i] = h;
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
		case 'x':
			main_array[i] = h;
			i++;
			printf("%c", h);
			break;
		case 'y':
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

	int main_length = i; bool err = 0;
	char kl[1000];
	for (int i = 0; i <= 999; i++)
	{
		kl[i] = main_array[i];
		if (kl[i] == 'x') { kl[i] = 1 + zero; }
	}
	double res = calcul(main_array, main_length, &err);
	if (err)
	{
		printf("\n");
		int err_num = res;
		switch (err_num)
		{
		case 1: {printf("Ошибка, Выражение не может начинаться с этого символа"); break; }
		case 2: {printf("Ошибка, Несооствие числа открывающих и закрывающих скобок"); break; }
		case 3: {printf("Ошибка, Два подряд идущих знака действия"); break; }
		case 4: {printf("Ошибка, Выражение не может заканчиваться этим символом"); break; }
		case 51: {printf("Ошибка, Обнаружено число или переменная перед скобкой,\nЕсли вы хотите умножить скобку на число, используйте знак '*'."); break; }
		case 52: {printf("Ошибка, Обнаружено число или переменная после скобки,\nЕсли вы хотите умножить скобку на число, используйте знак '*'."); break; }
		case 6: {printf("Ошибка, Обнаружено более 1-й запятой в числе"); break; }
		case 7: {printf("Ошибка, После запятой ничего нет"); break; }
		case 8: {printf("Ошибка, Неверная постановка переменной"); break; }
		}
		printf("\n");
	}
	double scale = 1;
	int zero_X = -50;
	int zero_Y = 12;
	h = 0;
	while ((h != esc) && (h != enter))
	{
		graphic(main_array, main_length, scale, zero_X, zero_Y);
		h = _getch();
		switch (h)
		{
		case arrow:
			h = _getch();
			if (h == 72) { zero_Y++; }
			if (h == 80) { zero_Y--; }
			if (h == 77) { zero_X++; }
			if (h == 75) { zero_X--; }
			break;

		case 43: scale = scale / 10; break;
		case 45: scale = scale * 10; break;
		}
	}
	return(0);
}

int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	while (main2() == 0) {}
}