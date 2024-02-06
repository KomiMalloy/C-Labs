
#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int num_com = 0, sim, k = 1, pau, figure = 0; int dl = 0; long long otv = 0, first = 0, sec = 0, otv1 = 0, otv2 = 0, otv3 = 0, otv4 = 0; char str[100]; char str2[100]; char str1[100]; bool IsBreak = false; double otv6 = 0, otv5 = 0;
    bool c = false;
    const int zero = 48;
    const int nine = 57;
    const int enter = 13;
    const int minus = 45;
    setlocale(0, "");
    do {
        cout << "Первое число " << first << endl;
        cout << "Второе число " << sec << endl;
        cout << "Выберите действие, перемещая стрелочку с помощью клавиатуры" << endl;
        cout << "или введя номер действия(для ввода номера нажмите backspace) " << endl;
        cout << "Выберите цифру:" << endl;
        cout << "=>1.Сложение" << endl;
        cout << "2.Вычитание" << endl;
        cout << "3.Умножение" << endl;
        cout << "4.Деление" << endl;
        cout << "5.Возведение в степень" << endl;
        cout << "6.Корень из числа" << endl;
        cout << "7.Введите первое натуральное число" << endl;
        cout << "8.Введите второе натуральное число" << endl;
        int s = 1;
        int in = _getch();
        while (in != 13 && in != 8) {
            if (in == 80) s++;//если клавиша вверх, то стрелочка вверх
            if (in == 72) s--;
            while (s <= 0) { s += 8; };
            while (s >= 9) { s -= 8; };
            if (s == 1) {
                system("cls");
                cout << "Первое число " << first << endl;
                cout << "Второе число " << sec << endl;
                cout << "Выберите действие, перемещая стрелочку с помощью клавиатуры" << endl;
                cout << "или введя номер действия(для ввода номера нажмите backspace) " << endl;
                cout << "Выберите цифру:" << endl;
                cout << "=>1.Сложение" << endl;
                cout << "2.Вычитание" << endl;
                cout << "3.Умножение" << endl;
                cout << "4.Деление" << endl;
                cout << "5.Возведение в степень" << endl;
                cout << "6.Корень из числа" << endl;
                cout << "7.Введите первое натуральное число" << endl;
                cout << "8.Введите второе натуральное число" << endl;
                in = _getch();
            }
            if (s == 2) {
                system("cls");
                cout << "Первое число " << first << endl;
                cout << "Второе число " << sec << endl;
                cout << "Выберите действие, перемещая стрелочку с помощью клавиатуры" << endl;
                cout << "или введя номер действия(для ввода номера нажмите backspace) " << endl;
                cout << "Выберите цифру:" << endl;
                cout << "1.Сложение" << endl;
                cout << "=>2.Вычитание" << endl;
                cout << "3.Умножение" << endl;
                cout << "4.Деление" << endl;
                cout << "5.Возведение в степень" << endl;
                cout << "6.Корень из числа" << endl;
                cout << "7.Введите первое натуральное число" << endl;
                cout << "8.Введите второе натуральное число" << endl;
                in = _getch();
            }
            if (s == 3) {
                system("cls");
                cout << "Первое число " << first << endl;
                cout << "Второе число " << sec << endl;
                cout << "Выберите действие, перемещая стрелочку с помощью клавиатуры" << endl;
                cout << "или введя номер действия(для ввода номера нажмите backspace) " << endl;
                cout << "Выберите цифру:" << endl;
                cout << "1.Сложение" << endl;
                cout << "2.Вычитание" << endl;
                cout << "=>3.Умножение" << endl;
                cout << "4.Деление" << endl;
                cout << "5.Возведение в степень" << endl;
                cout << "6.Корень из числа" << endl;
                cout << "7.Введите первое натуральное число" << endl;
                cout << "8.Введите второе натуральное число" << endl;
                in = _getch();
            }
            if (s == 4) {
                system("cls");
                cout << "Первое число " << first << endl;
                cout << "Второе число " << sec << endl;
                cout << "Выберите действие, перемещая стрелочку с помощью клавиатуры" << endl;
                cout << "или введя номер действия(для ввода номера нажмите backspace) " << endl;
                cout << "Выберите цифру:" << endl;
                cout << "1.Сложение" << endl;
                cout << "2.Вычитание" << endl;
                cout << "3.Умножение" << endl;
                cout << "=>4.Деление" << endl;
                cout << "5.Возведение в степень" << endl;
                cout << "6.Корень из числа" << endl;
                cout << "7.Введите первое натуральное число" << endl;
                cout << "8.Введите второе натуральное число" << endl;
                in = _getch();
            }
            if (s == 5) {
                system("cls");
                cout << "Первое число " << first << endl;
                cout << "Второе число " << sec << endl;
                cout << "Выберите действие, перемещая стрелочку с помощью клавиатуры" << endl;
                cout << "или введя номер действия(для ввода номера нажмите backspace) " << endl;
                cout << "Выберите цифру:" << endl;
                cout << "1.Сложение" << endl;
                cout << "2.Вычитание" << endl;
                cout << "3.Умножение" << endl;
                cout << "4.Деление" << endl;
                cout << "=>5.Возведение в степень" << endl;
                cout << "6.Корень из числа" << endl;
                cout << "7.Введите первое натуральное число" << endl;
                cout << "8.Введите второе натуральное число" << endl;
                in = _getch();
            }
            if (s == 6) {
                system("cls");
                cout << "Первое число " << first << endl;
                cout << "Второе число " << sec << endl;
                cout << "Выберите действие, перемещая стрелочку с помощью клавиатуры" << endl;
                cout << "или введя номер действия(для ввода номера нажмите backspace) " << endl;
                cout << "Выберите цифру:" << endl;
                cout << "1.Сложение" << endl;
                cout << "2.Вычитание" << endl;
                cout << "3.Умножение" << endl;
                cout << "4.Деление" << endl;
                cout << "5.Возведение в степень" << endl;
                cout << "=>6.Корень из числа" << endl;
                cout << "7.Введите первое натуральное число" << endl;
                cout << "8.Введите второе натуральное число" << endl;
                in = _getch();
            }
            if (s == 7) {
                system("cls");
                cout << "Первое число " << first << endl;
                cout << "Второе число " << sec << endl;
                cout << "Выберите действие, перемещая стрелочку с помощью клавиатуры" << endl;
                cout << "или введя номер действия(для ввода номера нажмите backspace) " << endl;
                cout << "Выберите цифру:" << endl;
                cout << "1.Сложение" << endl;
                cout << "2.Вычитание" << endl;
                cout << "3.Умножение" << endl;
                cout << "4.Деление" << endl;
                cout << "5.Возведение в степень" << endl;
                cout << "6.Корень из числа" << endl;
                cout << "=>7.Введите первое натуральное число" << endl;
                cout << "8.Введите второе натуральное число" << endl;
                in = _getch();
            }
            if (s == 8) {
                system("cls");
                cout << "Первое число " << first << endl;
                cout << "Второе число " << sec << endl;
                cout << "Выберите действие, перемещая стрелочку с помощью клавиатуры" << endl;
                cout << "или введя номер действия(для ввода номера нажмите backspace) " << endl;
                cout << "Выберите цифру:" << endl;
                cout << "1.Сложение" << endl;
                cout << "2.Вычитание" << endl;
                cout << "3.Умножение" << endl;
                cout << "4.Деление" << endl;
                cout << "5.Возведение в степень" << endl;
                cout << "6.Корень из числа" << endl;
                cout << "7.Введите первое натуральное число" << endl;
                cout << "=>8.Введите второе натуральное число" << endl;
                in = _getch();
            }
        }
        if (in == 13) {
            if (s == 1 || s == 2 || s == 3 || s == 4 || s == 5 || s == 6) {
                if (first == 0) {
                    cout << "Введите первое натуральное число" << endl;
                    int c = 0;  int p = 0; int zn = 0; int nul = 0;
                    for (; p == 0;) { sim = _getch();  if ((sim >= zero) && (sim <= nine)) { c = c * 10 + sim - zero; p = 1; cout << sim - zero; } if ((sim == minus) && (zn == 0)) { zn = 1; cout << "-"; } if (sim == zero) { nul = 1; } }
                    p = 0;
                    if (nul == 0) { for (; p != 8;) { sim = _getch(); if (sim == enter) { p = 8; }; if ((sim >= zero) && (sim <= nine)) { c = c * 10 + sim - zero; printf("%d", sim - zero); p++; } } }
                    p = 0;
                    if (nul == 1) { for (; p == 0;) { sim = _getch(); if (sim == enter) { p = 1; }; } }
                    if (zn == 1) { c = -c; }
                    first = c;
                    cout << endl;
                
                    cout << "Введите второе натуральное число" << endl; //cin str;
                     c = 0;   p = 0;  zn = 0;  nul = 0;
                    for (; p == 0;) { sim = _getch();  if ((sim >= zero) && (sim <= nine)) { c = c * 10 + sim - zero; p = 1; cout << sim - zero; } if ((sim == minus) && (zn == 0)) { zn = 1; printf("-"); } if (sim == zero) { nul = 1; } }
                    p = 0;
                    if (nul == 0) { for (; p != 8;) { sim = _getch(); if (sim == enter) { p = 8; }; if ((sim >= zero) && (sim <= nine)) { c = c * 10 + sim - zero; printf("%d", sim - zero); p++; } } }
                    p = 0;
                    if (nul == 1) { for (; p == 0;) { sim = _getch(); if (sim == enter) { p = 1; }; } }
                    if (zn == 1) { c = -c; }
                    sec = c;
                }
                cout << endl;
                otv1 = first + sec;
                otv2 = first - sec;
                otv3 = first * sec;
                otv6 = pow(first, 1.0 / sec);
                if (s == 1) {
                    cout << "Результат " << otv1 << endl;
                    otv == otv1;
                }
                if (s == 2) {
                    cout << "Результат " << otv2 << endl;
                    otv == otv2;
                }
                if (s == 3) {
                    cout << "Результат " << otv3 << endl;
                    otv = otv3;
                }
                if (s == 4) {
                    if (sec != 0) {
                        otv4 = first / sec;
                        cout << "Результат: " << endl;
                        cout << "Целая часть:" << otv4 << "     Остаток от деления:" << first % sec << endl;
                        otv == otv4;
                    }
                    else { cout << "Нет ответа, так как делить на ноль нельзя" << endl; }
                }
                otv5 = pow(first, sec);
                if (s == 5) {
                    if (sec > 42) {
                        cout << "Вы ввели слишком большой показатель степени " << endl;
                    }
                    else {
                        cout << "Результат " << otv5 << endl;
                        otv == otv5;
                    };
                }
                if (s == 6) {
                    if (sec > 100000) {
                        cout << "Вы ввели cлишком большую степень корня" << endl;
                    }
                    else if (sec == 0) {
                        cout << "Степень корня не может быть нулем" << endl;
                    }
                    else
                    {
                        cout << "Результат " << otv6 << endl;
                    }
                    otv == otv6;
                    
                }
                system("pause");
                 pau = 1;
            }
            else if (s == 7) {
                if (first == 0) {
                    cout << "Введите первое  натуральное число" << endl;
                    int c = 0;  int p = 0; int zn = 0; int nul = 0;
                    for (; p == 0;) { sim = _getch();  if ((sim >= zero) && (sim <= nine)) { c = c * 10 + s - zero; p = 1; cout << sim - zero; } if ((sim == minus) && (zn == 0)) { zn = 1; printf("-"); } if (sim == zero) { nul = 1; } }
                    p = 0;
                    if (nul == 0) { for (; p != 8;) { sim = _getch(); if (sim == enter) { p = 8; }; if ((sim >= zero) && (sim <= nine)) { c = c * 10 + sim - zero; printf("%d", sim - zero); p++; } } }
                    p = 0;
                    if (nul == 1) { for (; p == 0;) { sim = _getch(); if (sim == enter) { p = 1; }; } }
                    if (zn == 1) { c = -c; }
                    first = c;
                }
                }
                else {
                    first = 0;
                    cout << "Введите первое  натуральное число" << endl;
                    int c = 0;  int p = 0; int zn = 0; int nul = 0;
                    for (; p == 0;) { sim = _getch();  if ((sim >= zero) && (sim <= nine)) { c = c * 10 + s - zero; p = 1; cout << sim - zero; } if ((sim == minus) && (zn == 0)) { zn = 1; printf("-"); } if (sim == zero) { nul = 1; } }
                    p = 0;
                    if (nul == 0) { for (; p != 8;) { sim = _getch(); if (sim == enter) { p = 8; }; if ((sim >= zero) && (sim <= nine)) { c = c * 10 + sim - zero; printf("%d", sim - zero); p++; } } }
                    p = 0;
                    if (nul == 1) { for (; p == 0;) { sim = _getch(); if (sim == enter) { p = 1; }; } }
                    if (zn == 1) { c = -c; }
                    first = c;
                };
                system("cls");
                cout << "Первое число " << first << endl;
                cout << "Второе число " << sec << endl;
                cout << "Выберите действие, перемещая стрелочку с помощью клавиатуры" << endl;
                cout << "или введя номер действия(для ввода номера нажмите backspace) " << endl;
                cout << "Выберите цифру:" << endl;
                cout << "=>1.Сложение" << endl;
                cout << "2.Вычитание" << endl;
                cout << "3.Умножение" << endl;
                cout << "4.Деление" << endl;
                cout << "5.Возведение в степень" << endl;
                cout << "6.Корень из числа" << endl;
                cout << "7.Введите второе натуральное число" << endl;
                int s = 1;
                int in = _getch();
                while (in != 13 && in != 8) {
                    if (in == 80) s++;
                    if (in == 72) s--;
                    while (s <= 0) { s += 7; };
                    while (s >= 8) { s -= 7; };
                    if (s == 1) {
                        system("cls");
                        cout << "Первое число " << first << endl;
                        cout << "Второе число " << sec << endl;
                        cout << "Выберите действие, перемещая стрелочку с помощью клавиатуры" << endl;
                        cout << "или введя номер действия(для ввода номера нажмите backspace) " << endl;
                        cout << "Выберите цифру:" << endl;
                        cout << "=>1.Сложение" << endl;
                        cout << "2.Вычитание" << endl;
                        cout << "3.Умножение" << endl;
                        cout << "4.Деление" << endl;
                        cout << "5.Возведение в степень" << endl;
                        cout << "6.Корень из числа" << endl;
                        cout << "7.Введите второе натуральное число" << endl;
                        in = _getch();
                    }
                    if (s == 2) {
                        system("cls");
                        cout << "Первое число " << first << endl;
                        cout << "Второе число " << sec << endl;
                        cout << "Выберите действие, перемещая стрелочку с помощью клавиатуры" << endl;
                        cout << "или введя номер действия(для ввода номера нажмите backspace) " << endl;
                        cout << "Выберите цифру:" << endl;
                        cout << "1.Сложение" << endl;
                        cout << "=>2.Вычитание" << endl;
                        cout << "3.Умножение" << endl;
                        cout << "4.Деление" << endl;
                        cout << "5.Возведение в степень" << endl;
                        cout << "6.Корень из числа" << endl;
                        cout << "7.Введите второе натуральное число" << endl;
                        in = _getch();
                    }
                    if (s == 3) {
                        system("cls");
                        cout << "Первое число " << first << endl;
                        cout << "Второе число " << sec << endl;
                        cout << "Выберите действие, перемещая стрелочку с помощью клавиатуры" << endl;
                        cout << "или введя номер действия(для ввода номера нажмите backspace) " << endl;
                        cout << "Выберите цифру:" << endl;
                        cout << "1.Сложение" << endl;
                        cout << "2.Вычитание" << endl;
                        cout << "=>3.Умножение" << endl;
                        cout << "4.Деление" << endl;
                        cout << "5.Возведение в степень" << endl;
                        cout << "6.Корень из числа" << endl;
                        cout << "7.Введите второе натуральное число" << endl;

                        in = _getch();
                    }
                    if (s == 4) {
                        system("cls");
                        cout << "Первое число " << first << endl;
                        cout << "Второе число " << sec << endl;
                        cout << "Выберите действие, перемещая стрелочку с помощью клавиатуры" << endl;
                        cout << "или введя номер действия(для ввода номера нажмите backspace) " << endl;
                        cout << "Выберите цифру:" << endl;
                        cout << "1.Сложение" << endl;
                        cout << "2.Вычитание" << endl;
                        cout << "3.Умножение" << endl;
                        cout << "=>4.Деление" << endl;
                        cout << "5.Возведение в степень" << endl;
                        cout << "6.Корень из числа" << endl;
                        cout << "7.Введите второе натуральное число" << endl;
                        in = _getch();
                    }
                    if (s == 5) {
                        system("cls");
                        cout << "Первое число " << first << endl;
                        cout << "Второе число " << sec << endl;
                        cout << "Выберите действие, перемещая стрелочку с помощью клавиатуры" << endl;
                        cout << "или введя номер действия(для ввода номера нажмите backspace) " << endl;
                        cout << "Выберите цифру:" << endl;
                        cout << "1.Сложение" << endl;
                        cout << "2.Вычитание" << endl;
                        cout << "3.Умножение" << endl;
                        cout << "4.Деление" << endl;
                        cout << "=>5.Возведение в степень" << endl;
                        cout << "6.Корень из числа" << endl;
                        cout << "7.Введите второе натуральное число" << endl;
                        in = _getch();
                    }
                    if (s == 6) {
                        system("cls");
                        cout << "Первое число " << first << endl;
                        cout << "Второе число " << sec << endl;
                        cout << "Выберите действие, перемещая стрелочку с помощью клавиатуры" << endl;
                        cout << "или введя номер действия(для ввода номера нажмите backspace) " << endl;
                        cout << "Выберите цифру:" << endl;
                        cout << "1.Сложение" << endl;
                        cout << "2.Вычитание" << endl;
                        cout << "3.Умножение" << endl;
                        cout << "4.Деление" << endl;
                        cout << "5.Возведение в степень" << endl;
                        cout << "=>6.Корень из числа" << endl;
                        cout << "7.Введите второе натуральное число" << endl;
                        in = _getch();
                    }
                    if (s == 7) {
                        system("cls");
                        cout << "Первое число " << first << endl;
                        cout << "Второе число " << sec << endl;
                        cout << "Выберите действие, перемещая стрелочку с помощью клавиатуры" << endl;
                        cout << "или введя номер действия(для ввода номера нажмите backspace) " << endl;
                        cout << "Выберите цифру:" << endl;
                        cout << "1.Сложение" << endl;
                        cout << "2.Вычитание" << endl;
                        cout << "3.Умножение" << endl;
                        cout << "4.Деление" << endl;
                        cout << "5.Возведение в степень" << endl;
                        cout << "6.Корень из числа" << endl;
                        cout << "=>7.Введите второе натуральное число" << endl;
                        in = _getch();
                    }
                }
                if (in == 13) {
                    if (s == 1 || s == 2 || s == 3 || s == 4 || s == 5 || s == 6) {
                        if (sec == 0) {
                            cout << "Введите второе натуральное число" << endl;
                            int c = 0;  int p = 0; int zn = 0; int nul = 0;
                            for (; p == 0;) { sim = _getch();  if ((sim >= zero) && (sim <= nine)) { c = c * 10 + s - zero; p = 1; cout << sim - zero; } if ((sim == minus) && (zn == 0)) { zn = 1; printf("-"); } if (sim == zero) { nul = 1; } }
                            p = 0;
                            if (nul == 0) { for (; p != 8;) { sim = _getch(); if (sim == enter) { p = 8; }; if ((sim >= zero) && (sim <= nine)) { c = c * 10 + sim - zero; printf("%d", sim - zero); p++; } } }
                            p = 0;
                            if (nul == 1) { for (; p == 0;) { sim = _getch(); if (sim == enter) { p = 1; }; } }
                            if (zn == 1) { c = -c; }
                            sec = c;
                        }
                        otv1 = first + sec;
                        otv2 = first - sec;
                        otv3 = first * sec;
                        otv6 = pow(first, 1.0 / sec);
                        if (s == 1) {
                            cout << "Результат " << otv1 << endl;
                            otv == otv1;
                        }
                        if (s == 2) {
                            cout << "Результат " << otv2 << endl;
                            otv == otv2;
                        }
                        if (s == 3) {
                            cout << "Результат " << otv3 << endl;
                            otv == otv3;
                        }
                        if (s == 4) {
                            if (sec != 0) {
                                otv4 = first / sec;
                                cout << "Результат: " << endl;
                                cout << "Целая часть:" << otv4 << "     Остаток от деления:" << first % sec << endl;
                                otv == otv4;
                            }
                            else { cout << "Нет ответа, так как делить на ноль нельзя" << endl; }
                        }
                        otv5 = pow(first, sec);
                        if (s == 5) {
                            if (sec > 42) {
                                cout << "Вы ввели слишком большой показатель степени " << endl;
                            }
                            else {
                                cout << "Результат " << otv5 << endl;
                                otv == otv5;
                            };
                        }
                        if (s == 6) {
                            if (sec > 100000) {
                                cout << "Вы ввели cлишком большую степень корня" << endl;
                            }
                            else if (sec == 0) {
                                cout << "Степень корня не может быть нулем" << endl;
                            }
                            else
                            {
                                cout << "Результат " << otv6 << endl;
                            }
                            otv == otv6;
                        }
                        system("pause");  pau = 1;
                    }
                    if (s == 7) {
                        if (sec == 0) {
                            cout << "Введите второе натуральное число" << endl;
                            cin >> str;
                            int c = 0;  int p = 0; int zn = 0; int nul = 0;
                            for (; p == 0;) { sim = _getch();  if ((sim >= zero) && (sim <= nine)) { c = c * 10 + s - zero; p = 1; cout << sim - zero; } if ((sim == minus) && (zn == 0)) { zn = 1; printf("-"); } if (sim == zero) { nul = 1; } }
                            p = 0;
                            if (nul == 0) { for (; p != 8;) { sim = _getch(); if (sim == enter) { p = 8; }; if ((sim >= zero) && (sim <= nine)) { c = c * 10 + sim - zero; printf("%d", sim - zero); p++; } } }
                            p = 0;
                            if (nul == 1) { for (; p == 0;) { sim = _getch(); if (sim == enter) { p = 1; }; } }
                            if (zn == 1) { c = -c; }
                            sec = c;
                        }
                        else {
                            sec = 0;
                            cout << "Введите второе натуральное число" << endl;
                            cin >> str;
                            int c = 0;  int p = 0; int zn = 0; int nul = 0;
                            for (; p == 0;) { sim = _getch();  if ((sim >= zero) && (sim <= nine)) { c = c * 10 + s - zero; p = 1; cout << sim - zero; } if ((sim == minus) && (zn == 0)) { zn = 1; printf("-"); } if (sim == zero) { nul = 1; } }
                            p = 0;
                            if (nul == 0) { for (; p != 8;) { sim = _getch(); if (sim == enter) { p = 8; }; if ((sim >= zero) && (sim <= nine)) { c = c * 10 + sim - zero; printf("%d", sim - zero); p++; } } }
                            p = 0;
                            if (nul == 1) { for (; p == 0;) { sim = _getch(); if (sim == enter) { p = 1; }; } }
                            if (zn == 1) { c = -c; }
                            sec = c;
                        }
                        system("cls");
                        cout << "Первое число " << first << endl;
                        cout << "Второе число " << sec << endl;
                        cout << "Выберите действие, перемещая стрелочку с помощью клавиатуры" << endl;
                        cout << "или введя номер действия(для ввода номера нажмите backspace) " << endl;
                        cout << "Выберите цифру:" << endl;
                        cout << "=>1.Сложение" << endl;
                        cout << "2.Вычитание" << endl;
                        cout << "3.Умножение" << endl;
                        cout << "4.Деление" << endl;
                        cout << "5.Возведение в степень" << endl;
                        cout << "6.Корень из числа" << endl;
                        int s = 1;
                        int in = _getch();
                        while (in != 13 && in != 8) {
                            if (in == 80) s++;
                            if (in == 72) s--;
                            while (s <= 0) { s += 6; };
                            while (s >= 7) { s -= 6; };
                            if (s == 1) {
                                system("cls");
                                cout << "Первое число " << first << endl;
                                cout << "Второе число " << sec << endl;
                                cout << "Выберите действие, перемещая стрелочку с помощью клавиатуры" << endl;
                                cout << "или введя номер действия(для ввода номера нажмите backspace) " << endl;
                                cout << "Выберите цифру:" << endl;
                                cout << "=>1.Сложение" << endl;
                                cout << "2.Вычитание" << endl;
                                cout << "3.Умножение" << endl;
                                cout << "4.Деление" << endl;
                                cout << "5.Возведение в степень" << endl;
                                cout << "6.Корень из числа" << endl;
                                in = _getch();
                            }
                            if (s == 2) {
                                system("cls");
                                cout << "Первое число " << first << endl;
                                cout << "Второе число " << sec << endl;
                                cout << "Выберите действие, перемещая стрелочку с помощью клавиатуры" << endl;
                                cout << "или введя номер действия(для ввода номера нажмите backspace) " << endl;
                                cout << "Выберите цифру:" << endl;
                                cout << "1.Сложение" << endl;
                                cout << "=>2.Вычитание" << endl;
                                cout << "3.Умножение" << endl;
                                cout << "4.Деление" << endl;
                                cout << "5.Возведение в степень" << endl;
                                cout << "6.Корень из числа" << endl;
                                in = _getch();
                            }
                            if (s == 3) {
                                system("cls");
                                cout << "Первое число " << first << endl;
                                cout << "Второе число " << sec << endl;
                                cout << "Выберите действие, перемещая стрелочку с помощью клавиатуры" << endl;
                                cout << "или введя номер действия(для ввода номера нажмите backspace) " << endl;
                                cout << "Выберите цифру:" << endl;
                                cout << "1.Сложение" << endl;
                                cout << "2.Вычитание" << endl;
                                cout << "=>3.Умножение" << endl;
                                cout << "4.Деление" << endl;
                                cout << "5.Возведение в степень" << endl;
                                cout << "6.Корень из числа" << endl;


                                in = _getch();
                            }
                            if (s == 4) {
                                system("cls");
                                cout << "Первое число " << first << endl;
                                cout << "Второе число " << sec << endl;
                                cout << "Выберите действие, перемещая стрелочку с помощью клавиатуры" << endl;
                                cout << "или введя номер действия(для ввода номера нажмите backspace) " << endl;
                                cout << "Выберите цифру:" << endl;
                                cout << "1.Сложение" << endl;
                                cout << "2.Вычитание" << endl;
                                cout << "3.Умножение" << endl;
                                cout << "=>4.Деление" << endl;
                                cout << "5.Возведение в степень" << endl;
                                cout << "6.Корень из числа" << endl;
                                in = _getch();
                            }
                            if (s == 5) {
                                system("cls");
                                cout << "Первое число " << first << endl;
                                cout << "Второе число " << sec << endl;
                                cout << "Выберите действие, перемещая стрелочку с помощью клавиатуры" << endl;
                                cout << "или введя номер действия(для ввода номера нажмите backspace) " << endl;
                                cout << "Выберите цифру:" << endl;
                                cout << "1.Сложение" << endl;
                                cout << "2.Вычитание" << endl;
                                cout << "3.Умножение" << endl;
                                cout << "4.Деление" << endl;
                                cout << "=>5.Возведение в степень" << endl;
                                cout << "6.Корень из числа" << endl;
                                in = _getch();
                            }
                            if (s == 6) {
                                system("cls");
                                cout << "Первое число " << first << endl;
                                cout << "Второе число " << sec << endl;
                                cout << "Выберите действие, перемещая стрелочку с помощью клавиатуры" << endl;
                                cout << "или введя номер действия(для ввода номера нажмите backspace) " << endl;
                                cout << "Выберите цифру:" << endl;
                                cout << "1.Сложение" << endl;
                                cout << "2.Вычитание" << endl;
                                cout << "3.Умножение" << endl;
                                cout << "4.Деление" << endl;
                                cout << "5.Возведение в степень" << endl;
                                cout << "=>6.Корень из числа" << endl;
                                in = _getch();
                            }
                        }
                        if (in == 13) {
                            otv1 = first + sec;
                            otv2 = first - sec;
                            otv3 = first * sec;

                            otv6 = pow(first, 1.0 / sec);
                            if (s == 1) {
                                cout << "Результат " << otv1 << endl;
                                otv == otv1;
                            }
                            if (s == 2) {
                                cout << "Результат " << otv2 << endl;
                                otv == otv2;
                            }
                            if (s == 3) {
                                cout << "Результат " << otv3 << endl;
                                otv == otv3;
                            }
                            if (s == 4) {
                                if (sec != 0) {
                                    otv4 = first / sec;
                                    cout << "Результат: " << endl;
                                    cout << "Целая часть:" << otv4 << "     Остаток от деления:" << first % sec << endl;
                                    otv == otv4;
                                }
                                else { cout << "Нет ответа, так как делить на ноль нельзя" << endl; }
                            }
                            otv5 = pow(first, sec);
                            if (s == 5) {
                                if (sec > 42) {
                                    cout << "Вы ввели слишком большой показатель степени " << endl;
                                }
                                else {
                                    cout << "Результат " << otv5 << endl;
                                    otv == otv5;
                                };
                            }
                            if (s == 6) {
                                if (sec > 100000) {
                                    cout << "Вы ввели cлишком большую степень корня" << endl;
                                }
                                else if (sec == 0) {
                                    cout << "Степень корня не может быть нулем" << endl;
                                }
                                else
                                {
                                    cout << "Результат " << otv6 << endl;
                                }
                                otv == otv6;
                            }
                        }
                        if (in == 8) {
                            cout << "Введите номер действия:";
                            cin >> str;
                            while (k != 0) {
                                if ((strlen(str) != 1) || (str[0] < 49) || (str[0] > 56)) { IsBreak = true; }
                                else { IsBreak = false; }

                                if (IsBreak == true) {
                                    k += 1;
                                    cout << "Не цифра" << endl;
                                    cout << "Выберите номер действия" << endl;
                                    cin >> str;
                                }
                                else { break; }
                            };
                            if (num_com == 0) {
                                for (int i = 0; i < strlen(str); i += 1) {
                                    int figure = (int)str[i] - (int)'0';
                                    num_com = num_com * 10 + figure;
                                }
                            }
                            else {
                                num_com = 0;
                                for (int i = 0; i < strlen(str); i += 1) {
                                    int figure = (int)str[i] - (int)'0';
                                    num_com = num_com * 10 + figure;
                                }
                            }
                            otv1 = first + sec;
                            otv2 = first - sec;
                            otv3 = first * sec;
                            otv6 = pow(first, 1.0 / sec);
                            if (num_com == 1) {
                                cout << "Результат " << otv1 << endl;
                                otv == otv1;
                            }
                            if (num_com == 2) {
                                cout << "Результат " << otv2 << endl;
                                otv == otv2;
                            }
                            if (num_com == 3) {
                                cout << "Результат " << otv3 << endl;
                                otv == otv3;
                            }
                            if (num_com == 4) {
                                if (sec != 0) {
                                    otv4 = first / sec;
                                    cout << "Результат: " << endl;
                                    cout << "Целая часть:" << otv4 << "     Остаток от деления:" << first % sec << endl;
                                    otv == otv4;
                                }
                                else { cout << "Нет ответа, так как делить на ноль нельзя" << endl; }
                            }
                            otv5 = pow(first, sec);
                            if (num_com == 5) {
                                if (sec > 42) {
                                    cout << "Вы ввели слишком большой показатель степени " << endl;
                                }
                                else {
                                    cout << "Результат " << otv5 << endl;
                                    otv == otv5;
                                };
                            }
                            if (num_com == 6) {
                                if (sec > 100000) {
                                    cout << "Вы ввели cлишком большую степень корня" << endl;
                                }
                                else  if (sec == 0) {
                                    cout << "Степень корня не может быть нулем" << endl;
                                }
                                else
                                {
                                    cout << "Результат " << otv6 << endl;
                                }
                                otv == otv6;
                            }
                            system("pause");  pau = 1;
                        }


                    }
                }
                if (in == 8) {
                    cout << "Введите номер действия:";
                    cin >> str;
                    while (k != 0) {
                        if ((strlen(str) != 1) || (str[0] < 49) || (str[0] > 56)) { IsBreak = true; }
                        else { IsBreak = false; }

                        if (IsBreak == true) {
                            k += 1;
                            cout << "Не цифра" << endl;
                            cout << "Введите номер действия" << endl;
                            cin >> str;
                        }
                        else { break; }
                    };
                    if (num_com == 0) {
                        for (int i = 0; i < strlen(str); i += 1) {
                            int figure = (int)str[i] - (int)'0';
                            num_com = num_com * 10 + figure;
                        }
                    }
                    else {
                        num_com = 0;
                        for (int i = 0; i < strlen(str); i += 1) {
                            int figure = (int)str[i] - (int)'0';
                            num_com = num_com * 10 + figure;
                        }
                    }
                    if (num_com == 1 || num_com == 2 || num_com == 3 || num_com == 4 || num_com == 5 || num_com == 6) {
                        if (sec == 0) {
                            cout << "Введите второе натуральное число" << endl;
                            cin >> str;
                            while (k != 0) {
                                for (int i = 0; str[i] != '\0'; i++)
                                    if (str[i] < 48 || str[i]>57 || strlen(str) > 7) {
                                        IsBreak = true; break;
                                    }
                                    else { IsBreak = false; }

                                if (IsBreak == true) {
                                    k += 1;
                                    cout << "Не натуральное число или цифр в записи больше 7" << endl;
                                    cout << "Введите второе натуральное число" << endl;
                                    cin >> str;
                                }
                                else { break; }
                            };
                            for (int i = 0; i < strlen(str); i += 1) {
                                int figure = (int)str[i] - (int)'0';
                                sec = sec * 10 + figure;
                            }
                        }
                        otv1 = first + sec;
                        otv2 = first - sec;
                        otv3 = first * sec;

                        otv6 = pow(first, 1.0 / sec);
                        if (num_com == 1) {
                            cout << "Результат " << otv1 << endl;
                            otv == otv1;
                        }
                        if (num_com == 2) {
                            cout << "Результат " << otv2 << endl;
                            otv == otv2;
                        }
                        if (num_com == 3) {
                            cout << "Результат " << otv3 << endl;
                            otv == otv3;
                        }
                        if (num_com == 4) {
                            if (sec != 0) {
                                otv4 = first / sec;
                                cout << "Результат: " << endl;
                                cout << "Целая часть:" << otv4 << "     Остаток от деления:" << first % sec << endl;
                                otv == otv4;
                            }
                            else { cout << "Нет ответа, так как делить на ноль нельзя" << endl; }
                        }
                        otv5 = pow(first, sec);
                        if (num_com == 5) {
                            if (sec > 42) {
                                cout << "Вы ввели слишком большой показатель степени " << endl;
                            }
                            else {
                                cout << "Результат " << otv5 << endl;
                                otv == otv5;
                            };
                        }
                        if (num_com == 6) {
                            if (sec > 100000) {
                                cout << "Вы ввели cлишком большую степень корня" << endl;
                            }
                            else  if (sec == 0) {
                                cout << "Степень корня не может быть нулем" << endl;
                            }
                            if (sec == 0) {
                                cout << "Степень корня не может быть нулем" << endl;
                            }
                            else
                            {
                                cout << "Результат " << otv6 << endl;
                            }
                            otv == otv6;
                        }
                        system("pause");  pau = 1;
                    }
                    if (num_com == 7) {
                        if (sec == 0) {
                            cout << "Введите второе натуральное число" << endl;
                            cin >> str;
                            while (k != 0) {
                                for (int i = 0; str[i] != '\0'; i++)
                                    if (str[i] < 48 || str[i]>57 || strlen(str) > 7) {
                                        IsBreak = true; break;
                                    }
                                    else { IsBreak = false; }

                                if (IsBreak == true) {
                                    k += 1;
                                    cout << "Не натуральное число или цифр в записи больше 7" << endl;
                                    cout << "Введите второе натуральное число" << endl;
                                    cin >> str;
                                }
                                else { break; }
                            };
                            for (int i = 0; i < strlen(str); i += 1) {
                                int figure = (int)str[i] - (int)'0';
                                sec = sec * 10 + figure;
                            }
                        }
                        else {
                            sec = 0;
                            cout << "Введите второе натуральное число" << endl;
                            cin >> str;
                            while (k != 0) {
                                for (int i = 0; str[i] != '\0'; i++)
                                    if (str[i] < 48 || str[i]>57 || strlen(str) > 7) {
                                        IsBreak = true; break;
                                    }
                                    else { IsBreak = false; }

                                if (IsBreak == true) {
                                    k += 1;
                                    cout << "Не натуральное число или цифр в записи больше 7" << endl;
                                    cout << "Введите второе натуральное число" << endl;
                                    cin >> str;
                                }
                                else { break; }
                            };
                            for (int i = 0; i < strlen(str); i += 1) {
                                int figure = (int)str[i] - (int)'0';
                                sec = sec * 10 + figure;
                            }
                        }
                        system("cls");
                        cout << "Выберите действие, перемещая стрелочку с помощью клавиатуры" << endl;
                        cout << "или введя номер действия(для ввода номера нажмите backspace) " << endl;
                        cout << "Выберите цифру:" << endl;
                        cout << "=>1.Сложение" << endl;
                        cout << "2.Вычитание" << endl;
                        cout << "3.Умножение" << endl;
                        cout << "4.Деление" << endl;
                        cout << "5.Возведение в степень" << endl;
                        cout << "6.Корень из числа" << endl;
                        int s = 1;
                        int in = _getch();
                        while (in != 13 && in != 8) {
                            if (in == 80) s++;
                            if (in == 72) s--;
                            while (s <= 0) { s += 6; };
                            while (s >= 7) { s -= 6; };
                            if (s == 1) {
                                system("cls");
                                cout << "Выберите действие, перемещая стрелочку с помощью клавиатуры" << endl;
                                cout << "или введя номер действия(для ввода номера нажмите backspace) " << endl;
                                cout << "Выберите цифру:" << endl;
                                cout << "=>1.Сложение" << endl;
                                cout << "2.Вычитание" << endl;
                                cout << "3.Умножение" << endl;
                                cout << "4.Деление" << endl;
                                cout << "5.Возведение в степень" << endl;
                                cout << "6.Корень из числа" << endl;
                                in = _getch();
                            }
                            if (s == 2) {
                                system("cls");
                                cout << "Выберите действие, перемещая стрелочку с помощью клавиатуры" << endl;
                                cout << "или введя номер действия(для ввода номера нажмите backspace) " << endl;
                                cout << "Выберите цифру:" << endl;
                                cout << "1.Сложение" << endl;
                                cout << "=>2.Вычитание" << endl;
                                cout << "3.Умножение" << endl;
                                cout << "4.Деление" << endl;
                                cout << "5.Возведение в степень" << endl;
                                cout << "6.Корень из числа" << endl;
                                in = _getch();
                            }
                            if (s == 3) {
                                system("cls");
                                cout << "Выберите действие, перемещая стрелочку с помощью клавиатуры" << endl;
                                cout << "или введя номер действия(для ввода номера нажмите backspace) " << endl;
                                cout << "Выберите цифру:" << endl;
                                cout << "1.Сложение" << endl;
                                cout << "2.Вычитание" << endl;
                                cout << "=>3.Умножение" << endl;
                                cout << "4.Деление" << endl;
                                cout << "5.Возведение в степень" << endl;
                                cout << "6.Корень из числа" << endl;


                                in = _getch();
                            }
                            if (s == 4) {
                                system("cls");
                                cout << "Выберите действие, перемещая стрелочку с помощью клавиатуры" << endl;
                                cout << "или введя номер действия(для ввода номера нажмите backspace) " << endl;
                                cout << "Выберите цифру:" << endl;
                                cout << "1.Сложение" << endl;
                                cout << "2.Вычитание" << endl;
                                cout << "3.Умножение" << endl;
                                cout << "=>4.Деление" << endl;
                                cout << "5.Возведение в степень" << endl;
                                cout << "6.Корень из числа" << endl;
                                in = _getch();
                            }
                            if (s == 5) {
                                system("cls");;
                                cout << "Выберите действие, перемещая стрелочку с помощью клавиатуры" << endl;
                                cout << "или введя номер действия(для ввода номера нажмите backspace) " << endl;
                                cout << "Выберите цифру:" << endl;
                                cout << "1.Сложение" << endl;
                                cout << "2.Вычитание" << endl;
                                cout << "3.Умножение" << endl;
                                cout << "4.Деление" << endl;
                                cout << "=>5.Возведение в степень" << endl;
                                cout << "6.Корень из числа" << endl;
                                in = _getch();
                            }
                            if (s == 6) {
                                system("cls");
                                cout << "Выберите действие, перемещая стрелочку с помощью клавиатуры" << endl;
                                cout << "или введя номер действия(для ввода номера нажмите backspace) " << endl;
                                cout << "Выберите цифру:" << endl;
                                cout << "1.Сложение" << endl;
                                cout << "2.Вычитание" << endl;
                                cout << "3.Умножение" << endl;
                                cout << "4.Деление" << endl;
                                cout << "5.Возведение в степень" << endl;
                                cout << "=>6.Корень из числа" << endl;
                                in = _getch();
                            }
                        }
                        if (in == 13) {
                            otv1 = first + sec;
                            otv2 = first - sec;
                            otv3 = first * sec;

                            otv6 = pow(first, 1.0 / sec);
                            if (s == 1) {
                                cout << "Результат " << otv1 << endl;
                                otv == otv1;
                            }
                            if (s == 2) {
                                cout << "Результат " << otv2 << endl;
                                otv == otv2;
                            }
                            if (s == 3) {
                                cout << "Результат " << otv3 << endl;
                                otv == otv3;
                            }
                            if (s == 4) {
                                if (sec != 0) {
                                    otv4 = first / sec;
                                    cout << "Результат: " << endl;
                                    cout << "Целая часть:" << otv4 << "     Остаток от деления:" << first % sec << endl;
                                    otv == otv4;
                                }
                                else { cout << "Нет ответа, так как делить на ноль нельзя" << endl; }
                            }
                            otv5 = pow(first, sec);
                            if (s == 5) {
                                if (sec > 42) {
                                    cout << "Вы ввели слишком большой показатель степени " << endl;
                                }
                                else {
                                    cout << "Результат " << otv5 << endl;
                                    otv == otv5;
                                };
                            }
                            if (s == 6) {
                                if (sec > 100000) {
                                    cout << "Вы ввели cлишком большую степень корня" << endl;
                                }
                                else if (sec == 0) {
                                    cout << "Степень корня не может быть нулем" << endl;
                                }
                                else
                                {
                                    cout << "Результат " << otv6 << endl;
                                }
                                otv == otv6;
                            }
                            system("pause");  pau = 1;

                        }
                        if (in == 8) {
                            cout << "Введите номер действия:";
                            cin >> str;
                            while (k != 0) {
                                if ((strlen(str) != 1) || (str[0] < 49) || (str[0] > 56)) { IsBreak = true; }
                                else { IsBreak = false; }

                                if (IsBreak == true) {
                                    k += 1;
                                    cout << "Не цифра" << endl;
                                    cout << "Выберите номер действия" << endl;
                                    cin >> str;
                                }
                                else { break; }
                            };
                            if (num_com == 0) {
                                for (int i = 0; i < strlen(str); i += 1) {
                                    int figure = (int)str[i] - (int)'0';
                                    num_com = num_com * 10 + figure;
                                }
                            }
                            else {
                                num_com = 0;
                                for (int i = 0; i < strlen(str); i += 1) {
                                    int figure = (int)str[i] - (int)'0';
                                    num_com = num_com * 10 + figure;
                                }
                            }
                            otv1 = first + sec;
                            otv2 = first - sec;
                            otv3 = first * sec;
                            otv6 = pow(first, 1.0 / sec);
                            if (num_com == 1) {
                                cout << "Результат " << otv1 << endl;
                                otv == otv1;
                            }
                            if (num_com == 2) {
                                cout << "Результат " << otv2 << endl;
                                otv == otv2;
                            }
                            if (num_com == 3) {
                                cout << "Результат " << otv3 << endl;
                                otv == otv3;
                            }
                            if (num_com == 4) {
                                if (sec != 0) {
                                    otv4 = first / sec;
                                    cout << "Результат: " << endl;
                                    cout << "Целая часть:" << otv4 << "     Остаток от деления:" << first % sec << endl;
                                    otv == otv4;
                                }
                                else { cout << "Нет ответа, так как делить на ноль нельзя" << endl; }
                            }
                            otv5 = pow(first, sec);
                            if (num_com == 5) {
                                if (sec > 42) {
                                    cout << "Вы ввели слишком большой показатель степени " << endl;
                                }
                                else {
                                    cout << "Результат " << otv5 << endl;
                                    otv == otv5;
                                };
                            }
                            if (num_com == 6) {
                                if (sec > 100000) {
                                    cout << "Вы ввели cлишком большую степень корня" << endl;
                                }
                                else if (sec == 0) {
                                    cout << "Степень корня не может быть нулем" << endl;
                                }
                                else
                                {
                                    cout << "Результат " << otv6 << endl;
                                }
                                otv == otv6;
                            }
                            system("pause");  pau = 1;
                        }
                    }
                }
            }
            else if (s == 8) {
                if (sec == 0) {
                    cout << "Введите второе  натуральное число" << endl;
                    int c = 0;  int p = 0; int zn = 0; int nul = 0;
                    for (; p == 0;) { sim = _getch();  if ((sim >= zero) && (sim <= nine)) { c = c * 10 + s - zero; p = 1; cout << sim - zero; } if ((sim == minus) && (zn == 0)) { zn = 1; printf("-"); } if (sim == zero) { nul = 1; } }
                    p = 0;
                    if (nul == 0) { for (; p != 8;) { sim = _getch(); if (sim == enter) { p = 8; }; if ((sim >= zero) && (sim <= nine)) { c = c * 10 + sim - zero; printf("%d", sim - zero); p++; } } }
                    p = 0;
                    if (nul == 1) { for (; p == 0;) { sim = _getch(); if (sim == enter) { p = 1; }; } }
                    if (zn == 1) { c = -c; }
                    sec = c;
                }
                else {
                    sec = 0;
                    cout << "Введите второе  натуральное число" << endl;
                    int c = 0;  int p = 0; int zn = 0; int nul = 0;
                    for (; p == 0;) { sim = _getch();  if ((sim >= zero) && (sim <= nine)) { c = c * 10 + s - zero; p = 1; cout << sim - zero; } if ((sim == minus) && (zn == 0)) { zn = 1; printf("-"); } if (sim == zero) { nul = 1; } }
                    p = 0;
                    if (nul == 0) { for (; p != 8;) { sim = _getch(); if (sim == enter) { p = 8; }; if ((sim >= zero) && (sim <= nine)) { c = c * 10 + sim - zero; printf("%d", sim - zero); p++; } } }
                    p = 0;
                    if (nul == 1) { for (; p == 0;) { sim = _getch(); if (sim == enter) { p = 1; }; } }
                    if (zn == 1) { c = -c; }
                    first = c;
                }
                system("cls");
                cout << "Первое число " << first << endl;
                cout << "Второе число " << sec << endl;
                cout << "Выберите действие, перемещая стрелочку с помощью клавиатуры" << endl;
                cout << "или введя номер действия(для ввода номера нажмите backspace) " << endl;
                cout << "Выберите цифру:" << endl;
                cout << "=>1.Сложение" << endl;
                cout << "2.Вычитание" << endl;
                cout << "3.Умножение" << endl;
                cout << "4.Деление" << endl;
                cout << "5.Возведение в степень" << endl;
                cout << "6.Корень из числа" << endl;
                cout << "7.Введите первое натуральное число" << endl;
                int s = 1;
                int in = _getch();
                while (in != 13 && in != 8) {
                    if (in == 80) s++;
                    if (in == 72) s--;
                    while (s <= 0) { s += 7; };
                    while (s >= 8) { s -= 7; };
                    if (s == 1) {
                        system("cls");
                        cout << "Первое число " << first << endl;
                        cout << "Второе число " << sec << endl;
                        cout << "Выберите действие, перемещая стрелочку с помощью клавиатуры" << endl;
                        cout << "или введя номер действия(для ввода номера нажмите backspace) " << endl;
                        cout << "Выберите цифру:" << endl;
                        cout << "=>1.Сложение" << endl;
                        cout << "2.Вычитание" << endl;
                        cout << "3.Умножение" << endl;
                        cout << "4.Деление" << endl;
                        cout << "5.Возведение в степень" << endl;
                        cout << "6.Корень из числа" << endl;
                        cout << "7.Введите первое натуральное число" << endl;
                        in = _getch();
                    }
                    if (s == 2) {
                        system("cls");
                        cout << "Первое число " << first << endl;
                        cout << "Второе число " << sec << endl;
                        cout << "Выберите действие, перемещая стрелочку с помощью клавиатуры" << endl;
                        cout << "или введя номер действия(для ввода номера нажмите backspace) " << endl;
                        cout << "Выберите цифру:" << endl;
                        cout << "1.Сложение" << endl;
                        cout << "=>2.Вычитание" << endl;
                        cout << "3.Умножение" << endl;
                        cout << "4.Деление" << endl;
                        cout << "5.Возведение в степень" << endl;
                        cout << "6.Корень из числа" << endl;
                        cout << "7.Введите первое натуральное число" << endl;
                        in = _getch();
                    }
                    if (s == 3) {
                        system("cls");
                        cout << "Первое число " << first << endl;
                        cout << "Второе число " << sec << endl;
                        cout << "Выберите действие, перемещая стрелочку с помощью клавиатуры" << endl;
                        cout << "или введя номер действия(для ввода номера нажмите backspace) " << endl;
                        cout << "Выберите цифру:" << endl;
                        cout << "1.Сложение" << endl;
                        cout << "2.Вычитание" << endl;
                        cout << "=>3.Умножение" << endl;
                        cout << "4.Деление" << endl;
                        cout << "5.Возведение в степень" << endl;
                        cout << "6.Корень из числа" << endl;
                        cout << "7.Введите первое натуральное число" << endl;
                        in = _getch();
                    }
                    if (s == 4) {
                        system("cls");
                        cout << "Первое число " << first << endl;
                        cout << "Второе число " << sec << endl;
                        cout << "Выберите действие, перемещая стрелочку с помощью клавиатуры" << endl;
                        cout << "или введя номер действия(для ввода номера нажмите backspace) " << endl;
                        cout << "Выберите цифру:" << endl;
                        cout << "1.Сложение" << endl;
                        cout << "2.Вычитание" << endl;
                        cout << "3.Умножение" << endl;
                        cout << "=>4.Деление" << endl;
                        cout << "5.Возведение в степень" << endl;
                        cout << "6.Корень из числа" << endl;
                        cout << "7.Введите первое натуральное число" << endl;
                        in = _getch();
                    }
                    if (s == 5) {
                        system("cls");
                        cout << "Первое число " << first << endl;
                        cout << "Второе число " << sec << endl;
                        cout << "Выберите действие, перемещая стрелочку с помощью клавиатуры" << endl;
                        cout << "или введя номер действия(для ввода номера нажмите backspace) " << endl;
                        cout << "Выберите цифру:" << endl;
                        cout << "1.Сложение" << endl;
                        cout << "2.Вычитание" << endl;
                        cout << "3.Умножение" << endl;
                        cout << "4.Деление" << endl;
                        cout << "=>5.Возведение в степень" << endl;
                        cout << "6.Корень из числа" << endl;
                        cout << "7.Введите первое натуральное число" << endl;
                        in = _getch();
                    }
                    if (s == 6) {
                        system("cls");
                        cout << "Первое число " << first << endl;
                        cout << "Второе число " << sec << endl;
                        cout << "Выберите действие, перемещая стрелочку с помощью клавиатуры" << endl;
                        cout << "или введя номер действия(для ввода номера нажмите backspace) " << endl;
                        cout << "Выберите цифру:" << endl;
                        cout << "1.Сложение" << endl;
                        cout << "2.Вычитание" << endl;
                        cout << "3.Умножение" << endl;
                        cout << "4.Деление" << endl;
                        cout << "5.Возведение в степень" << endl;
                        cout << "=>6.Корень из числа" << endl;
                        cout << "7.Введите первое натуральное число" << endl;
                        in = _getch();
                    }
                    if (s == 7) {
                        system("cls");
                        cout << "Первое число " << first << endl;
                        cout << "Второе число " << sec << endl;
                        cout << "Выберите действие, перемещая стрелочку с помощью клавиатуры" << endl;
                        cout << "или введя номер действия(для ввода номера нажмите backspace) " << endl;
                        cout << "Выберите цифру:" << endl;
                        cout << "1.Сложение" << endl;
                        cout << "2.Вычитание" << endl;
                        cout << "3.Умножение" << endl;
                        cout << "4.Деление" << endl;
                        cout << "5.Возведение в степень" << endl;
                        cout << "6.Корень из числа" << endl;
                        cout << "=>7.Введите первое натуральное число" << endl;
                        in = _getch();
                    }
                }
                if (in == 13) {
                    if (s == 1 || s == 2 || s == 3 || s == 4 || s == 5 || s == 6) {
                        if (first == 0) {
                            cout << "Введите первое натуральное число" << endl;
                            int c = 0;  int p = 0; int zn = 0; int nul = 0;
                            for (; p == 0;) { sim = _getch();  if ((sim >= zero) && (sim <= nine)) { c = c * 10 + s - zero; p = 1; cout << sim - zero; } if ((sim == minus) && (zn == 0)) { zn = 1; printf("-"); } if (sim == zero) { nul = 1; } }
                            p = 0;
                            if (nul == 0) { for (; p != 8;) { sim = _getch(); if (sim == enter) { p = 8; }; if ((sim >= zero) && (sim <= nine)) { c = c * 10 + sim - zero; printf("%d", sim - zero); p++; } } }
                            p = 0;
                            if (nul == 1) { for (; p == 0;) { sim = _getch(); if (sim == enter) { p = 1; }; } }
                            if (zn == 1) { c = -c; }
                            first = c;
                        }
                        otv1 = first + sec;
                        otv2 = first - sec;
                        otv3 = first * sec;
                        otv6 = pow(first, 1.0 / sec);
                        if (s == 1) {
                            cout << "Результат " << otv1 << endl;
                            otv == otv1;
                        }
                        if (s == 2) {
                            cout << "Результат " << otv2 << endl;
                            otv == otv2;
                        }
                        if (s == 3) {
                            cout << "Результат " << otv3 << endl;
                            otv == otv3;
                        }
                        if (s == 4) {
                            if (sec != 0) {
                                otv4 = first / sec;
                                cout << "Результат: " << endl;
                                cout << "Целая часть:" << otv4 << "     Остаток от деления:" << first % sec << endl;
                                otv == otv4;
                            }
                            else { cout << "Нет ответа, так как делить на ноль нельзя" << endl; }
                        }
                        otv5 = pow(first, sec);
                        if (s == 5) {
                            if (sec > 42) {
                                cout << "Вы ввели слишком большой показатель степени " << endl;
                            }
                            else {
                                cout << "Результат " << otv5 << endl;
                                otv == otv5;
                            };
                        }
                        if (s == 6) {
                            if (sec > 100000) {
                                cout << "Вы ввели cлишком большую степень корня" << endl;
                            }
                            else if (sec == 0) {
                                cout << "Степень корня не может быть нулем" << endl;
                            }
                            else
                            {
                                cout << "Результат " << otv6 << endl;
                            }
                            otv == otv6;
                        }
                        system("pause");  pau = 1;
                    }
                    if (s == 7) {
                        if (sec == 0) {
                            cout << "Введите первое натуральное число" << endl;
                            int c = 0;  int p = 0; int zn = 0; int nul = 0;
                            for (; p == 0;) { sim = _getch();  if ((sim >= zero) && (sim <= nine)) { c = c * 10 + s - zero; p = 1; cout << sim - zero; } if ((sim == minus) && (zn == 0)) { zn = 1; printf("-"); } if (sim == zero) { nul = 1; } }
                            p = 0;
                            if (nul == 0) { for (; p != 8;) { sim = _getch(); if (sim == enter) { p = 8; }; if ((sim >= zero) && (sim <= nine)) { c = c * 10 + sim - zero; printf("%d", sim - zero); p++; } } }
                            p = 0;
                            if (nul == 1) { for (; p == 0;) { sim = _getch(); if (sim == enter) { p = 1; }; } }
                            if (zn == 1) { c = -c; }
                            first = c;
                        }
                        else {
                            sec = 0;
                            cout << "Введите первое натуральное число" << endl;
                            int c = 0;  int p = 0; int zn = 0; int nul = 0;
                            for (; p == 0;) { sim = _getch();  if ((sim >= zero) && (sim <= nine)) { c = c * 10 + s - zero; p = 1; cout << sim - zero; } if ((sim == minus) && (zn == 0)) { zn = 1; printf("-"); } if (sim == zero) { nul = 1; } }
                            p = 0;
                            if (nul == 0) { for (; p != 8;) { sim = _getch(); if (sim == enter) { p = 8; }; if ((sim >= zero) && (sim <= nine)) { c = c * 10 + sim - zero; printf("%d", sim - zero); p++; } } }
                            p = 0;
                            if (nul == 1) { for (; p == 0;) { sim = _getch(); if (sim == enter) { p = 1; }; } }
                            if (zn == 1) { c = -c; }
                            sec = c;
                        }
                        system("cls");
                        cout << "Первое число " << first << endl;
                        cout << "Второе число " << sec << endl;
                        cout << "Выберите действие, перемещая стрелочку с помощью клавиатуры" << endl;
                        cout << "или введя номер действия(для ввода номера нажмите backspace) " << endl;
                        cout << "Выберите цифру:" << endl;
                        cout << "=>1.Сложение" << endl;
                        cout << "2.Вычитание" << endl;
                        cout << "3.Умножение" << endl;
                        cout << "4.Деление" << endl;
                        cout << "5.Возведение в степень" << endl;
                        cout << "6.Корень из числа" << endl;
                        int s = 1;
                        int in = _getch();
                        while (in != 13 && in != 8) {
                            if (in == 80) s++;
                            if (in == 72) s--;
                            while (s <= 0) { s += 6; };
                            while (s >= 7) { s -= 6; };
                            if (s == 1) {
                                system("cls");
                                cout << "Первое число " << first << endl;
                                cout << "Второе число " << sec << endl;
                                cout << "Выберите действие, перемещая стрелочку с помощью клавиатуры" << endl;
                                cout << "или введя номер действия(для ввода номера нажмите backspace) " << endl;
                                cout << "Выберите цифру:" << endl;
                                cout << "=>1.Сложение" << endl;
                                cout << "2.Вычитание" << endl;
                                cout << "3.Умножение" << endl;
                                cout << "4.Деление" << endl;
                                cout << "5.Возведение в степень" << endl;
                                cout << "6.Корень из числа" << endl;
                                in = _getch();
                            }
                            if (s == 2) {
                                system("cls");
                                cout << "Первое число " << first << endl;
                                cout << "Второе число " << sec << endl;
                                cout << "Выберите действие, перемещая стрелочку с помощью клавиатуры" << endl;
                                cout << "или введя номер действия(для ввода номера нажмите backspace) " << endl;
                                cout << "Выберите цифру:" << endl;
                                cout << "1.Сложение" << endl;
                                cout << "=>2.Вычитание" << endl;
                                cout << "3.Умножение" << endl;
                                cout << "4.Деление" << endl;
                                cout << "5.Возведение в степень" << endl;
                                cout << "6.Корень из числа" << endl;
                                in = _getch();
                            }
                            if (s == 3) {
                                system("cls");
                                cout << "Первое число " << first << endl;
                                cout << "Второе число " << sec << endl;
                                cout << "Выберите действие, перемещая стрелочку с помощью клавиатуры" << endl;
                                cout << "или введя номер действия(для ввода номера нажмите backspace) " << endl;
                                cout << "Выберите цифру:" << endl;
                                cout << "1.Сложение" << endl;
                                cout << "2.Вычитание" << endl;
                                cout << "=>3.Умножение" << endl;
                                cout << "4.Деление" << endl;
                                cout << "5.Возведение в степень" << endl;
                                cout << "6.Корень из числа" << endl;


                                in = _getch();
                            }
                            if (s == 4) {
                                system("cls");
                                cout << "Первое число " << first << endl;
                                cout << "Второе число " << sec << endl;
                                cout << "Выберите действие, перемещая стрелочку с помощью клавиатуры" << endl;
                                cout << "или введя номер действия(для ввода номера нажмите backspace) " << endl;
                                cout << "Выберите цифру:" << endl;
                                cout << "1.Сложение" << endl;
                                cout << "2.Вычитание" << endl;
                                cout << "3.Умножение" << endl;
                                cout << "=>4.Деление" << endl;
                                cout << "5.Возведение в степень" << endl;
                                cout << "6.Корень из числа" << endl;
                                in = _getch();
                            }
                            if (s == 5) {
                                system("cls");
                                cout << "Первое число " << first << endl;
                                cout << "Второе число " << sec << endl;
                                cout << "Выберите действие, перемещая стрелочку с помощью клавиатуры" << endl;
                                cout << "или введя номер действия(для ввода номера нажмите backspace) " << endl;
                                cout << "Выберите цифру:" << endl;
                                cout << "1.Сложение" << endl;
                                cout << "2.Вычитание" << endl;
                                cout << "3.Умножение" << endl;
                                cout << "4.Деление" << endl;
                                cout << "=>5.Возведение в степень" << endl;
                                cout << "6.Корень из числа" << endl;
                                in = _getch();
                            }
                            if (s == 6) {
                                system("cls");
                                cout << "Первое число " << first << endl;
                                cout << "Второе число " << sec << endl;
                                cout << "Выберите действие, перемещая стрелочку с помощью клавиатуры" << endl;
                                cout << "или введя номер действия(для ввода номера нажмите backspace) " << endl;
                                cout << "Выберите цифру:" << endl;
                                cout << "1.Сложение" << endl;
                                cout << "2.Вычитание" << endl;
                                cout << "3.Умножение" << endl;
                                cout << "4.Деление" << endl;
                                cout << "5.Возведение в степень" << endl;
                                cout << "=>6.Корень из числа" << endl;
                                in = _getch();
                            }
                        }
                        if (in == 13) {
                            otv1 = first + sec;
                            otv2 = first - sec;
                            otv3 = first * sec;
                            otv6 = pow(first, 1.0 / sec);
                            if (s == 1) {
                                cout << "Результат " << otv1 << endl;
                                otv == otv1;
                            }
                            if (s == 2) {
                                cout << "Результат " << otv2 << endl;
                                otv == otv2;
                            }
                            if (s == 3) {
                                cout << "Результат " << otv3 << endl;
                                otv == otv3;
                            }
                            if (s == 4) {
                                if (sec != 0) {
                                    otv4 = first / sec;
                                    cout << "Результат: " << endl;
                                    cout << "Целая часть:" << otv4 << "     Остаток от деления:" << first % sec << endl;
                                    otv == otv4;
                                }
                                else { cout << "Нет ответа, так как делить на ноль нельзя" << endl; }
                            }
                            otv5 = pow(first, sec);
                            if (s == 5) {
                                if (sec > 42) {
                                    cout << "Вы ввели слишком большой показатель степени " << endl;
                                }
                                else {
                                    cout << "Результат " << otv5 << endl;
                                    otv == otv5;
                                };
                            }
                            if (s == 6) {
                                if (sec > 100000) {
                                    cout << "Вы ввели cлишком большую степень корня" << endl;
                                }
                                else if (sec == 0) {
                                    cout << "Степень корня не может быть нулем" << endl;
                                }
                                else
                                {
                                    cout << "Результат " << otv6 << endl;
                                }
                                otv == otv6;
                            }
                            system("pause");  pau = 1;
                        }
                        if (in == 8) {
                            cout << "Введите номер действия:";
                            cin >> str;
                            while (k != 0) {
                                if ((strlen(str) != 1) || (str[0] < 49) || (str[0] > 56)) { IsBreak = true; }
                                else { IsBreak = false; }

                                if (IsBreak == true) {
                                    k += 1;
                                    cout << "Не цифра" << endl;
                                    cout << "Выберите номер действия" << endl;
                                    cin >> str;
                                }
                                else { break; }
                            };
                            if (num_com == 0) {
                                for (int i = 0; i < strlen(str); i += 1) {
                                    int figure = (int)str[i] - (int)'0';
                                    num_com = num_com * 10 + figure;
                                }
                            }
                            else {
                                num_com = 0;
                                for (int i = 0; i < strlen(str); i += 1) {
                                    int figure = (int)str[i] - (int)'0';
                                    num_com = num_com * 10 + figure;
                                }
                            }
                            otv1 = first + sec;
                            otv2 = first - sec;
                            otv3 = first * sec;

                            otv6 = pow(first, 1.0 / sec);
                            if (num_com == 1) {
                                cout << "Результат " << otv1 << endl;
                                otv == otv1;
                            }
                            if (num_com == 2) {
                                cout << "Результат " << otv2 << endl;
                                otv == otv2;
                            }
                            if (num_com == 3) {
                                cout << "Результат " << otv3 << endl;
                                otv == otv3;
                            }
                            if (num_com == 4) {
                                if (sec != 0) {
                                    otv4 = first / sec;
                                    cout << "Результат: " << endl;
                                    cout << "Целая часть:" << otv4 << "     Остаток от деления:" << first % sec << endl;
                                    otv == otv4;
                                }
                                else { cout << "Нет ответа, так как делить на ноль нельзя" << endl; }
                            }
                            otv5 = pow(first, sec);
                            if (num_com == 5) {
                                if (sec > 42) {
                                    cout << "Вы ввели слишком большой показатель степени " << endl;
                                }
                                else {
                                    cout << "Результат " << otv5 << endl;
                                    otv == otv5;
                                };
                            }
                            if (num_com == 6) {
                                if (sec > 100000) {
                                    cout << "Вы ввели cлишком большую степень корня" << endl;
                                }
                                else if (sec == 0) {
                                    cout << "Степень корня не может быть нулем" << endl;
                                }
                                else
                                {
                                    cout << "Результат " << otv6 << endl;
                                }
                                otv == otv6;
                            }
                            system("pause");  pau = 1;
                        }
                    }
                }
                if (in == 8) {
                    cout << "Введите номер действия:";
                    cin >> str;
                    while (k != 0) {
                        if ((strlen(str) != 1) || (str[0] < 49) || (str[0] > 56)) { IsBreak = true; }
                        else { IsBreak = false; }

                        if (IsBreak == true) {
                            k += 1;
                            cout << "Не цифра" << endl;
                            cout << "Введите номер действия" << endl;
                            cin >> str;
                        }
                        else { break; }
                    };
                    if (num_com == 0) {
                        for (int i = 0; i < strlen(str); i += 1) {
                            int figure = (int)str[i] - (int)'0';
                            num_com = num_com * 10 + figure;
                        }
                    }
                    else {
                        num_com = 0;
                        for (int i = 0; i < strlen(str); i += 1) {
                            int figure = (int)str[i] - (int)'0';
                            num_com = num_com * 10 + figure;
                        }
                    }
                    if (num_com == 1 || num_com == 2 || num_com == 3 || num_com == 4 || num_com == 5 || num_com == 6) {
                        if (first == 0) {
                            cout << "Введите первое натуральное число" << endl;
                            int c = 0;  int p = 0; int zn = 0; int nul = 0;
                            for (; p == 0;) { sim = _getch();  if ((sim >= zero) && (sim <= nine)) { c = c * 10 + s - zero; p = 1; cout << sim - zero; } if ((sim == minus) && (zn == 0)) { zn = 1; printf("-"); } if (sim == zero) { nul = 1; } }
                            p = 0;
                            if (nul == 0) { for (; p != 8;) { sim = _getch(); if (sim == enter) { p = 8; }; if ((sim >= zero) && (sim <= nine)) { c = c * 10 + sim - zero; printf("%d", sim - zero); p++; } } }
                            p = 0;
                            if (nul == 1) { for (; p == 0;) { sim = _getch(); if (sim == enter) { p = 1; }; } }
                            if (zn == 1) { c = -c; }
                            first = c;
                        }
                        otv1 = first + sec;
                        otv2 = first - sec;
                        otv3 = first * sec;

                        otv6 = pow(first, 1.0 / sec);
                        if (num_com == 1) {
                            cout << "Результат " << otv1 << endl;
                            otv == otv1;
                        }
                        if (num_com == 2) {
                            cout << "Результат " << otv2 << endl;
                            otv == otv2;
                        }
                        if (num_com == 3) {
                            cout << "Результат " << otv3 << endl;
                            otv == otv3;
                        }
                        if (num_com == 4) {
                            if (sec != 0) {
                                otv4 = first / sec;
                                cout << "Результат: " << endl;
                                cout << "Целая часть:" << otv4 << "     Остаток от деления:" << first % sec << endl;
                                otv == otv4;
                            }
                            else { cout << "Нет ответа, так как делить на ноль нельзя" << endl; }
                        }
                        otv5 = pow(first, sec);
                        if (num_com == 5) {
                            if (sec > 42) {
                                cout << "Вы ввели слишком большой показатель степени " << endl;
                            }
                            else {
                                cout << "Результат " << otv5 << endl;
                                otv == otv5;
                            };
                        }
                        if (num_com == 6) {
                            if (sec > 100000) {
                                cout << "Вы ввели cлишком большую степень корня" << endl;
                            }
                            else if (sec == 0) {
                                cout << "Степень корня не может быть нулем" << endl;
                            }
                            else
                            {
                                cout << "Результат " << otv6 << endl;
                            }
                            otv == otv6;
                        }
                        system("pause");  pau = 1;
                    }
                    if (num_com == 7) {
                        if (first == 0) {
                            cout << "Введите первое натуральное число" << endl;
                            int c = 0;  int p = 0; int zn = 0; int nul = 0;
                            for (; p == 0;) { sim = _getch();  if ((sim >= zero) && (sim <= nine)) { c = c * 10 + s - zero; p = 1; cout << sim - zero; } if ((sim == minus) && (zn == 0)) { zn = 1; printf("-"); } if (sim == zero) { nul = 1; } }
                            p = 0;
                            if (nul == 0) { for (; p != 8;) { sim = _getch(); if (sim == enter) { p = 8; }; if ((sim >= zero) && (sim <= nine)) { c = c * 10 + sim - zero; printf("%d", sim - zero); p++; } } }
                            p = 0;
                            if (nul == 1) { for (; p == 0;) { sim = _getch(); if (sim == enter) { p = 1; }; } }
                            if (zn == 1) { c = -c; }
                            first = c;
                        }
                        else {
                            first = 0;
                            cout << "Введите первое натуральное число" << endl;
                            int c = 0;  int p = 0; int zn = 0; int nul = 0;
                            for (; p == 0;) { sim = _getch();  if ((sim >= zero) && (sim <= nine)) { c = c * 10 + s - zero; p = 1; cout << sim - zero; } if ((sim == minus) && (zn == 0)) { zn = 1; printf("-"); } if (sim == zero) { nul = 1; } }
                            p = 0;
                            if (nul == 0) { for (; p != 8;) { sim = _getch(); if (sim == enter) { p = 8; }; if ((sim >= zero) && (sim <= nine)) { c = c * 10 + sim - zero; printf("%d", sim - zero); p++; } } }
                            p = 0;
                            if (nul == 1) { for (; p == 0;) { sim = _getch(); if (sim == enter) { p = 1; }; } }
                            if (zn == 1) { c = -c; }
                            first = c;
                        }
                        
                    
                        system("cls");
                        cout << "Первое число " << first << endl;
                        cout << "Второе число " << sec << endl;
                        cout << "Выберите действие, перемещая стрелочку с помощью клавиатуры" << endl;
                        cout << "или введя номер действия(для ввода номера нажмите backspace) " << endl;
                        cout << "Выберите цифру:" << endl;
                        cout << "=>1.Сложение" << endl;
                        cout << "2.Вычитание" << endl;
                        cout << "3.Умножение" << endl;
                        cout << "4.Деление" << endl;
                        cout << "5.Возведение в степень" << endl;
                        cout << "6.Корень из числа" << endl;
                        int s = 1;
                        int in = _getch();
                        while (in != 13 && in != 8) {
                            if (in == 80) s++;
                            if (in == 72) s--;
                            while (s <= 0) { s += 6; };
                            while (s >= 7) { s -= 6; };
                            if (s == 1) {
                                system("cls");
                                cout << "Первое число " << first << endl;
                                cout << "Второе число " << sec << endl;
                                cout << "Выберите действие, перемещая стрелочку с помощью клавиатуры" << endl;
                                cout << "или введя номер действия(для ввода номера нажмите backspace) " << endl;
                                cout << "Выберите цифру:" << endl;
                                cout << "=>1.Сложение" << endl;
                                cout << "2.Вычитание" << endl;
                                cout << "3.Умножение" << endl;
                                cout << "4.Деление" << endl;
                                cout << "5.Возведение в степень" << endl;
                                cout << "6.Корень из числа" << endl;
                                in = _getch();
                            }
                            if (s == 2) {
                                system("cls");
                                cout << "Первое число " << first << endl;
                                cout << "Второе число " << sec << endl;
                                cout << "Выберите действие, перемещая стрелочку с помощью клавиатуры" << endl;
                                cout << "или введя номер действия(для ввода номера нажмите backspace) " << endl;
                                cout << "Выберите цифру:" << endl;
                                cout << "1.Сложение" << endl;
                                cout << "=>2.Вычитание" << endl;
                                cout << "3.Умножение" << endl;
                                cout << "4.Деление" << endl;
                                cout << "5.Возведение в степень" << endl;
                                cout << "6.Корень из числа" << endl;
                                in = _getch();
                            }
                            if (s == 3) {
                                system("cls");
                                cout << "Первое число " << first << endl;
                                cout << "Второе число " << sec << endl;
                                cout << "Выберите действие, перемещая стрелочку с помощью клавиатуры" << endl;
                                cout << "или введя номер действия(для ввода номера нажмите backspace) " << endl;
                                cout << "Выберите цифру:" << endl;
                                cout << "1.Сложение" << endl;
                                cout << "2.Вычитание" << endl;
                                cout << "=>3.Умножение" << endl;
                                cout << "4.Деление" << endl;
                                cout << "5.Возведение в степень" << endl;
                                cout << "6.Корень из числа" << endl;


                                in = _getch();
                            }
                            if (s == 4) {
                                system("cls");
                                cout << "Первое число " << first << endl;
                                cout << "Второе число " << sec << endl;
                                cout << "Выберите действие, перемещая стрелочку с помощью клавиатуры" << endl;
                                cout << "или введя номер действия(для ввода номера нажмите backspace) " << endl;
                                cout << "Выберите цифру:" << endl;
                                cout << "1.Сложение" << endl;
                                cout << "2.Вычитание" << endl;
                                cout << "3.Умножение" << endl;
                                cout << "=>4.Деление" << endl;
                                cout << "5.Возведение в степень" << endl;
                                cout << "6.Корень из числа" << endl;
                                in = _getch();
                            }
                            if (s == 5) {
                                system("cls");
                                cout << "Первое число " << first << endl;
                                cout << "Второе число " << sec << endl;
                                cout << "Выберите действие, перемещая стрелочку с помощью клавиатуры" << endl;
                                cout << "или введя номер действия(для ввода номера нажмите backspace) " << endl;
                                cout << "Выберите цифру:" << endl;
                                cout << "1.Сложение" << endl;
                                cout << "2.Вычитание" << endl;
                                cout << "3.Умножение" << endl;
                                cout << "4.Деление" << endl;
                                cout << "=>5.Возведение в степень" << endl;
                                cout << "6.Корень из числа" << endl;
                                in = _getch();
                            }
                            if (s == 6) {
                                system("cls");
                                cout << "Первое число " << first << endl;
                                cout << "Второе число " << sec << endl;
                                cout << "Выберите действие, перемещая стрелочку с помощью клавиатуры" << endl;
                                cout << "или введя номер действия(для ввода номера нажмите backspace) " << endl;
                                cout << "Выберите цифру:" << endl;
                                cout << "1.Сложение" << endl;
                                cout << "2.Вычитание" << endl;
                                cout << "3.Умножение" << endl;
                                cout << "4.Деление" << endl;
                                cout << "5.Возведение в степень" << endl;
                                cout << "=>6.Корень из числа" << endl;
                                in = _getch();
                            }
                        }
                        if (in == 13) {
                            otv1 = first + sec;
                            otv2 = first - sec;
                            otv3 = first * sec;
                            otv6 = pow(first, 1.0 / sec);
                            if (s == 1) {
                                cout << otv1 << endl;
                                otv == otv1;
                            }
                            if (s == 2) {
                                cout << otv2 << endl;
                                otv == otv2;
                            }
                            if (s == 3) {
                                cout << otv3 << endl;
                                otv == otv3;
                            }
                            if (s == 4) {
                                if (sec != 0) {
                                    otv4 = first / sec;
                                    cout << "Результат: " << endl;
                                    cout << "Целая часть:" << otv4 << "     Остаток от деления:" << first % sec << endl;
                                    otv == otv4;
                                }
                                else { cout << "Нет ответа, так как делить на ноль нельзя" << endl; }
                            }
                            otv5 = pow(first, sec);
                            if (s == 5) {
                                if (sec > 42) {
                                    cout << "Вы ввели слишком большой показатель степени " << endl;
                                }
                                else {
                                    cout << "Результат " << otv5 << endl;
                                    otv == otv5;
                                };
                            }
                            if (s == 6) {
                                if (sec > 100000) {
                                    cout << "Вы ввели cлишком большую степень корня" << endl;
                                }
                                else if (sec == 0) {
                                    cout << "Степень корня не может быть нулем" << endl;
                                }
                                else
                                {
                                    cout << "Результат " << otv6 << endl;
                                }
                                otv == otv6;
                            }
                            system("pause");  pau = 1;

                        }
                        if (in == 8) {
                            cout << "Введите номер действия:";
                            cin >> str;
                            while (k != 0) {
                                if ((strlen(str) != 1) || (str[0] < 49) || (str[0] > 56)) { IsBreak = true; }
                                else { IsBreak = false; }

                                if (IsBreak == true) {
                                    k += 1;
                                    cout << "Не цифра" << endl;
                                    cout << "Выберите номер действия" << endl;
                                    cin >> str;
                                }
                                else { break; }
                            };
                            if (num_com == 0) {
                                for (int i = 0; i < strlen(str); i += 1) {
                                    int figure = (int)str[i] - (int)'0';
                                    num_com = num_com * 10 + figure;
                                }
                            }
                            else {
                                num_com = 0;
                                for (int i = 0; i < strlen(str); i += 1) {
                                    int figure = (int)str[i] - (int)'0';
                                    num_com = num_com * 10 + figure;
                                }
                            }
                            otv1 = first + sec;
                            otv2 = first - sec;
                            otv3 = first * sec;

                            otv6 = pow(first, 1.0 / sec);
                            if (num_com == 1) {
                                cout << "Результат " << otv1 << endl;
                                otv == otv1;
                            }
                            if (num_com == 2) {
                                cout << "Результат " << otv2 << endl;
                                otv == otv2;
                            }
                            if (num_com == 3) {
                                cout << "Результат " << otv3 << endl;
                                otv == otv3;
                            }
                            if (num_com == 4) {
                                if (sec != 0) {
                                    otv4 = first / sec;
                                    cout << "Результат: " << endl;
                                    cout << "Целая часть:" << otv4 << "     Остаток от деления:" << first % sec << endl;
                                    otv == otv4;
                                }
                                else { cout << "Нет ответа, так как делить на ноль нельзя" << endl; }
                            }
                            otv5 = pow(first, sec);
                            if (num_com == 5) {
                                if (sec > 42) {
                                    cout << "Вы ввели слишком большой показатель степени " << endl;
                                }
                                else {
                                    cout << "Результат " << otv5 << endl;
                                    otv == otv5;
                                };
                            }
                            if (num_com == 6) {
                                if (sec > 100000) {
                                    cout << "Вы ввели cлишком большую степень корня" << endl;
                                }
                                else if (sec == 0) {
                                    cout << "Степень корня не может быть нулем" << endl;
                                }
                                else
                                {
                                    cout << "Результат " << otv6 << endl;
                                }
                                otv == otv6;
                            }
                            system("pause");  pau = 1;
                        }
                    }
                }
            }
        
        else if (in == 8) {
            cout << "Введите номер действия:";
            cin >> str;
            while (k != 0) {
                if ((strlen(str) > 1) || (str[0] < 49) || (str[0] > 56)) { IsBreak = true; }
                else { IsBreak = false; }

                if (IsBreak == true) {
                    k += 1;
                    cout << "Не цифра" << endl;
                    cout << "Выберите цифру" << endl;
                    cin >> str;
                }
                else { break; }
            }
            if (num_com == 0) {
                for (int i = 0; i < strlen(str); i += 1) {
                    int figure = (int)str[i] - (int)'0';
                    num_com = num_com * 10 + figure;
                }
            }
            else {
                num_com = 0;
                for (int i = 0; i < strlen(str); i += 1) {
                    int figure = (int)str[i] - (int)'0';
                    num_com = num_com * 10 + figure;
                }
            }
            if ((num_com == 1) || (num_com == 2) || (num_com == 3) || (num_com == 4) || (num_com == 5) || (num_com == 6)) {
                if (first == 0) {
                    cout << "Введите первое натуральное число" << endl;
                    int c = 0;  int p = 0; int zn = 0; int nul = 0;
                    for (; p == 0;) { sim = _getch();  if ((sim >= zero) && (sim <= nine)) { c = c * 10 + s - zero; p = 1; cout << sim - zero; } if ((sim == minus) && (zn == 0)) { zn = 1; printf("-"); } if (sim == zero) { nul = 1; } }
                    p = 0;
                    if (nul == 0) { for (; p != 8;) { sim = _getch(); if (sim == enter) { p = 8; }; if ((sim >= zero) && (sim <= nine)) { c = c * 10 + sim - zero; printf("%d", sim - zero); p++; } } }
                    p = 0;
                    if (nul == 1) { for (; p == 0;) { sim = _getch(); if (sim == enter) { p = 1; }; } }
                    if (zn == 1) { c = -c; }
                    first = c;
                    cout << "Введите второе натуральное число" << endl;
                     c = 0;   p = 0;  zn = 0;  nul = 0;
                    for (; p == 0;) { sim = _getch();  if ((sim >= zero) && (sim <= nine)) { c = c * 10 + s - zero; p = 1; cout << sim - zero; } if ((sim == minus) && (zn == 0)) { zn = 1; printf("-"); } if (sim == zero) { nul = 1; } }
                    p = 0;
                    if (nul == 0) { for (; p != 8;) { sim = _getch(); if (sim == enter) { p = 8; }; if ((sim >= zero) && (sim <= nine)) { c = c * 10 + sim - zero; printf("%d", sim - zero); p++; } } }
                    p = 0;
                    if (nul == 1) { for (; p == 0;) { sim = _getch(); if (sim == enter) { p = 1; }; } }
                    if (zn == 1) { c = -c; }
                    sec = c;
                }

                otv1 = first + sec;
                otv2 = first - sec;
                otv3 = first * sec;
                otv6 = pow(first, 1.0 / sec);
                if (num_com == 1) {
                    cout << "Результат " << otv1 << endl;
                    otv == otv1;
                }
                if (num_com == 2) {
                    cout << "Результат " << otv2 << endl;
                    otv == otv2;
                }
                if (num_com == 3) {
                    cout << "Результат " << otv3 << endl;
                    otv == otv3;
                }
                if (num_com == 4) {
                    if (sec != 0) {
                        otv4 = first / sec;
                        cout << "Результат: " << endl;
                        cout << "Целая часть:" << otv4 << "     Остаток от деления:" << first % sec << endl;
                        otv == otv4;
                    }
                    else { cout << "Нет ответа, так как делить на ноль нельзя" << endl; }
                }
                otv5 = pow(first, sec);
                if (num_com == 5) {
                    if (sec > 42) {
                        cout << "Вы ввели слишком большой показатель степени " << endl;
                    }
                    else {
                        cout << "Результат " << otv5 << endl;
                        otv == otv5;
                    };
                }
                if (num_com == 6) {
                    if (sec > 100000) {
                        cout << "Вы ввели cлишком большую степень корня" << endl;
                    }
                    else  if (sec == 0) {
                        cout << "Степень корня не может быть нулем" << endl;
                    }
                    else
                    {
                        cout << "Результат " << otv6 << endl;
                    }
                    otv == otv6;
                }
                system("pause");  pau = 1;
            }
            else if (num_com == 7) {
                if (first == 0) {
                    cout << "Введите первое  натуральное число" << endl;
                    cin >> str;
                    int c = 0;  int p = 0; int zn = 0; int nul = 0;
                    for (; p == 0;) { sim = _getch();  if ((sim >= zero) && (sim <= nine)) { c = c * 10 + s - zero; p = 1; cout << sim - zero; } if ((sim == minus) && (zn == 0)) { zn = 1; printf("-"); } if (sim == zero) { nul = 1; } }
                    p = 0;
                    if (nul == 0) { for (; p != 8;) { sim = _getch(); if (sim == enter) { p = 8; }; if ((sim >= zero) && (sim <= nine)) { c = c * 10 + sim - zero; printf("%d", sim - zero); p++; } } }
                    p = 0;
                    if (nul == 1) { for (; p == 0;) { sim = _getch(); if (sim == enter) { p = 1; }; } }
                    if (zn == 1) { c = -c; }
                    first = c;
                }
                else {
                    first = 0;
                    cout << "Введите первое  натуральное число" << endl;
                    cin >> str;
                    cin >> str;
                    int c = 0;  int p = 0; int zn = 0; int nul = 0;
                    for (; p == 0;) { sim = _getch();  if ((sim >= zero) && (sim <= nine)) { c = c * 10 + s - zero; p = 1; cout << sim - zero; } if ((sim == minus) && (zn == 0)) { zn = 1; printf("-"); } if (sim == zero) { nul = 1; } }
                    p = 0;
                    if (nul == 0) { for (; p != 8;) { sim = _getch(); if (sim == enter) { p = 8; }; if ((sim >= zero) && (sim <= nine)) { c = c * 10 + sim - zero; printf("%d", sim - zero); p++; } } }
                    p = 0;
                    if (nul == 1) { for (; p == 0;) { sim = _getch(); if (sim == enter) { p = 1; }; } }
                    if (zn == 1) { c = -c; }
                    first = c;
                }
                system("cls");
                cout << "Первое число " << first << endl;
                cout << "Второе число " << sec << endl;
                cout << "Выберите действие, перемещая стрелочку с помощью клавиатуры" << endl;
                cout << "или введя номер действия(для ввода номера нажмите backspace) " << endl;
                cout << "Выберите цифру:" << endl;
                cout << "=>1.Сложение" << endl;
                cout << "2.Вычитание" << endl;
                cout << "3.Умножение" << endl;
                cout << "4.Деление" << endl;
                cout << "5.Возведение в степень" << endl;
                cout << "6.Корень из числа" << endl;
                cout << "7.Введите второе число " << endl;

                int s = 1;
                int in = _getch();
                while (in != 13 && in != 8) {
                    if (in == 80) s++;//если клавиша вверх, то стрелочка вверх
                    if (in == 72) s--;
                    while (s <= 0) { s += 7; };
                    while (s >= 8) { s -= 7; };
                    if (s == 1) {
                        system("cls");
                        cout << "Первое число " << first << endl;
                        cout << "Второе число " << sec << endl;
                        cout << "Выберите действие, перемещая стрелочку с помощью клавиатуры" << endl;
                        cout << "или введя номер действия(для ввода номера нажмите backspace) " << endl;
                        cout << "Выберите цифру:" << endl;
                        cout << "=>1.Сложение" << endl;
                        cout << "2.Вычитание" << endl;
                        cout << "3.Умножение" << endl;
                        cout << "4.Деление" << endl;
                        cout << "5.Возведение в степень" << endl;
                        cout << "6.Корень из числа" << endl;
                        cout << "7.Введите второе число " << endl;
                        in = _getch();
                    }
                    if (s == 2) {
                        system("cls");
                        cout << "Первое число " << first << endl;
                        cout << "Второе число " << sec << endl;
                        cout << "Выберите действие, перемещая стрелочку с помощью клавиатуры" << endl;
                        cout << "или введя номер действия(для ввода номера нажмите backspace)" << endl;
                        cout << "Выберите цифру:" << endl;
                        cout << "1.Сложение" << endl;
                        cout << "=>2.Вычитание" << endl;
                        cout << "3.Умножение" << endl;
                        cout << "4.Деление" << endl;
                        cout << "5.Возведение в степень" << endl;
                        cout << "6.Корень из числа" << endl;
                        cout << "7.Введите второе число " << endl;
                        in = _getch();
                    }
                    if (s == 3) {
                        system("cls");
                        cout << "Первое число " << first << endl;
                        cout << "Второе число " << sec << endl;
                        cout << "Выберите действие, перемещая стрелочку с помощью клавиатуры" << endl;
                        cout << "или введя номер действия(для ввода номера нажмите backspace)" << endl;
                        cout << "Выберите цифру:" << endl;
                        cout << "1.Сложение" << endl;
                        cout << "2.Вычитание" << endl;
                        cout << "=>3.Умножение" << endl;
                        cout << "4.Деление" << endl;
                        cout << "5.Возведение в степень" << endl;
                        cout << "6.Корень из числа" << endl;
                        cout << "7.Введите второе число " << endl;
                        in = _getch();
                    }
                    if (s == 4) {
                        system("cls");
                        cout << "Первое число " << first << endl;
                        cout << "Второе число " << sec << endl;
                        cout << "Выберите действие, перемещая стрелочку с помощью клавиатуры" << endl;
                        cout << "или введя номер действия(для ввода номера нажмите backspace)" << endl;
                        cout << "Выберите цифру:" << endl;
                        cout << "1.Сложение" << endl;
                        cout << "2.Вычитание" << endl;
                        cout << "3.Умножение" << endl;
                        cout << "=>4.Деление" << endl;
                        cout << "5.Возведение в степень" << endl;
                        cout << "6.Корень из числа" << endl;
                        cout << "7.Введите второе число " << endl;
                        in = _getch();
                    }
                    if (s == 5) {
                        system("cls");
                        cout << "Первое число " << first << endl;
                        cout << "Второе число " << sec << endl;
                        cout << "Выберите действие, перемещая стрелочку с помощью клавиатуры" << endl;
                        cout << "или введя номер действия(для ввода номера нажмите backspace)" << endl;
                        cout << "Выберите цифру:" << endl;
                        cout << "1.Сложение" << endl;
                        cout << "2.Вычитание" << endl;
                        cout << "3.Умножение" << endl;
                        cout << "4.Деление" << endl;
                        cout << "=>5.Возведение в степень" << endl;
                        cout << "6.Корень из числа" << endl;
                        cout << "7.Введите второе число " << endl;
                        in = _getch();
                    }
                    if (s == 6) {
                        system("cls");
                        cout << "Первое число " << first << endl;
                        cout << "Второе число " << sec << endl;
                        cout << "Выберите действие, перемещая стрелочку с помощью клавиатуры" << endl;
                        cout << "или введя номер действия(для ввода номера нажмите backspace)" << endl;
                        cout << "Выберите цифру:" << endl;
                        cout << "1.Сложение" << endl;
                        cout << "2.Вычитание" << endl;
                        cout << "3.Умножение" << endl;
                        cout << "4.Деление" << endl;
                        cout << "5.Возведение в степень" << endl;
                        cout << "=>6.Корень из числа" << endl;
                        cout << "7.Введите второе число " << endl;
                        in = _getch();
                    }
                    if (s == 7) {
                        system("cls");
                        cout << "Первое число " << first << endl;
                        cout << "Второе число " << sec << endl;
                        cout << "Выберите действие, перемещая стрелочку с помощью клавиатуры" << endl;
                        cout << "или введя номер действия(для ввода номера нажмите backspace)" << endl;
                        cout << "Выберите цифру:" << endl;
                        cout << "1.Сложение" << endl;
                        cout << "2.Вычитание" << endl;
                        cout << "3.Умножение" << endl;
                        cout << "4.Деление" << endl;
                        cout << "5.Возведение в степень" << endl;
                        cout << "6.Корень из числа" << endl;
                        cout << "=>7.Введите второе число " << endl;
                        in = _getch();
                    }
                }
                if (in == 13) {
                    if (s == 1 || s == 2 || s == 3 || s == 4 || s == 5 || s == 6) {
                        if (sec == 0) {
                            cout << "Введите второе натуральное число" << endl;
                            cin >> str;
                            int c = 0;  int p = 0; int zn = 0; int nul = 0;
                            for (; p == 0;) { sim = _getch();  if ((sim >= zero) && (sim <= nine)) { c = c * 10 + s - zero; p = 1; cout << sim - zero; } if ((sim == minus) && (zn == 0)) { zn = 1; printf("-"); } if (sim == zero) { nul = 1; } }
                            p = 0;
                            if (nul == 0) { for (; p != 8;) { sim = _getch(); if (sim == enter) { p = 8; }; if ((sim >= zero) && (sim <= nine)) { c = c * 10 + sim - zero; printf("%d", sim - zero); p++; } } }
                            p = 0;
                            if (nul == 1) { for (; p == 0;) { sim = _getch(); if (sim == enter) { p = 1; }; } }
                            if (zn == 1) { c = -c; }
                            sec = c;
                        }
                        otv1 = first + sec;
                        otv2 = first - sec;
                        otv3 = first * sec;

                        otv6 = pow(first, 1.0 / sec);
                        if (s == 1) {
                            cout << "Результат " << otv1 << endl;
                            otv == otv1;
                        }
                        if (s == 2) {
                            cout << "Результат " << otv2 << endl;
                            otv == otv2;
                        }
                        if (s == 3) {
                            cout << "Результат " << otv3 << endl;
                            otv == otv3;
                        }
                        if (s == 4) {
                            if (sec != 0) {
                                otv4 = first / sec;
                                cout << "Результат: " << endl;
                                cout << "Целая часть:" << otv4 << "     Остаток от деления:" << first % sec << endl;
                                otv == otv4;
                            }
                            else { cout << "Нет ответа, так как делить на ноль нельзя" << endl; }
                        }
                        otv5 = pow(first, sec);
                        if (s == 5) {
                            if (sec > 42) {
                                cout << "Вы ввели слишком большой показатель степени " << endl;
                            }
                            else {
                                cout << "Результат " << otv5 << endl;
                                otv == otv5;
                            };
                        }
                        if (s == 6) {
                            if (sec > 100000) {
                                cout << "Вы ввели cлишком большую степень корня" << endl;
                            }
                            else  if (sec == 0) {
                                cout << "Степень корня не может быть нулем" << endl;
                            }
                            else
                            {
                                cout << "Результат " << otv6 << endl;
                            }
                            otv == otv6;
                        }
                    }
                    if (s == 7) {
                        if (sec == 0) {
                            cout << "Введите второе натуральное число" << endl;
                            cin >> str;
                            cin >> str;
                            int c = 0;  int p = 0; int zn = 0; int nul = 0;
                            for (; p == 0;) { sim = _getch();  if ((sim >= zero) && (sim <= nine)) { c = c * 10 + s - zero; p = 1; cout << sim - zero; } if ((sim == minus) && (zn == 0)) { zn = 1; printf("-"); } if (sim == zero) { nul = 1; } }
                            p = 0;
                            if (nul == 0) { for (; p != 8;) { sim = _getch(); if (sim == enter) { p = 8; }; if ((sim >= zero) && (sim <= nine)) { c = c * 10 + sim - zero; printf("%d", sim - zero); p++; } } }
                            p = 0;
                            if (nul == 1) { for (; p == 0;) { sim = _getch(); if (sim == enter) { p = 1; }; } }
                            if (zn == 1) { c = -c; }
                            sec = c;
                        }
                        else {
                            sec = 0;
                            cout << "Введите второе натуральное число" << endl;
                            cin >> str;
                            cin >> str;
                            int c = 0;  int p = 0; int zn = 0; int nul = 0;
                            for (; p == 0;) { sim = _getch();  if ((sim >= zero) && (sim <= nine)) { c = c * 10 + s - zero; p = 1; cout << sim - zero; } if ((sim == minus) && (zn == 0)) { zn = 1; printf("-"); } if (sim == zero) { nul = 1; } }
                            p = 0;
                            if (nul == 0) { for (; p != 8;) { sim = _getch(); if (sim == enter) { p = 8; }; if ((sim >= zero) && (sim <= nine)) { c = c * 10 + sim - zero; printf("%d", sim - zero); p++; } } }
                            p = 0;
                            if (nul == 1) { for (; p == 0;) { sim = _getch(); if (sim == enter) { p = 1; }; } }
                            if (zn == 1) { c = -c; }
                            sec = c;
                        }
                        cout << "Первое число " << first << endl;
                        cout << "Второе число " << sec << endl;
                        cout << "Выберите действие, перемещая стрелочку с помощью клавиатуры" << endl;
                        cout << "или введя номер действия(для ввода номера нажмите backspace) " << endl;
                        cout << "Выберите цифру:" << endl;
                        cout << "=>1.Сложение" << endl;
                        cout << "2.Вычитание" << endl;
                        cout << "3.Умножение" << endl;
                        cout << "4.Деление" << endl;
                        cout << "5.Возведение в степень" << endl;
                        cout << "6.Корень из числа" << endl;
                        int s = 1;
                        int in = _getch();
                        while (in != 13 && in != 8) {
                            if (in == 80) s++;
                            if (in == 72) s--;
                            while (s <= 0) { s += 6; };
                            while (s >= 7) { s -= 6; };
                            if (s == 1) {
                                system("cls");
                                cout << "Первое число " << first << endl;
                                cout << "Второе число " << sec << endl;
                                cout << "Выберите действие, перемещая стрелочку с помощью клавиатуры" << endl;
                                cout << "или введя номер действия(для ввода номера нажмите backspace) " << endl;
                                cout << "Выберите цифру:" << endl;
                                cout << "=>1.Сложение" << endl;
                                cout << "2.Вычитание" << endl;
                                cout << "3.Умножение" << endl;
                                cout << "4.Деление" << endl;
                                cout << "5.Возведение в степень" << endl;
                                cout << "6.Корень из числа" << endl;
                                in = _getch();
                            }
                            if (s == 2) {
                                system("cls");
                                cout << "Первое число " << first << endl;
                                cout << "Второе число " << sec << endl;
                                cout << "Выберите действие, перемещая стрелочку с помощью клавиатуры" << endl;
                                cout << "или введя номер действия(для ввода номера нажмите backspace) " << endl;
                                cout << "Выберите цифру:" << endl;
                                cout << "1.Сложение" << endl;
                                cout << "=>2.Вычитание" << endl;
                                cout << "3.Умножение" << endl;
                                cout << "4.Деление" << endl;
                                cout << "5.Возведение в степень" << endl;
                                cout << "6.Корень из числа" << endl;
                                in = _getch();
                            }
                            if (s == 3) {
                                system("cls");
                                cout << "Первое число " << first << endl;
                                cout << "Второе число " << sec << endl;
                                cout << "Выберите действие, перемещая стрелочку с помощью клавиатуры" << endl;
                                cout << "или введя номер действия(для ввода номера нажмите backspace) " << endl;
                                cout << "Выберите цифру:" << endl;
                                cout << "1.Сложение" << endl;
                                cout << "2.Вычитание" << endl;
                                cout << "=>3.Умножение" << endl;
                                cout << "4.Деление" << endl;
                                cout << "5.Возведение в степень" << endl;
                                cout << "6.Корень из числа" << endl;


                                in = _getch();
                            }
                            if (s == 4) {
                                system("cls");
                                cout << "Первое число " << first << endl;
                                cout << "Второе число " << sec << endl;
                                cout << "Выберите действие, перемещая стрелочку с помощью клавиатуры" << endl;
                                cout << "или введя номер действия(для ввода номера нажмите backspace) " << endl;
                                cout << "Выберите цифру:" << endl;
                                cout << "1.Сложение" << endl;
                                cout << "2.Вычитание" << endl;
                                cout << "3.Умножение" << endl;
                                cout << "=>4.Деление" << endl;
                                cout << "5.Возведение в степень" << endl;
                                cout << "6.Корень из числа" << endl;
                                in = _getch();
                            }
                            if (s == 5) {
                                system("cls");
                                cout << "Первое число " << first << endl;
                                cout << "Второе число " << sec << endl;
                                cout << "Выберите действие, перемещая стрелочку с помощью клавиатуры" << endl;
                                cout << "или введя номер действия(для ввода номера нажмите backspace) " << endl;
                                cout << "Выберите цифру:" << endl;
                                cout << "1.Сложение" << endl;
                                cout << "2.Вычитание" << endl;
                                cout << "3.Умножение" << endl;
                                cout << "4.Деление" << endl;
                                cout << "=>5.Возведение в степень" << endl;
                                cout << "6.Корень из числа" << endl;
                                in = _getch();
                            }
                            if (s == 6) {
                                system("cls");
                                cout << "Первое число " << first << endl;
                                cout << "Второе число " << sec << endl;
                                cout << "Выберите действие, перемещая стрелочку с помощью клавиатуры" << endl;
                                cout << "или введя номер действия(для ввода номера нажмите backspace) " << endl;
                                cout << "Выберите цифру:" << endl;
                                cout << "1.Сложение" << endl;
                                cout << "2.Вычитание" << endl;
                                cout << "3.Умножение" << endl;
                                cout << "4.Деление" << endl;
                                cout << "5.Возведение в степень" << endl;
                                cout << "=>6.Корень из числа" << endl;
                                in = _getch();
                            }
                        }
                        if (in == 13) {
                            otv1 = first + sec;
                            otv2 = first - sec;
                            otv3 = first * sec;
                            otv6 = pow(first, 1.0 / sec);
                            if (s == 1) {
                                cout << "Результат " << otv1 << endl;
                                otv == otv1;
                            }
                            if (s == 2) {
                                cout << "Результат " << otv2 << endl;
                                otv == otv2;
                            }
                            if (s == 3) {
                                cout << "Результат " << otv3 << endl;
                                otv == otv3;
                            }
                            if (s == 4) {
                                if (sec != 0) {
                                    otv4 = first / sec;
                                    cout << "Результат: " << endl;
                                    cout << "Целая часть:" << otv4 << "     Остаток от деления:" << first % sec << endl;
                                    otv == otv4;
                                }
                                else { cout << "Нет ответа, так как делить на ноль нельзя" << endl; }
                            }
                            otv5 = pow(first, sec);
                            if (s == 5) {
                                if (sec > 42) {
                                    cout << "Вы ввели слишком большой показатель степени " << endl;
                                }
                                else {
                                    cout << "Результат " << otv5 << endl;
                                    otv == otv5;
                                };
                            }
                            if (s == 6) {
                                if (sec > 100000) {
                                    cout << "Вы ввели cлишком большую степень корня" << endl;
                                }
                                else if (sec == 0) {
                                    cout << "Степень корня не может быть нулем" << endl;
                                }
                                else
                                {
                                    cout << "Результат " << otv6 << endl;
                                }
                                otv == otv6;
                            }
                            system("pause");  pau = 1;
                        }
                        if (in == 8) {
                            cout << "Введите номер действия:";
                            cin >> str;
                            while (k != 0) {
                                if ((strlen(str) != 1) || (str[0] < 49) || (str[0] > 56)) { IsBreak = true; }
                                else { IsBreak = false; }

                                if (IsBreak == true) {
                                    k += 1;
                                    cout << "Не цифра" << endl;
                                    cout << "Выберите номер действия" << endl;
                                    cin >> str;
                                }
                                else { break; }
                            };
                            if (num_com == 0) {
                                for (int i = 0; i < strlen(str); i += 1) {
                                    int figure = (int)str[i] - (int)'0';
                                    num_com = num_com * 10 + figure;
                                }
                            }
                            else {
                                num_com = 0;
                                for (int i = 0; i < strlen(str); i += 1) {
                                    int figure = (int)str[i] - (int)'0';
                                    num_com = num_com * 10 + figure;
                                }
                            }
                            otv1 = first + sec;
                            otv2 = first - sec;
                            otv3 = first * sec;
                            otv6 = pow(first, 1.0 / sec);
                            if (num_com == 1) {
                                cout << "Результат " << otv1 << endl;
                                otv == otv1;
                            }
                            if (num_com == 2) {
                                cout << "Результат " << otv2 << endl;
                                otv == otv2;
                            }
                            if (num_com == 3) {
                                cout << "Результат " << otv3 << endl;
                                otv == otv3;
                            }
                            if (num_com == 4) {
                                if (sec != 0) {
                                    otv4 = first / sec;
                                    cout << "Результат: " << endl;
                                    cout << "Целая часть:" << otv4 << "     Остаток от деления:" << first % sec << endl;
                                    otv == otv4;
                                }
                                else { cout << "Нет ответа, так как делить на ноль нельзя" << endl; }
                            }
                            otv5 = pow(first, sec);
                            if (num_com == 5) {
                                if (sec > 42) {
                                    cout << "Вы ввели слишком большой показатель степени " << endl;
                                }
                                else {
                                    cout << "Результат " << otv5 << endl;
                                    otv == otv5;
                                };
                            }
                            if (num_com == 6) {
                                if (sec > 100000) {
                                    cout << "Вы ввели cлишком большую степень корня" << endl;
                                }
                                else if (sec == 0) {
                                    cout << "Степень корня не может быть нулем" << endl;
                                }
                                else
                                {
                                    cout << "Результат " << otv6 << endl;
                                }
                                otv == otv6;
                            }
                            system("pause");  pau = 1;
                        }
                    }
                }
                if (in == 8) {
                    cout << "Введите номер действия:";
                    cin >> str;
                    while (k != 0) {
                        if ((strlen(str) != 1) || (str[0] < 49) || (str[0] > 56)) { IsBreak = true; }
                        else { IsBreak = false; }

                        if (IsBreak == true) {
                            k += 1;
                            cout << "Не цифра" << endl;
                            cout << "Введите номер действия" << endl;
                            cin >> str;
                        }
                        else { break; }
                    };
                    if (num_com == 0) {
                        for (int i = 0; i < strlen(str); i += 1) {
                            int figure = (int)str[i] - (int)'0';
                            num_com = num_com * 10 + figure;
                        }
                    }
                    else {
                        num_com = 0;
                        for (int i = 0; i < strlen(str); i += 1) {
                            int figure = (int)str[i] - (int)'0';
                            num_com = num_com * 10 + figure;
                        }
                    }
                    if (num_com == 1 || num_com == 2 || num_com == 3 || num_com == 4 || num_com == 5 || num_com == 6) {
                        if (sec == 0) {
                            cout << "Введите второе натуральное число" << endl;
                            cin >> str;
                            while (k != 0) {
                                for (int i = 0; str[i] != '\0'; i++)
                                    if (str[i] < 48 || str[i]>57 || strlen(str) > 7) {
                                        IsBreak = true; break;
                                    }
                                    else { IsBreak = false; }

                                if (IsBreak == true) {
                                    k += 1;
                                    cout << "Не натуральное число или цифр в записи больше 7" << endl;
                                    cout << "Введите второе натуральное число" << endl;
                                    cin >> str;
                                }
                                else { break; }
                            };
                            for (int i = 0; i < strlen(str); i += 1) {
                                int figure = (int)str[i] - (int)'0';
                                sec = sec * 10 + figure;
                            }
                        }
                        otv1 = first + sec;
                        otv2 = first - sec;
                        otv3 = first * sec;

                        otv6 = pow(first, 1.0 / sec);
                        if (num_com == 1) {
                            cout << "Результат " << otv1 << endl;
                            otv == otv1;
                        }
                        if (num_com == 2) {
                            cout << "Результат " << otv2 << endl;
                            otv == otv2;
                        }
                        if (num_com == 3) {
                            cout << "Результат " << otv3 << endl;
                            otv == otv3;
                        }
                        if (num_com == 4) {
                            if (sec != 0) {
                                otv4 = first / sec;
                                cout << "Результат: " << endl;
                                cout << "Целая часть:" << otv4 << "     Остаток от деления:" << first % sec << endl;
                                otv == otv4;
                            }
                            else { cout << "Нет ответа, так как делить на ноль нельзя" << endl; }
                        }
                        otv5 = pow(first, sec);
                        if (num_com == 5) {
                            if (sec > 42) {
                                cout << "Вы ввели слишком большой показатель степени " << endl;
                            }
                            else {
                                cout << "Результат " << otv5 << endl;
                                otv == otv5;
                            };
                        }
                        if (num_com == 6) {
                            if (sec > 100000) {
                                cout << "Вы ввели cлишком большую степень корня" << endl;
                            }
                            else  if (sec == 0) {
                                cout << "Степень корня не может быть нулем" << endl;
                            }
                            else
                            {
                                cout << "Результат " << otv6 << endl;
                            }
                            otv == otv6;
                        }
                        system("pause");  pau = 1;
                    }
                    if (num_com == 7) {
                        if (sec == 0) {
                            cout << "Введите второе натуральное число" << endl;
                            cin >> str;
                            while (k != 0) {
                                for (int i = 0; str[i] != '\0'; i++)
                                    if (str[i] < 48 || str[i]>57 || strlen(str) > 7) {
                                        IsBreak = true; break;
                                    }
                                    else { IsBreak = false; }

                                if (IsBreak == true) {
                                    k += 1;
                                    cout << "Не натуральное число или цифр в записи больше 7" << endl;
                                    cout << "Введите второе натуральное число" << endl;
                                    cin >> str;
                                }
                                else { break; }
                            };
                            for (int i = 0; i < strlen(str); i += 1) {
                                int figure = (int)str[i] - (int)'0';
                                sec = sec * 10 + figure;
                            }
                        }
                        else {
                            sec = 0;
                            cout << "Введите второе натуральное число" << endl;
                            cin >> str;
                            cin >> str;
                            int c = 0;  int p = 0; int zn = 0; int nul = 0;
                            for (; p == 0;) { sim = _getch();  if ((sim >= zero) && (sim <= nine)) { c = c * 10 + s - zero; p = 1; cout << sim - zero; } if ((sim == minus) && (zn == 0)) { zn = 1; printf("-"); } if (sim == zero) { nul = 1; } }
                            p = 0;
                            if (nul == 0) { for (; p != 8;) { sim = _getch(); if (sim == enter) { p = 8; }; if ((sim >= zero) && (sim <= nine)) { c = c * 10 + sim - zero; printf("%d", sim - zero); p++; } } }
                            p = 0;
                            if (nul == 1) { for (; p == 0;) { sim = _getch(); if (sim == enter) { p = 1; }; } }
                            if (zn == 1) { c = -c; }
                            sec = c;
                        }
                        system("cls");
                        cout << "Первое число " << first << endl;
                        cout << "Второе число " << sec << endl;
                        cout << "Выберите действие, перемещая стрелочку с помощью клавиатуры" << endl;
                        cout << "или введя номер действия(для ввода номера нажмите backspace) " << endl;
                        cout << "Выберите цифру:" << endl;
                        cout << "=>1.Сложение" << endl;
                        cout << "2.Вычитание" << endl;
                        cout << "3.Умножение" << endl;
                        cout << "4.Деление" << endl;
                        cout << "5.Возведение в степень" << endl;
                        cout << "6.Корень из числа" << endl;
                        int s = 1;
                        int in = _getch();
                        while (in != 13 && in != 8) {
                            if (in == 80) s++;
                            if (in == 72) s--;
                            while (s <= 0) { s += 6; };
                            while (s >= 7) { s -= 6; };
                            if (s == 1) {
                                system("cls");
                                cout << "Первое число " << first << endl;
                                cout << "Второе число " << sec << endl;
                                cout << "Выберите действие, перемещая стрелочку с помощью клавиатуры" << endl;
                                cout << "или введя номер действия(для ввода номера нажмите backspace) " << endl;
                                cout << "Выберите цифру:" << endl;
                                cout << "=>1.Сложение" << endl;
                                cout << "2.Вычитание" << endl;
                                cout << "3.Умножение" << endl;
                                cout << "4.Деление" << endl;
                                cout << "5.Возведение в степень" << endl;
                                cout << "6.Корень из числа" << endl;
                                in = _getch();
                            }
                            if (s == 2) {
                                system("cls");
                                cout << "Первое число " << first << endl;
                                cout << "Второе число " << sec << endl;
                                cout << "Выберите действие, перемещая стрелочку с помощью клавиатуры" << endl;
                                cout << "или введя номер действия(для ввода номера нажмите backspace) " << endl;
                                cout << "Выберите цифру:" << endl;
                                cout << "1.Сложение" << endl;
                                cout << "=>2.Вычитание" << endl;
                                cout << "3.Умножение" << endl;
                                cout << "4.Деление" << endl;
                                cout << "5.Возведение в степень" << endl;
                                cout << "6.Корень из числа" << endl;
                                in = _getch();
                            }
                            if (s == 3) {
                                system("cls");
                                cout << "Первое число " << first << endl;
                                cout << "Второе число " << sec << endl;
                                cout << "Выберите действие, перемещая стрелочку с помощью клавиатуры" << endl;
                                cout << "или введя номер действия(для ввода номера нажмите backspace) " << endl;
                                cout << "Выберите цифру:" << endl;
                                cout << "1.Сложение" << endl;
                                cout << "2.Вычитание" << endl;
                                cout << "=>3.Умножение" << endl;
                                cout << "4.Деление" << endl;
                                cout << "5.Возведение в степень" << endl;
                                cout << "6.Корень из числа" << endl;


                                in = _getch();
                            }
                            if (s == 4) {
                                system("cls");
                                cout << "Первое число " << first << endl;
                                cout << "Второе число " << sec << endl;
                                cout << "Выберите действие, перемещая стрелочку с помощью клавиатуры" << endl;
                                cout << "или введя номер действия(для ввода номера нажмите backspace) " << endl;
                                cout << "Выберите цифру:" << endl;
                                cout << "1.Сложение" << endl;
                                cout << "2.Вычитание" << endl;
                                cout << "3.Умножение" << endl;
                                cout << "=>4.Деление" << endl;
                                cout << "5.Возведение в степень" << endl;
                                cout << "6.Корень из числа" << endl;
                                in = _getch();
                            }
                            if (s == 5) {
                                system("cls");
                                cout << "Первое число " << first << endl;
                                cout << "Второе число " << sec << endl;
                                cout << "Выберите действие, перемещая стрелочку с помощью клавиатуры" << endl;
                                cout << "или введя номер действия(для ввода номера нажмите backspace) " << endl;
                                cout << "Выберите цифру:" << endl;
                                cout << "1.Сложение" << endl;
                                cout << "2.Вычитание" << endl;
                                cout << "3.Умножение" << endl;
                                cout << "4.Деление" << endl;
                                cout << "=>5.Возведение в степень" << endl;
                                cout << "6.Корень из числа" << endl;
                                in = _getch();
                            }
                            if (s == 6) {
                                system("cls");
                                cout << "Первое число " << first << endl;
                                cout << "Второе число " << sec << endl;
                                cout << "Выберите действие, перемещая стрелочку с помощью клавиатуры" << endl;
                                cout << "или введя номер действия(для ввода номера нажмите backspace) " << endl;
                                cout << "Выберите цифру:" << endl;
                                cout << "1.Сложение" << endl;
                                cout << "2.Вычитание" << endl;
                                cout << "3.Умножение" << endl;
                                cout << "4.Деление" << endl;
                                cout << "5.Возведение в степень" << endl;
                                cout << "=>6.Корень из числа" << endl;
                                in = _getch();
                            }
                        }
                        if (in == 13) {
                            otv1 = first + sec;
                            otv2 = first - sec;
                            otv3 = first * sec;
                            otv6 = pow(first, 1.0 / sec);
                            if (s == 1) {
                                cout << "Результат " << otv1 << endl;
                                otv == otv1;
                            }
                            if (s == 2) {
                                cout << "Результат " << otv2 << endl;
                                otv == otv2;
                            }
                            if (s == 3) {
                                cout << "Результат " << otv3 << endl;
                                otv == otv3;
                            }
                            if (s == 4) {
                                if (sec != 0) {
                                    otv4 = first / sec;
                                    cout << "Результат: " << endl;
                                    cout << "Целая часть:" << otv4 << "     Остаток от деления:" << first % sec << endl;
                                    otv == otv4;
                                }
                                else { cout << "Нет ответа, так как делить на ноль нельзя" << endl; }
                            }
                            otv5 = pow(first, sec);
                            if (s == 5) {
                                if (sec > 42) {
                                    cout << "Вы ввели слишком большой показатель степени " << endl;
                                }
                                else {
                                    cout << "Результат " << otv5 << endl;
                                    otv == otv5;
                                };
                            }
                            if (s == 6) {
                                if (sec > 100000) {
                                    cout << "Вы ввели cлишком большую степень корня" << endl;
                                }
                                else if (sec == 0) {
                                    cout << "Степень корня не может быть нулем" << endl;
                                }
                                else
                                {
                                    cout << "Результат " << otv6 << endl;
                                }
                                otv == otv6;
                            }
                            system("pause");  pau = 1;

                        }
                        if (in == 8) {
                            cout << "Введите номер действия:";
                            cin >> str;
                            while (k != 0) {
                                if ((strlen(str) != 1) || (str[0] < 49) || (str[0] > 56)) { IsBreak = true; }
                                else { IsBreak = false; }

                                if (IsBreak == true) {
                                    k += 1;
                                    cout << "Не цифра" << endl;
                                    cout << "Выберите номер действия" << endl;
                                    cin >> str;
                                }
                                else { break; }
                            };
                            if (num_com == 0) {
                                for (int i = 0; i < strlen(str); i += 1) {
                                    int figure = (int)str[i] - (int)'0';
                                    num_com = num_com * 10 + figure;
                                }
                            }
                            else {
                                num_com = 0;
                                for (int i = 0; i < strlen(str); i += 1) {
                                    int figure = (int)str[i] - (int)'0';
                                    num_com = num_com * 10 + figure;
                                }
                            }
                            otv1 = first + sec;
                            otv2 = first - sec;
                            otv3 = first * sec;
                            otv6 = pow(first, 1.0 / sec);
                            if (num_com == 1) {
                                cout << "Результат " << otv1 << endl;
                                otv == otv1;
                            }
                            if (num_com == 2) {
                                cout << "Результат " << otv2 << endl;
                                otv == otv2;
                            }
                            if (num_com == 3) {
                                cout << "Результат " << otv3 << endl;
                                otv == otv3;
                            }
                            if (num_com == 4) {
                                if (sec != 0) {
                                    otv4 = first / sec;
                                    cout << "Результат: " << endl;
                                    cout << "Целая часть:" << otv4 << "     Остаток от деления:" << first % sec << endl;
                                    otv == otv4;
                                }
                                else { cout << "Нет ответа, так как делить на ноль нельзя" << endl; }
                            }
                            otv5 = pow(first, sec);
                            if (num_com == 5) {
                                if (sec > 42) {
                                    cout << "Вы ввели слишком большой показатель степени " << endl;
                                }
                                else {
                                    cout << "Результат " << otv5 << endl;
                                    otv == otv5;
                                };
                            }
                            if (num_com == 6) {
                                if (sec > 100000) {
                                    cout << "Вы ввели cлишком большую степень корня" << endl;
                                }
                                else if (sec == 0) {
                                    cout << "Степень корня не может быть нулем" << endl;
                                }
                                else
                                {
                                    cout << "Результат " << otv6 << endl;
                                }
                                otv == otv6;
                            }
                            system("pause");  pau = 1;
                        }
                    }
                }
            }
            else if (num_com == 8) {
                if (sec == 0) {
                    cout << "Введите второе  натуральное число" << endl;
                    cin >> str;
                    cin >> str;
                    int c = 0;  int p = 0; int zn = 0; int nul = 0;
                    for (; p == 0;) { sim = _getch();  if ((sim >= zero) && (sim <= nine)) { c = c * 10 + s - zero; p = 1; cout << sim - zero; } if ((sim == minus) && (zn == 0)) { zn = 1; printf("-"); } if (sim == zero) { nul = 1; } }
                    p = 0;
                    if (nul == 0) { for (; p != 8;) { sim = _getch(); if (sim == enter) { p = 8; }; if ((sim >= zero) && (sim <= nine)) { c = c * 10 + sim - zero; printf("%d", sim - zero); p++; } } }
                    p = 0;
                    if (nul == 1) { for (; p == 0;) { sim = _getch(); if (sim == enter) { p = 1; }; } }
                    if (zn == 1) { c = -c; }
                    sec = c;
                }
                else {
                    sec = 0;
                    cout << "Введите второе  натуральное число" << endl;
                    cin >> str;
                    int c = 0;  int p = 0; int zn = 0; int nul = 0;
                    for (; p == 0;) { sim = _getch();  if ((sim >= zero) && (sim <= nine)) { c = c * 10 + s - zero; p = 1; cout << sim - zero; } if ((sim == minus) && (zn == 0)) { zn = 1; printf("-"); } if (sim == zero) { nul = 1; } }
                    p = 0;
                    if (nul == 0) { for (; p != 8;) { sim = _getch(); if (sim == enter) { p = 8; }; if ((sim >= zero) && (sim <= nine)) { c = c * 10 + sim - zero; printf("%d", sim - zero); p++; } } }
                    p = 0;
                    if (nul == 1) { for (; p == 0;) { sim = _getch(); if (sim == enter) { p = 1; }; } }
                    if (zn == 1) { c = -c; }
                    sec = c;
                }
                system("cls");
                cout << "Первое число " << first << endl;
                cout << "Второе число " << sec << endl;
                cout << "Выберите действие, перемещая стрелочку с помощью клавиатуры" << endl;
                cout << "или введя номер действия(для ввода номера нажмите backspace) " << endl;
                cout << "Выберите цифру:" << endl;
                cout << "=>1.Сложение" << endl;
                cout << "2.Вычитание" << endl;
                cout << "3.Умножение" << endl;
                cout << "4.Деление" << endl;
                cout << "5.Возведение в степень" << endl;
                cout << "6.Корень из числа" << endl;
                cout << "7.Введите первое число" << endl;
                int s = 1;
                int in = _getch();
                while (in != 13 && in != 8) {
                    if (in == 80) s++;
                    if (in == 72) s--;
                    while (s <= 0) { s += 6; };
                    while (s >= 7) { s -= 6; };
                    if (s == 1) {
                        system("cls");
                        cout << "Первое число " << first << endl;
                        cout << "Второе число " << sec << endl;
                        cout << "Выберите действие, перемещая стрелочку с помощью клавиатуры" << endl;
                        cout << "или введя номер действия(для ввода номера нажмите backspace) " << endl;
                        cout << "Выберите цифру:" << endl;
                        cout << "=>1.Сложение" << endl;
                        cout << "2.Вычитание" << endl;
                        cout << "3.Умножение" << endl;
                        cout << "4.Деление" << endl;
                        cout << "5.Возведение в степень" << endl;
                        cout << "6.Корень из числа" << endl;
                        cout << "7.Введите первое число" << endl;
                        in = _getch();
                    }
                    if (s == 2) {
                        system("cls");
                        cout << "Первое число " << first << endl;
                        cout << "Второе число " << sec << endl;
                        cout << "Выберите действие, перемещая стрелочку с помощью клавиатуры" << endl;
                        cout << "или введя номер действия(для ввода номера нажмите backspace)" << endl;
                        cout << "Выберите цифру:" << endl;
                        cout << "1.Сложение" << endl;
                        cout << "=>2.Вычитание" << endl;
                        cout << "3.Умножение" << endl;
                        cout << "4.Деление" << endl;
                        cout << "5.Возведение в степень" << endl;
                        cout << "6.Корень из числа" << endl;
                        cout << "7.Введите первое число" << endl;
                        in = _getch();

                    }
                    if (s == 3) {
                        system("cls");
                        cout << "Первое число " << first << endl;
                        cout << "Второе число " << sec << endl;
                        cout << "Выберите действие, перемещая стрелочку с помощью клавиатуры" << endl;
                        cout << "или введя номер действия(для ввода номера нажмите backspace)" << endl;
                        cout << "Выберите цифру:" << endl;
                        cout << "1.Сложение" << endl;
                        cout << "2.Вычитание" << endl;
                        cout << "=>3.Умножение" << endl;
                        cout << "4.Деление" << endl;
                        cout << "5.Возведение в степень" << endl;
                        cout << "6.Корень из числа" << endl;
                        cout << "7.Введите первое число" << endl;
                        in = _getch();
                    }
                    if (s == 4) {
                        system("cls");
                        cout << "Первое число " << first << endl;
                        cout << "Второе число " << sec << endl;
                        cout << "Выберите действие, перемещая стрелочку с помощью клавиатуры" << endl;
                        cout << "или введя номер действия(для ввода номера нажмите backspace)" << endl;
                        cout << "Выберите цифру:" << endl;
                        cout << "1.Сложение" << endl;
                        cout << "2.Вычитание" << endl;
                        cout << "3.Умножение" << endl;
                        cout << "=>4.Деление" << endl;
                        cout << "5.Возведение в степень" << endl;
                        cout << "6.Корень из числа" << endl;
                        cout << "7.Введите первое число" << endl;
                        in = _getch();
                    }
                    if (s == 5) {
                        system("cls");
                        cout << "Первое число " << first << endl;
                        cout << "Второе число " << sec << endl;
                        cout << "Выберите действие, перемещая стрелочку с помощью клавиатуры" << endl;
                        cout << "или введя номер действия(для ввода номера нажмите backspace)" << endl;
                        cout << "Выберите цифру:" << endl;
                        cout << "1.Сложение" << endl;
                        cout << "2.Вычитание" << endl;
                        cout << "3.Умножение" << endl;
                        cout << "4.Деление" << endl;
                        cout << "=>5.Возведение в степень" << endl;
                        cout << "6.Корень из числа" << endl;
                        cout << "7.Введите первое число" << endl;
                        in = _getch();
                    }
                    if (s == 6) {
                        system("cls");
                        cout << "Первое число " << first << endl;
                        cout << "Второе число " << sec << endl;
                        cout << "Выберите действие, перемещая стрелочку с помощью клавиатуры" << endl;
                        cout << "или введя номер действия(для ввода номера нажмите backspace)" << endl;
                        cout << "Выберите цифру:" << endl;
                        cout << "1.Сложение" << endl;
                        cout << "2.Вычитание" << endl;
                        cout << "3.Умножение" << endl;
                        cout << "4.Деление" << endl;
                        cout << "5.Возведение в степень" << endl;
                        cout << "=>6.Корень из числа" << endl;
                        cout << "7.Введите первое число" << endl;
                        in = _getch();
                    }
                    if (s == 7) {
                        system("cls");
                        cout << "Первое число " << first << endl;
                        cout << "Второе число " << sec << endl;
                        cout << "Выберите действие, перемещая стрелочку с помощью клавиатуры" << endl;
                        cout << "или введя номер действия(для ввода номера нажмите backspace)" << endl;
                        cout << "Выберите цифру:" << endl;
                        cout << "1.Сложение" << endl;
                        cout << "2.Вычитание" << endl;
                        cout << "3.Умножение" << endl;
                        cout << "4.Деление" << endl;
                        cout << "5.Возведение в степень" << endl;
                        cout << "6.Корень из числа" << endl;
                        cout << "=>7.Введите первое число" << endl;
                        in = _getch();
                    }
                }
                if (in == 13) {
                    if (s == 1 || s == 2 || s == 3 || s == 4 || s == 5 || s == 6) {
                        if (first == 0) {
                            cout << "Введите первое натуральное число" << endl;
                            cin >> str;
                            int c = 0;  int p = 0; int zn = 0; int nul = 0;
                            for (; p == 0;) { sim = _getch();  if ((sim >= zero) && (sim <= nine)) { c = c * 10 + s - zero; p = 1; cout << sim - zero; } if ((sim == minus) && (zn == 0)) { zn = 1; printf("-"); } if (sim == zero) { nul = 1; } }
                            p = 0;
                            if (nul == 0) { for (; p != 8;) { sim = _getch(); if (sim == enter) { p = 8; }; if ((sim >= zero) && (sim <= nine)) { c = c * 10 + sim - zero; printf("%d", sim - zero); p++; } } }
                            p = 0;
                            if (nul == 1) { for (; p == 0;) { sim = _getch(); if (sim == enter) { p = 1; }; } }
                            if (zn == 1) { c = -c; }
                            first = c;
                        }
                        otv1 = first + sec;
                        otv2 = first - sec;
                        otv3 = first * sec;

                        otv6 = pow(first, 1.0 / sec);
                        if (s == 1) {
                            cout << "Результат " << otv1 << endl;
                            otv == otv1;
                        }
                        if (s == 2) {
                            cout << "Результат " << otv2 << endl;
                            otv == otv2;
                        }
                        if (s == 3) {
                            cout << "Результат " << otv3 << endl;
                            otv == otv3;
                        }
                        if (s == 4) {
                            if (sec != 0) {
                                otv4 = first / sec;
                                cout << "Результат: " << endl;
                                cout << "Целая часть:" << otv4 << "     Остаток от деления:" << first % sec << endl;
                                otv == otv4;
                            }
                            else { cout << "Нет ответа, так как делить на ноль нельзя" << endl; }
                        }
                        otv5 = pow(first, sec);
                        if (s == 5) {
                            if (sec > 42) {
                                cout << "Вы ввели слишком большой показатель степени " << endl;
                            }
                            else {
                                cout << "Результат " << otv5 << endl;
                                otv == otv5;
                            };
                        }
                        if (s == 6) {
                            if (sec > 100000) {
                                cout << "Вы ввели cлишком большую степень корня" << endl;
                            }
                            else if (sec == 0) {
                                cout << "Степень корня не может быть нулем" << endl;
                            }
                            else
                            {
                                cout << "Результат " << otv6 << endl;
                            }
                            otv == otv6;
                        }
                        system("pause");  pau = 1;
                    }
                    if (s == 7) {
                        if (first == 0) {
                            cout << "Введите первое натуральное число" << endl;
                            cin >> str;
                            int c = 0;  int p = 0; int zn = 0; int nul = 0;
                            for (; p == 0;) { sim = _getch();  if ((sim >= zero) && (sim <= nine)) { c = c * 10 + s - zero; p = 1; cout << sim - zero; } if ((sim == minus) && (zn == 0)) { zn = 1; printf("-"); } if (sim == zero) { nul = 1; } }
                            p = 0;
                            if (nul == 0) { for (; p != 8;) { sim = _getch(); if (sim == enter) { p = 8; }; if ((sim >= zero) && (sim <= nine)) { c = c * 10 + sim - zero; printf("%d", sim - zero); p++; } } }
                            p = 0;
                            if (nul == 1) { for (; p == 0;) { sim = _getch(); if (sim == enter) { p = 1; }; } }
                            if (zn == 1) { c = -c; }
                            first = c;
                        }
                        else {
                            first = 0;
                            cout << "Введите первое натуральное число" << endl;
                            cin >> str;
                            int c = 0;  int p = 0; int zn = 0; int nul = 0;
                            for (; p == 0;) { sim = _getch();  if ((sim >= zero) && (sim <= nine)) { c = c * 10 + s - zero; p = 1; cout << sim - zero; } if ((sim == minus) && (zn == 0)) { zn = 1; printf("-"); } if (sim == zero) { nul = 1; } }
                            p = 0;
                            if (nul == 0) { for (; p != 8;) { sim = _getch(); if (sim == enter) { p = 8; }; if ((sim >= zero) && (sim <= nine)) { c = c * 10 + sim - zero; printf("%d", sim - zero); p++; } } }
                            p = 0;
                            if (nul == 1) { for (; p == 0;) { sim = _getch(); if (sim == enter) { p = 1; }; } }
                            if (zn == 1) { c = -c; }
                            first = c;
                        }
                        system("cls");
                        cout << "Первое число " << first << endl;
                        cout << "Второе число " << sec << endl;
                        cout << "Выберите действие, перемещая стрелочку с помощью клавиатуры" << endl;
                        cout << "или введя номер действия(для ввода номера нажмите backspace) " << endl;
                        cout << "Выберите цифру:" << endl;
                        cout << "=>1.Сложение" << endl;
                        cout << "2.Вычитание" << endl;
                        cout << "3.Умножение" << endl;
                        cout << "4.Деление" << endl;
                        cout << "5.Возведение в степень" << endl;
                        cout << "6.Корень из числа" << endl;
                        int s = 1;
                        int in = _getch();
                        while (in != 13 && in != 8) {
                            if (in == 80) s++;
                            if (in == 72) s--;
                            while (s <= 0) { s += 7; };
                            while (s >= 8) { s -= 7; };
                            if (s == 1) {
                                system("cls");
                                cout << "Первое число " << first << endl;
                                cout << "Второе число " << sec << endl;
                                cout << "Выберите действие, перемещая стрелочку с помощью клавиатуры" << endl;
                                cout << "или введя номер действия(для ввода номера нажмите backspace) " << endl;
                                cout << "Выберите цифру:" << endl;
                                cout << "=>1.Сложение" << endl;
                                cout << "2.Вычитание" << endl;
                                cout << "3.Умножение" << endl;
                                cout << "4.Деление" << endl;
                                cout << "5.Возведение в степень" << endl;
                                cout << "6.Корень из числа" << endl;

                                in = _getch();
                            }
                            if (s == 2) {
                                system("cls");
                                cout << "Первое число " << first << endl;
                                cout << "Второе число " << sec << endl;
                                cout << "Выберите действие, перемещая стрелочку с помощью клавиатуры" << endl;
                                cout << "или введя номер действия(для ввода номера нажмите backspace) " << endl;
                                cout << "Выберите цифру:" << endl;
                                cout << "1.Сложение" << endl;
                                cout << "=>2.Вычитание" << endl;
                                cout << "3.Умножение" << endl;
                                cout << "4.Деление" << endl;
                                cout << "5.Возведение в степень" << endl;
                                cout << "6.Корень из числа" << endl;
                                in = _getch();
                            }
                            if (s == 3) {
                                system("cls");
                                cout << "Первое число " << first << endl;
                                cout << "Второе число " << sec << endl;
                                cout << "Выберите действие, перемещая стрелочку с помощью клавиатуры" << endl;
                                cout << "или введя номер действия(для ввода номера нажмите backspace) " << endl;
                                cout << "Выберите цифру:" << endl;
                                cout << "1.Сложение" << endl;
                                cout << "2.Вычитание" << endl;
                                cout << "=>3.Умножение" << endl;
                                cout << "4.Деление" << endl;
                                cout << "5.Возведение в степень" << endl;
                                cout << "6.Корень из числа" << endl;


                                in = _getch();
                            }
                            if (s == 4) {
                                system("cls");
                                cout << "Первое число " << first << endl;
                                cout << "Второе число " << sec << endl;
                                cout << "Выберите действие, перемещая стрелочку с помощью клавиатуры" << endl;
                                cout << "или введя номер действия(для ввода номера нажмите backspace) " << endl;
                                cout << "Выберите цифру:" << endl;
                                cout << "1.Сложение" << endl;
                                cout << "2.Вычитание" << endl;
                                cout << "3.Умножение" << endl;
                                cout << "=>4.Деление" << endl;
                                cout << "5.Возведение в степень" << endl;
                                cout << "6.Корень из числа" << endl;
                                in = _getch();
                            }
                            if (s == 5) {
                                system("cls");
                                cout << "Первое число " << first << endl;
                                cout << "Второе число " << sec << endl;
                                cout << "Выберите действие, перемещая стрелочку с помощью клавиатуры" << endl;
                                cout << "или введя номер действия(для ввода номера нажмите backspace) " << endl;
                                cout << "Выберите цифру:" << endl;
                                cout << "1.Сложение" << endl;
                                cout << "2.Вычитание" << endl;
                                cout << "3.Умножение" << endl;
                                cout << "4.Деление" << endl;
                                cout << "=>5.Возведение в степень" << endl;
                                cout << "6.Корень из числа" << endl;
                                in = _getch();
                            }
                            if (s == 6) {
                                system("cls");
                                cout << "Первое число " << first << endl;
                                cout << "Второе число " << sec << endl;
                                cout << "Выберите действие, перемещая стрелочку с помощью клавиатуры" << endl;
                                cout << "или введя номер действия(для ввода номера нажмите backspace) " << endl;
                                cout << "Выберите цифру:" << endl;
                                cout << "1.Сложение" << endl;
                                cout << "2.Вычитание" << endl;
                                cout << "3.Умножение" << endl;
                                cout << "4.Деление" << endl;
                                cout << "5.Возведение в степень" << endl;
                                cout << "=>6.Корень из числа" << endl;
                                in = _getch();
                            }
                        }
                        if (in == 13) {
                            otv1 = first + sec;
                            otv2 = first - sec;
                            otv3 = first * sec;

                            otv6 = pow(first, 1.0 / sec);
                            if (s == 1) {
                                cout << "Результат " << otv1 << endl;
                                otv == otv1;
                            }
                            if (s == 2) {
                                cout << "Результат " << otv2 << endl;
                                otv == otv2;
                            }
                            if (s == 3) {
                                cout << "Результат " << otv3 << endl;
                                otv == otv3;
                            }
                            if (s == 4) {
                                if (sec != 0) {
                                    otv4 = first / sec;
                                    cout << "Результат: " << endl;
                                    cout << "Целая часть:" << otv4 << "     Остаток от деления:" << first % sec << endl;
                                    otv == otv4;
                                }
                                else { cout << "Нет ответа, так как делить на ноль нельзя" << endl; }
                            }
                            otv5 = pow(first, sec);
                            if (s == 5) {
                                if (sec > 42) {
                                    cout << "Вы ввели слишком большой показатель степени " << endl;
                                }
                                else {
                                    cout << "Результат " << otv5 << endl;
                                    otv == otv5;
                                };
                            }
                            if (s == 6) {
                                if (sec > 100000) {
                                    cout << "Вы ввели cлишком большую степень корня" << endl;
                                }
                                else  if (sec == 0) {
                                    cout << "Степень корня не может быть нулем" << endl;
                                }
                                else
                                {
                                    cout << "Результат " << otv6 << endl;
                                }
                                otv == otv6;
                            }
                            system("pause");  pau = 1;
                        }
                        if (in == 8) {
                            cout << "Введите номер действия:";
                            cin >> str;
                            while (k != 0) {
                                if ((strlen(str) != 1) || (str[0] < 49) || (str[0] > 56)) { IsBreak = true; }
                                else { IsBreak = false; }

                                if (IsBreak == true) {
                                    k += 1;
                                    cout << "Не цифра" << endl;
                                    cout << "Выберите номер действия" << endl;
                                    cin >> str;
                                }
                                else { break; }
                            };
                            if (num_com == 0) {
                                for (int i = 0; i < strlen(str); i += 1) {
                                    int figure = (int)str[i] - (int)'0';
                                    num_com = num_com * 10 + figure;
                                }
                            }
                            else {
                                num_com = 0;
                                for (int i = 0; i < strlen(str); i += 1) {
                                    int figure = (int)str[i] - (int)'0';
                                    num_com = num_com * 10 + figure;
                                }
                            }
                            otv1 = first + sec;
                            otv2 = first - sec;
                            otv3 = first * sec;

                            otv6 = pow(first, 1.0 / sec);
                            if (num_com == 1) {
                                cout << "Результат " << otv1 << endl;
                                otv == otv1;
                            }
                            if (num_com == 2) {
                                cout << "Результат " << otv2 << endl;
                                otv == otv2;
                            }
                            if (num_com == 3) {
                                cout << "Результат " << otv3 << endl;
                                otv == otv3;
                            }
                            if (num_com == 4) {
                                if (sec != 0) {
                                    otv4 = first / sec;
                                    cout << "Результат: " << endl;
                                    cout << "Целая часть:" << otv4 << "     Остаток от деления:" << first % sec << endl;
                                    otv == otv4;
                                }
                                else { cout << "Нет ответа, так как делить на ноль нельзя" << endl; }
                            }
                            otv5 = pow(first, sec);
                            if (num_com == 5) {
                                if (sec > 42) {
                                    cout << "Вы ввели слишком большой показатель степени " << endl;
                                }
                                else {
                                    cout << "Результат " << otv5 << endl;
                                    otv == otv5;
                                };
                            }
                            if (num_com == 6) {
                                if (sec > 100000) {
                                    cout << "Вы ввели cлишком большую степень корня" << endl;
                                }
                                else if (sec == 0) {
                                    cout << "Степень корня не может быть нулем" << endl;
                                }
                                else
                                {
                                    cout << "Результат " << otv6 << endl;
                                }
                                otv == otv6;
                            }
                            system("pause");  pau = 1;
                        }


                    }
                }
                if (in == 8) {
                    cout << "Введите номер действия:";
                    cin >> str;
                    while (k != 0) {
                        if ((strlen(str) != 1) || (str[0] < 49) || (str[0] > 56)) { IsBreak = true; }
                        else { IsBreak = false; }

                        if (IsBreak == true) {
                            k += 1;
                            cout << "Не цифра" << endl;
                            cout << "Введите номер действия" << endl;
                            cin >> str;
                        }
                        else { break; }
                    };
                    for (int i = 0; i < strlen(str); i += 1) {
                        int figure = (int)str[i] - (int)'0';
                        num_com = num_com * 10 + figure;
                    }
                    if (num_com == 1 || num_com == 2 || num_com == 3 || num_com == 4 || num_com == 5 || num_com == 6) {
                        if (first == 0) {
                            cout << "Введите первое натуральное число" << endl;
                            cin >> str;
                            int c = 0;  int p = 0; int zn = 0; int nul = 0;
                            for (; p == 0;) { sim = _getch();  if ((sim >= zero) && (sim <= nine)) { c = c * 10 + s - zero; p = 1; cout << sim - zero; } if ((sim == minus) && (zn == 0)) { zn = 1; printf("-"); } if (sim == zero) { nul = 1; } }
                            p = 0;
                            if (nul == 0) { for (; p != 8;) { sim = _getch(); if (sim == enter) { p = 8; }; if ((sim >= zero) && (sim <= nine)) { c = c * 10 + sim - zero; printf("%d", sim - zero); p++; } } }
                            p = 0;
                            if (nul == 1) { for (; p == 0;) { sim = _getch(); if (sim == enter) { p = 1; }; } }
                            if (zn == 1) { c = -c; }
                            first = c;
                        }
                        otv1 = first + sec;
                        otv2 = first - sec;
                        otv3 = first * sec;

                        otv6 = pow(first, 1.0 / sec);
                        if (num_com == 1) {
                            cout << "Результат " << otv1 << endl;
                            otv == otv1;
                        }
                        if (num_com == 2) {
                            cout << "Результат " << otv2 << endl;
                            otv == otv2;
                        }
                        if (num_com == 3) {
                            cout << "Результат " << otv3 << endl;
                            otv == otv3;
                        }
                        if (num_com == 4) {
                            if (sec != 0) {
                                otv4 = first / sec;
                                cout << "Результат: " << endl;
                                cout << "Целая часть:" << otv4 << "     Остаток от деления:" << first % sec << endl;
                                otv == otv4;
                            }
                            else { cout << "Нет ответа, так как делить на ноль нельзя" << endl; }
                        }
                        otv5 = pow(first, sec);
                        if (num_com == 5) {
                            if (sec > 42) {
                                cout << "Вы ввели слишком большой показатель степени " << endl;
                            }
                            else {
                                cout << "Результат " << otv5 << endl;
                                otv == otv5;
                            };
                        }
                        if (num_com == 6) {
                            if (sec > 100000) {
                                cout << "Вы ввели cлишком большую степень корня" << endl;
                            }
                            else if (sec == 0) {
                                cout << "Степень корня не может быть нулем" << endl;
                            }
                            else
                            {
                                cout << "Результат " << otv6 << endl;
                            }
                            otv == otv6;
                        }
                        system("pause");  pau = 1;
                    }
                    if (num_com == 7) {
                        if (first == 0) {
                            cout << "Введите первое натуральное число" << endl;
                            cin >> str;
                            int c = 0;  int p = 0; int zn = 0; int nul = 0;
                            for (; p == 0;) { sim = _getch();  if ((sim >= zero) && (sim <= nine)) { c = c * 10 + s - zero; p = 1; cout << sim - zero; } if ((sim == minus) && (zn == 0)) { zn = 1; printf("-"); } if (sim == zero) { nul = 1; } }
                            p = 0;
                            if (nul == 0) { for (; p != 8;) { sim = _getch(); if (sim == enter) { p = 8; }; if ((sim >= zero) && (sim <= nine)) { c = c * 10 + sim - zero; printf("%d", sim - zero); p++; } } }
                            p = 0;
                            if (nul == 1) { for (; p == 0;) { sim = _getch(); if (sim == enter) { p = 1; }; } }
                            if (zn == 1) { c = -c; }
                            first = c;
                        }
                        else {
                            first = 0;
                            cout << "Введите первое натуральное число" << endl;
                            cin >> str;
                            cin >> str;
                            int c = 0;  int p = 0; int zn = 0; int nul = 0;
                            for (; p == 0;) { sim = _getch();  if ((sim >= zero) && (sim <= nine)) { c = c * 10 + s - zero; p = 1; cout << sim - zero; } if ((sim == minus) && (zn == 0)) { zn = 1; printf("-"); } if (sim == zero) { nul = 1; } }
                            p = 0;
                            if (nul == 0) { for (; p != 8;) { sim = _getch(); if (sim == enter) { p = 8; }; if ((sim >= zero) && (sim <= nine)) { c = c * 10 + sim - zero; printf("%d", sim - zero); p++; } } }
                            p = 0;
                            if (nul == 1) { for (; p == 0;) { sim = _getch(); if (sim == enter) { p = 1; }; } }
                            if (zn == 1) { c = -c; }
                            first = c;
                        }
                        system("cls");
                        cout << "Первое число " << first << endl;
                        cout << "Второе число " << sec << endl;
                        cout << "Выберите действие, перемещая стрелочку с помощью клавиатуры" << endl;
                        cout << "или введя номер действия(для ввода номера нажмите backspace) " << endl;
                        cout << "Выберите цифру:" << endl;
                        cout << "=>1.Сложение" << endl;
                        cout << "2.Вычитание" << endl;
                        cout << "3.Умножение" << endl;
                        cout << "4.Деление" << endl;
                        cout << "5.Возведение в степень" << endl;
                        cout << "6.Корень из числа" << endl;
                        int s = 1;
                        int in = _getch();
                        while (in != 13 && in != 8) {
                            if (in == 80) s++;
                            if (in == 72) s--;
                            while (s <= 0) { s += 6; };
                            while (s >= 7) { s -= 6; };
                            if (s == 1) {
                                system("cls");
                                cout << "Первое число " << first << endl;
                                cout << "Второе число " << sec << endl;
                                cout << "Выберите действие, перемещая стрелочку с помощью клавиатуры" << endl;
                                cout << "или введя номер действия(для ввода номера нажмите backspace) " << endl;
                                cout << "Выберите цифру:" << endl;
                                cout << "=>1.Сложение" << endl;
                                cout << "2.Вычитание" << endl;
                                cout << "3.Умножение" << endl;
                                cout << "4.Деление" << endl;
                                cout << "5.Возведение в степень" << endl;
                                cout << "6.Корень из числа" << endl;
                                in = _getch();
                            }
                            if (s == 2) {
                                system("cls");
                                cout << "Первое число " << first << endl;
                                cout << "Второе число " << sec << endl;
                                cout << "Выберите действие, перемещая стрелочку с помощью клавиатуры" << endl;
                                cout << "или введя номер действия(для ввода номера нажмите backspace) " << endl;
                                cout << "Выберите цифру:" << endl;
                                cout << "1.Сложение" << endl;
                                cout << "=>2.Вычитание" << endl;
                                cout << "3.Умножение" << endl;
                                cout << "4.Деление" << endl;
                                cout << "5.Возведение в степень" << endl;
                                cout << "6.Корень из числа" << endl;
                                in = _getch();
                            }
                            if (s == 3) {
                                system("cls");
                                cout << "Первое число " << first << endl;
                                cout << "Второе число " << sec << endl;
                                cout << "Выберите действие, перемещая стрелочку с помощью клавиатуры" << endl;
                                cout << "или введя номер действия(для ввода номера нажмите backspace) " << endl;
                                cout << "Выберите цифру:" << endl;
                                cout << "1.Сложение" << endl;
                                cout << "2.Вычитание" << endl;
                                cout << "=>3.Умножение" << endl;
                                cout << "4.Деление" << endl;
                                cout << "5.Возведение в степень" << endl;
                                cout << "6.Корень из числа" << endl;


                                in = _getch();
                            }
                            if (s == 4) {
                                system("cls");
                                cout << "Первое число " << first << endl;
                                cout << "Второе число " << sec << endl;
                                cout << "Выберите действие, перемещая стрелочку с помощью клавиатуры" << endl;
                                cout << "или введя номер действия(для ввода номера нажмите backspace) " << endl;
                                cout << "Выберите цифру:" << endl;
                                cout << "1.Сложение" << endl;
                                cout << "2.Вычитание" << endl;
                                cout << "3.Умножение" << endl;
                                cout << "=>4.Деление" << endl;
                                cout << "5.Возведение в степень" << endl;
                                cout << "6.Корень из числа" << endl;
                                in = _getch();
                            }
                            if (s == 5) {
                                system("cls");
                                cout << "Первое число " << first << endl;
                                cout << "Второе число " << sec << endl;
                                cout << "Выберите действие, перемещая стрелочку с помощью клавиатуры" << endl;
                                cout << "или введя номер действия(для ввода номера нажмите backspace) " << endl;
                                cout << "Выберите цифру:" << endl;
                                cout << "1.Сложение" << endl;
                                cout << "2.Вычитание" << endl;
                                cout << "3.Умножение" << endl;
                                cout << "4.Деление" << endl;
                                cout << "=>5.Возведение в степень" << endl;
                                cout << "6.Корень из числа" << endl;
                                in = _getch();
                            }
                            if (s == 6) {
                                system("cls");
                                cout << "Первое число " << first << endl;
                                cout << "Второе число " << sec << endl;
                                cout << "Выберите действие, перемещая стрелочку с помощью клавиатуры" << endl;
                                cout << "или введя номер действия(для ввода номера нажмите backspace) " << endl;
                                cout << "Выберите цифру:" << endl;
                                cout << "1.Сложение" << endl;
                                cout << "2.Вычитание" << endl;
                                cout << "3.Умножение" << endl;
                                cout << "4.Деление" << endl;
                                cout << "5.Возведение в степень" << endl;
                                cout << "=>6.Корень из числа" << endl;
                                in = _getch();
                            }
                        }
                        if (in == 13) {
                            otv1 = first + sec;
                            otv2 = first - sec;
                            otv3 = first * sec;

                            otv6 = pow(first, 1.0 / sec);
                            if (s == 1) {
                                cout << "Результат " << otv1 << endl;
                                otv == otv1;
                            }
                            if (s == 2) {
                                cout << "Результат " << otv2 << endl;
                                otv == otv2;
                            }
                            if (s == 3) {
                                cout << "Результат " << otv3 << endl;
                                otv == otv3;
                            }
                            if (s == 4) {
                                if (sec != 0) {
                                    otv4 = first / sec;
                                    cout << "Результат: " << endl;
                                    cout << "Целая часть:" << otv4 << "     Остаток от деления:" << first % sec << endl;
                                    otv == otv4;
                                }
                                else { cout << "Нет ответа, так как делить на ноль нельзя" << endl; }
                            }
                            otv5 = pow(first, sec);
                            if (s == 5) {
                                if (sec > 42) {
                                    cout << "Вы ввели слишком большой показатель степени " << endl;
                                }
                                else {
                                    cout << "Результат " << otv5 << endl;
                                    otv == otv5;
                                };
                            }
                            if (s == 6) {
                                if (sec > 100000) {
                                    cout << "Вы ввели cлишком большую степень корня" << endl;
                                }
                                else if (sec == 0) {
                                    cout << "Степень корня не может быть нулем" << endl;
                                }
                                else
                                {
                                    cout << "Результат " << otv6 << endl;
                                }
                                otv == otv6;
                            }
                            system("pause");  pau = 1;
                        }
                        if (in == 8) {
                            cout << "Введите номер действия:";
                            cin >> str;
                            while (k != 0) {
                                if ((strlen(str) != 1) || (str[0] < 49) || (str[0] > 56)) { IsBreak = true; }
                                else { IsBreak = false; }

                                if (IsBreak == true) {
                                    k += 1;
                                    cout << "Не цифра" << endl;
                                    cout << "Выберите номер действия" << endl;
                                    cin >> str;
                                }
                                else { break; }
                            };
                            if (num_com == 0) {
                                for (int i = 0; i < strlen(str); i += 1) {
                                    int figure = (int)str[i] - (int)'0';
                                    num_com = num_com * 10 + figure;
                                }
                            }
                            else {
                                num_com = 0;
                                for (int i = 0; i < strlen(str); i += 1) {
                                    int figure = (int)str[i] - (int)'0';
                                    num_com = num_com * 10 + figure;
                                }
                            }
                            otv1 = first + sec;
                            otv2 = first - sec;
                            otv3 = first * sec;

                            otv6 = pow(first, 1.0 / sec);
                            if (num_com == 1) {
                                cout << "Результат " << otv1 << endl;
                                otv == otv1;
                            }
                            if (num_com == 2) {
                                cout << "Результат " << otv2 << endl;
                                otv == otv2;
                            }
                            if (num_com == 3) {
                                cout << "Результат " << otv3 << endl;
                                otv == otv3;
                            }
                            if (num_com == 4) {
                                if (sec != 0) {
                                    otv4 = first / sec;
                                    cout << "Результат: " << endl;
                                    cout << "Целая часть:" << otv4 << "     Остаток от деления:" << first % sec << endl;
                                    otv == otv4;
                                }
                                else { cout << "Нет ответа, так как делить на ноль нельзя" << endl; }
                            }
                            otv5 = pow(first, sec);
                            if (num_com == 5) {
                                if (sec > 42) {
                                    cout << "Вы ввели слишком большой показатель степени " << endl;
                                }
                                else {
                                    cout << "Результат " << otv5 << endl;
                                    otv == otv5;
                                };
                            }
                            if (num_com == 6) {
                                if (sec > 100000) {
                                    cout << "Вы ввели cлишком большую степень корня" << endl;
                                }
                                else if (sec == 0) {
                                    cout << "Степень корня не может быть нулем" << endl;
                                }
                                else
                                {
                                    cout << "Результат " << otv6 << endl;
                                }
                                otv == otv6;
                            }
                            system("pause");  pau = 1;
                        }
                    }
                }
            }
        }

        if (pau == 1) { pau = 0; }
        else { system("pause"); }
        system("cls");
    } while (c == false);
    sim=_getch();
    return 0;
}