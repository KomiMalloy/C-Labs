#include <iostream>
#include<conio.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	int o = 0;
	while (o == 0)
	{
		char TENET[301];
		int l, flag;
		system("CLS");
		printf("Введите строку\n");
		for (int i = 0; i<=300; i++)
		{
			int h = _getch();
			if (((h >= 224) && (h <= 241)) || ((h >= 32) && (h <= 175)) || (h == 252))
			{
				TENET[i] = h;
				printf("%c", h);
			}

			if (h == 13)
			{
				l = i = 1;
				i = 301;
				
			}
			if (h = 8)
			{
				i--;
				TENET[i] = 0;
				printf("\b \b");
			}
		}
		printf("\nПалиндром: ");
		for (int i = l; i >= 1; i--)
		{
			for (int j = 0; j <= l - i; j++)
			{
				flag = 1;
				for (int k = 0; k <= i / 2 - 1; k++)
				{
					if (TENET[j + k] != TENET[j + i - k])
					{
						flag = 0;
						break;
					}
				}
				if (flag == 1)
				{
					for (int k = j; k <= j + i - 1; k++)
						printf("%c", TENET[k]);
					break;
				}
			}
			if (flag == 1)
				break;
		}
		int h = _getch();
		if (h == 27) o = 1;

	}
}