#include <iostream>
#include <list>
#include <windows.h>
#include <stdio.h>
#include <conio.h>
#include <iomanip>

using namespace std;

int const MAX_BUTTON = 224;
//CONST ARROWS:
int const UP = 72;
int const DOWN = 80;
int const LEFT = 75;
int const RIGHT = 77;
//CONST BUTTONS
int const ENTER = 13;
int const ESC = 27;
int const BACKSPACE = 8;
//CONST KOORD
int const START_Y = 0;
int const END_Y = 10;
int const END_X = 28;
int const DEFAULT_X = 0;
int const DEFAULT_Y = 11;
int const WARNING_X = 40;
int const WARNING_Y = 2;
//CONST COLOR
int const WHITE = 7;
int const RED = 4;
int const GREEN = 2;
COORD coord = { 0,0 };
void text_color(int color)
{
    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(handle, color);
}
struct Node {
    int number;
    Node* new_index;
};
void gotoxy(int koordx, int koordy)
{
    coord.X = koordx;
    coord.Y = koordy;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
void console_menu(int button, int x, int& y, bool chek_list)
{
    gotoxy(x, y);
    printf("    ");
    if (chek_list != true)
    {
        gotoxy(WARNING_X, WARNING_Y);
        printf("                          ");
        Sleep(50);
        gotoxy(WARNING_X, WARNING_Y);
        text_color(RED);
        printf("Сначала создайте список!!!");
        text_color(WHITE);
        y = START_Y;
    }
    else if (button == UP)
    {
        if (y == START_Y)
            y = END_Y;
        else
            y -= 2;
    }
    else if (button == DOWN)
    {
        if (y == END_Y)
            y = START_Y;
        else
            y += 2;
    }
    gotoxy(x, y);
    printf("<=");
    gotoxy(DEFAULT_X, DEFAULT_Y);
}
void clear_list(Node*& head) {
    Node* index = head;

    while (index != nullptr) {
        Node* previos = index;
        index = index->new_index;
        delete previos;
    }

    head = nullptr;
}
void create_list(Node*& head, int count_of_elements, int start) {
    clear_list(head);

    if (count_of_elements != 0) {
        head = new Node;
        head->number = start;

        Node* last_index = head;

        for (int i = 2; i <= count_of_elements; i++) {
            Node* new_index = new Node;
            new_index->number = start + (i - 1);

            last_index->new_index = new_index;

            last_index = new_index;
        }

        last_index->new_index = nullptr;
    }
}
void print_list(Node* head) {
    Node* index = head;
    gotoxy(0, DEFAULT_Y + 2);
    int count = 0;
    while (index != nullptr)
    {
        cout << setw(5) << index->number << setw(3) << "||";
        index = index->new_index;
        count += 1;
        if (count % 15 == 0 && count != 0)
        {
            cout << endl;
        }
    }
    cout << setw(4) << "End";

}
void change_element_of_list(Node* head, int pos, int new_number)
{
    Node* index = head;

    for (int i = 1; i != pos; i++)
    {
        index = index->new_index;
    }
    index->number = new_number;
}
void clean()
{
    for (int i = -1; i != 6; i++)
    {
        gotoxy(WARNING_X, WARNING_Y + i);
        cout << "                                                                 ";
    }
    gotoxy(DEFAULT_X, DEFAULT_Y);
}
int sure()
{
    gotoxy(WARNING_X + 10, WARNING_Y + 1);
    cout << "НЕТ     да";
    gotoxy(DEFAULT_X, DEFAULT_Y);
    bool is_right = false;
    bool chek_of_delete = false;
    int button_of_chose = 0;
    while (button_of_chose != ENTER)
    {
        button_of_chose = _getch();
        switch (button_of_chose)
        {
        case LEFT: {
            is_right = false;
            gotoxy(WARNING_X + 10, WARNING_Y + 1);
            cout << "НЕТ     да";
            gotoxy(DEFAULT_X, DEFAULT_Y);
        }; break;
        case RIGHT: {
            is_right = true;
            gotoxy(WARNING_X + 10, WARNING_Y + 1);
            cout << "нет     ДА";
            gotoxy(DEFAULT_X, DEFAULT_Y);
        }; break;
        case ENTER: {
            if (is_right == true)
                return 1;
            else
                return 0;
        };
                  break;
        }
    }
}
int move(int count_of_elements, int position_in_prog)
{
    int position = 1;
    int button = 0;
    int x = 0;
    int y = DEFAULT_Y + 2;
    if (position_in_prog == 1)
    {
        gotoxy(x, y);
        cout << ">";
        gotoxy(x + 5, y);
        cout << "<";
        gotoxy(x + 4, y);
    }
    else
    {
        gotoxy(x, y);
        cout << "<";
    }
    while (button != ENTER)
    {
        button = _getch();
        if (button == MAX_BUTTON)
            button = _getch();
        if (position_in_prog == 1)
        {

            gotoxy(x, y);
            cout << " ";
            gotoxy(x + 5, y);
            cout << " ";
            gotoxy(x + 4, y);
        }
        else
        {
            if (x != 0)
            {
                gotoxy(x - 3, y);
                cout << " ";
                gotoxy(x, y);
                cout << " ";

            }
            else {
                gotoxy(x, y);
                cout << " ";
            }
        }
        switch (button)
        {
        case LEFT: {
            if (position != 1)
            {
                if ((position - 1) % 15 == 0)
                {
                    y -= 1;
                    x = 120;
                }
                position -= 1;
                x -= 8;

            }
            else
            {
                if (position_in_prog == 1)
                {
                    position = count_of_elements;
                    x = (count_of_elements - 1) % 15 * 8;
                    y = (count_of_elements - 1) / 15 + DEFAULT_Y + 2;
                }
                else
                {
                    position = count_of_elements + 1;
                    x = (count_of_elements) % 15 * 8;
                    y = (count_of_elements) / 15 + DEFAULT_Y + 2;
                }
            }
        };
                 break;
        case RIGHT: {
            if (position_in_prog == 1)
            {
                if (position != count_of_elements)
                {
                    position += 1;
                    x += 8;
                    if ((position - 1) % 15 == 0)
                    {
                        y += 1;
                        x = 0;
                    }
                }
                else
                {
                    position = 1;
                    x = 0;
                    y = DEFAULT_Y + 2;
                }
            }
            else
            {
                if (position != count_of_elements + 1)
                {
                    position += 1;
                    x += 8;
                    if ((position - 1) % 15 == 0)
                    {
                        y += 1;
                        x = 0;
                    }
                }
                else
                {
                    position = 1;
                    x = 0;
                    y = DEFAULT_Y + 2;
                }
            }
        };
                  break;
        }
        if (position_in_prog == 1)
        {
            gotoxy(x, y);
            cout << ">";
            gotoxy(x + 5, y);
            cout << "<";
            gotoxy(x + 4, y);
        }
        else
        {
            if (x != 0)
            {
                gotoxy(x - 3, y);
                cout << ">";
                gotoxy(x, y);
                cout << "<";
                gotoxy(x, y);

            }
            else {
                gotoxy(x, y);
                cout << "<";
            }
        }
    }
    if (position_in_prog == 1)
    {

        gotoxy(x, y);
        cout << " ";
        gotoxy(x + 5, y);
        cout << " ";
    }
    else
    {
        if (x != 0)
        {
            gotoxy(x - 3, y);
            cout << " ";
            gotoxy(x, y);
            cout << " ";

        }
        else {
            gotoxy(x, y);
            cout << " ";
        }
    }
    return position;
}
int chek_numbers(int left_line, int right_line, int& number, int& count_of_press, bool& is_minus)
{
    int button = 0;
    while (button != ENTER)
    {
        button = _getch();

        if (count_of_press == 0 && button == 45)
        {
            cout << "-";
            is_minus = true;
            ++count_of_press;
        }
        else if (button == BACKSPACE)
        {
            if (count_of_press > 0)
            {
                cout << "\b \b";
                number /= 10;
                --count_of_press;
                if (count_of_press == 1)
                {
                    is_minus = false;
                }
            }

        }
        else if (count_of_press == 20)
        {

        }
        else if ((button >= 48) && (button <= 57))
        {
            cout << button - 48;
            number = number * 10 + button - 48;
            ++count_of_press;
        }

    }
    if (is_minus == true)
        number *= -1;
    if (number < left_line || number > right_line || count_of_press == 0 || count_of_press > 8)
    {
        return -1;
        number = 0;
    }
    else
    {
        return 0;
    }
}
void sort(Node* head, int count_of_elements)
{
    bool chek = false;
    Node* index = head;
    Node* more_index = index->new_index;
    int time = 0;
    while (chek == false)
    {
        chek = true;
        index = head;
        more_index = index->new_index;
        while (more_index != nullptr)
        {
            if (index->number > more_index->number)
            {
                time = index->number;
                index->number = more_index->number;
                more_index->number = time;
                chek = false;
            }
            index = more_index;
            more_index = more_index->new_index;

        }
    }
}
void add_elements(Node*& head, int add_count, int first_number, int position, int& count_of_elements)
{
    Node* new_head = nullptr;
    create_list(new_head, add_count, first_number);
    Node* old_index = head;
    Node* index = new_head;
    Node* time = nullptr;
    while (index != nullptr)
    {
        time = index;
        index = index->new_index;
    }
    index = time;
    if (position == 1)
    {
        index->new_index = head;
        head = new_head;

    }
    else if (position == count_of_elements + 1)
    {
        while (old_index != nullptr)
        {
            time = old_index;
            old_index = old_index->new_index;
        }
        old_index = time;
        old_index->new_index = new_head;
    }
    else
    {
        for (int i = 1; i < position; i++)
        {
            time = old_index;
            old_index = old_index->new_index;
        }
        time->new_index = new_head;
        index->new_index = old_index;
    }
    count_of_elements += add_count;
}
int delete_elements(Node*& head, int delete_count, int position, int& count_of_elements)
{
    Node* index = head;
    Node* next_index = nullptr;
    Node* delete_index = nullptr;
    if (delete_count >= count_of_elements)
    {
        clean();
        gotoxy(WARNING_X, WARNING_Y);
        cout << "Это действие удалит список, вы уверены?";
        int time = sure();
        if (time == 1)
        {
            clear_list(head);
            clean();
            gotoxy(WARNING_X, WARNING_Y);
            text_color(GREEN);
            cout << "Loading...";
            text_color(WHITE);
            gotoxy(0, DEFAULT_Y + 2);
            for (int i = 0, p = DEFAULT_Y + 1; i < (count_of_elements + 1) * 10; i++)
            {
                cout << " ";
                if (i % 150 == 0)
                {
                    p += 1;
                    gotoxy(0, p);
                }
            }
            count_of_elements = 0;
            clean();
            return -2;
        }
        else
            return 0;
    }
    else
    {

        for (int i = 1; i < position - 1; i++)
        {
            index = index->new_index;
        }
        next_index = index->new_index;
        int delete_count_time = 0;
        if (position != 1)
        {
            for (int i = 1; i != delete_count + 1; i++)
            {
                if (i + position > count_of_elements + 1)
                    break;
                delete_index = next_index;
                next_index = next_index->new_index;
                delete delete_index;
                delete_count_time += 1;

            }
        }
        else
        {
            for (int i = 1; i != delete_count; i++)
            {
                if (i + position > count_of_elements + 1)
                    break;
                delete_index = next_index;
                next_index = next_index->new_index;
                if (i + 1 != delete_count)
                {
                    delete delete_index;
                }

            }
        }
        if (position != 1)
            index->new_index = next_index;
        else
            head = next_index;

        clean();
        gotoxy(WARNING_X, WARNING_Y);
        text_color(GREEN);
        cout << "Loading...";
        text_color(WHITE);
        gotoxy(0, DEFAULT_Y + 2);
        for (int i = 0, p = DEFAULT_Y + 1; i < (count_of_elements + 1) * 10; i++)
        {
            cout << " ";
            if (i % 150 == 0)
            {
                p += 1;
                gotoxy(0, p);
            }
        }
        gotoxy(0, DEFAULT_Y + 2);
        print_list(head);
        if (position != 1)
            count_of_elements -= delete_count_time;
        else
            count_of_elements -= delete_count;
        clean();
        return -1;

    }

}
int main()
{
    setlocale(0, "Rus");
    int x = END_X, y = 0;
    bool exit = false;
    bool chek_list = false;
    int count_of_elements = 0;
    Node* head = nullptr;
    printf(" Создать список\n\n Удалить список\n\n Добавить элемент(ы)\n\n Удалить элемент(ы)\n\n Отсортировать по значению\n\n Изменить элемент\n");
    gotoxy(WARNING_X + 20, 0);
    cout << "Для выхода нажмите ESC";
    gotoxy(x, y);
    printf("<=");
    gotoxy(DEFAULT_X, DEFAULT_Y);

    while (exit != true)
    {
        int button = _getch();
        if (button == MAX_BUTTON)
        {
            button = _getch();
            console_menu(button, x, y, chek_list);
        }
        else if (button == ESC)
            exit = true;
        else if (button == ENTER)
        {
            switch (y)
            {
            case 0:
            {
                if (chek_list == 1)
                {
                    gotoxy(WARNING_X, WARNING_Y);
                    text_color(RED);
                    cout << "Сначала удалите список";
                    text_color(WHITE);
                    Sleep(1999);
                    gotoxy(WARNING_X, WARNING_Y);
                    cout << "                      ";
                    gotoxy(DEFAULT_X, DEFAULT_Y);
                    break;
                }
                count_of_elements = 0;
                int chek = -1;
                while (chek != 0)
                {
                    int count_of_press = 0;
                    count_of_elements = 0;
                    bool is_minus = false;
                    gotoxy(WARNING_X, WARNING_Y);
                    printf("Введите количество чисел в списке");
                    gotoxy(WARNING_X, WARNING_Y + 1);
                    chek = chek_numbers(1, 1500, count_of_elements, count_of_press, is_minus);
                    if (chek == -1)
                    {
                        gotoxy(WARNING_X, WARNING_Y - 1);
                        text_color(RED);
                        printf("Выход за пределы, введите другое число");
                        text_color(WHITE);
                        gotoxy(WARNING_X, WARNING_Y + 1);
                        for (int i = 0; i <= count_of_press + 1; i++)
                        {
                            printf(" ");
                        }

                    }
                }
                gotoxy(WARNING_X, WARNING_Y - 1);
                printf("                                       ");
                chek = -1;
                int first_number = 0;
                while (chek != 0)
                {
                    int count_of_press = 0;
                    first_number = 0;
                    bool is_minus = false;
                    gotoxy(WARNING_X, WARNING_Y + 4);
                    printf("Введите первое число в списке");
                    gotoxy(WARNING_X, WARNING_Y + 5);
                    chek = chek_numbers(-1000, 1000, first_number, count_of_press, is_minus);
                    if (chek == -1)
                    {
                        gotoxy(WARNING_X, WARNING_Y + 3);
                        text_color(RED);
                        printf("Выход за пределы, введите другое число");
                        text_color(WHITE);
                        gotoxy(WARNING_X, WARNING_Y + 5);
                        for (int i = 0; i <= count_of_press + 1; i++)
                        {
                            printf(" ");
                        }

                    }
                }
                create_list(head, count_of_elements, first_number);
                chek_list = true;
                clean();
                gotoxy(WARNING_X, WARNING_Y);
                text_color(GREEN);
                cout << "Loading...";
                text_color(WHITE);
                gotoxy(0, DEFAULT_Y + 2);
                print_list(head);
                gotoxy(WARNING_X, WARNING_Y);
                cout << "           ";
                gotoxy(DEFAULT_X, DEFAULT_Y);
            }
            break;
            case 2: {
                gotoxy(WARNING_X, WARNING_Y);
                cout << "Вы уверены, что хотите удалить список?";
                int time = sure();
                if (time == 1)
                {
                    clear_list(head);
                    chek_list = false;
                    y = 0;
                    clean();
                    gotoxy(WARNING_X, WARNING_Y);
                    text_color(GREEN);
                    cout << "Loading...";
                    text_color(WHITE);
                    gotoxy(0, DEFAULT_Y + 2);
                    for (int i = 0, p = DEFAULT_Y + 1; i < (count_of_elements + 1) * 10; i++)
                    {
                        cout << " ";
                        if (i % 150 == 0)
                        {
                            p += 1;
                            gotoxy(0, p);
                        }
                    }
                    gotoxy(x, 2);
                    cout << "  ";
                    gotoxy(x, y);
                    cout << "<=";
                    clean();
                }

                clean();

            };
                  break;
            case 4: {
                int add_count = 0;
                int chek = -1;
                gotoxy(WARNING_X, WARNING_Y);
                cout << "Выберете позицию, куда вы хотите добавить элемент(ы)";
                int position = move(count_of_elements, 2);
                clean();
                while (chek != 0)
                {
                    add_count = 0;
                    int count_of_press = 0;
                    bool is_minus = false;
                    gotoxy(WARNING_X, WARNING_Y);
                    printf("Введите количество элементов, которые вы хотите добавить в список");
                    gotoxy(WARNING_X, WARNING_Y + 1);
                    chek = chek_numbers(0, 100, add_count, count_of_press, is_minus);
                    if (chek == -1)
                    {
                        gotoxy(WARNING_X, WARNING_Y - 1);
                        text_color(RED);
                        printf("Выход за пределы, введите другое число");
                        text_color(WHITE);
                        gotoxy(WARNING_X, WARNING_Y + 1);
                        for (int i = 0; i <= count_of_press + 1; i++)
                        {
                            printf(" ");
                        }

                    }

                    for (int i = 0; i <= count_of_press + 1; i++)
                    {
                        printf(" ");
                    }

                }
                clean();
                chek = -1;
                int new_first_number = 0;
                while (chek != 0)
                {
                    new_first_number = 0;
                    int count_of_press = 0;
                    bool is_minus = false;
                    gotoxy(WARNING_X, WARNING_Y);
                    printf("Введите первый элемент");
                    gotoxy(WARNING_X, WARNING_Y + 1);
                    chek = chek_numbers(-1000, 1000, new_first_number, count_of_press, is_minus);
                    if (chek == -1)
                    {
                        gotoxy(WARNING_X, WARNING_Y - 1);
                        text_color(RED);
                        printf("Выход за пределы, введите другое число");
                        text_color(WHITE);
                        gotoxy(WARNING_X, WARNING_Y + 1);
                        for (int i = 0; i <= count_of_press + 1; i++)
                        {
                            printf(" ");
                        }

                    }

                    for (int i = 0; i <= count_of_press + 1; i++)
                    {
                        printf(" ");
                    }

                }
                clean();
                gotoxy(WARNING_X, WARNING_Y);
                text_color(GREEN);
                cout << "Loading...";
                text_color(WHITE);
                add_elements(head, add_count, new_first_number, position, count_of_elements);
                gotoxy(0, DEFAULT_Y + 2);
                for (int i = 0, p = DEFAULT_Y + 1; i < (count_of_elements + 1) * 10; i++)
                {
                    cout << " ";
                    if (i % 150 == 0)
                    {
                        p += 1;
                        gotoxy(0, p);
                    }
                }
                print_list(head);
                clean();
                gotoxy(DEFAULT_X, DEFAULT_Y);

            };
                  break;
            case 6: {
                gotoxy(WARNING_X, WARNING_Y);
                cout << "Выберете элемент, с которого начнётся удаление";
                int position = move(count_of_elements, 1);
                clean();
                int chek_of_delete = 0;
                int chek = -1;
                do
                {
                    chek = -1;
                    int delete_count = 0;
                    while (chek != 0)
                    {
                        delete_count = 0;
                        int count_of_press = 0;
                        bool is_minus = false;
                        gotoxy(WARNING_X, WARNING_Y);
                        printf("Введите количество элементов, которые вы хотите удалить из списка");
                        gotoxy(WARNING_X, WARNING_Y + 1);
                        chek = chek_numbers(0, 2000, delete_count, count_of_press, is_minus);
                        if (chek == -1)
                        {
                            gotoxy(WARNING_X, WARNING_Y - 1);
                            text_color(RED);
                            printf("Выход за пределы, введите другое число");
                            text_color(WHITE);
                            gotoxy(WARNING_X, WARNING_Y + 1);
                            for (int i = 0; i <= count_of_press + 1; i++)
                            {
                                printf(" ");
                            }

                        }
                        for (int i = 0; i <= count_of_press + 1; i++)
                        {
                            printf(" ");
                        }

                    }
                    chek_of_delete = delete_elements(head, delete_count, position, count_of_elements);
                    clean();
                } while (chek_of_delete == 0);
                if (head == nullptr)
                {
                    chek_list = false;
                    y = 0;
                    gotoxy(x, 6);
                    cout << "  ";
                    gotoxy(x, y);
                    cout << "<=";
                    clean();
                }
                gotoxy(DEFAULT_X, DEFAULT_Y);


            };
                  break;
            case 8: {
                gotoxy(WARNING_X, WARNING_Y);
                cout << "Вы уверены, что хотите отсортировать список?";
                int time = sure();
                clean();
                if (time == 1)
                {
                    sort(head, count_of_elements);
                    gotoxy(WARNING_X, WARNING_Y);
                    text_color(GREEN);
                    cout << "Loading...";
                    text_color(WHITE);
                    gotoxy(0, DEFAULT_Y + 2);
                    for (int i = 0, p = DEFAULT_Y + 1; i < (count_of_elements + 1) * 10; i++)
                    {
                        cout << " ";
                        if (i % 150 == 0)
                        {
                            p += 1;
                            gotoxy(0, p);
                        }
                    }
                    print_list(head);
                    gotoxy(x, 2);
                    cout << "  ";
                    gotoxy(x, y);
                    cout << "<=";
                    clean();
                }
                else

                    break;
            };
                  break;
            case 10: {
                gotoxy(WARNING_X, WARNING_Y);
                cout << "Выберете элемент, который хотите изменить";
                int position = move(count_of_elements, 1);
                clean();
                int chek = -1;
                int new_number = 0;
                int count_of_press = 0;
                bool is_minus = false;
                int time = 0;
                while (time != 1)
                {
                    chek = -1;
                    while (chek != 0)
                    {
                        new_number = 0;

                        count_of_press = 0;
                        is_minus = false;
                        gotoxy(WARNING_X, WARNING_Y);
                        cout << "Введите число на которое вы хотите заменить элемент";
                        gotoxy(DEFAULT_X, DEFAULT_Y);
                        gotoxy(WARNING_X, WARNING_Y + 1);
                        chek = chek_numbers(-1000, 1000, new_number, count_of_press, is_minus);
                        if (chek == -1)
                        {
                            gotoxy(WARNING_X, WARNING_Y - 1);
                            text_color(RED);
                            printf("Выход за пределы, введите другое число");
                            text_color(WHITE);
                            gotoxy(WARNING_X, WARNING_Y + 1);
                            for (int i = 0; i <= count_of_press + 1; i++)
                            {
                                printf(" ");
                            }

                        }
                    }
                    clean();
                    for (int i = 0; i <= count_of_press + 1; i++)
                    {
                        printf(" ");
                    }
                    gotoxy(WARNING_X, WARNING_Y);
                    printf("Вы уверены, что хотите поменять число в списке на %d", new_number);
                    time = sure();
                    clean();
                }
                change_element_of_list(head, position, new_number);
                clean();

                gotoxy(WARNING_X, WARNING_Y);
                text_color(GREEN);
                cout << "Loading...";
                text_color(WHITE);
                gotoxy(0, DEFAULT_Y + 2);
                for (int i = 0, p = DEFAULT_Y + 1; i < (count_of_elements + 1) * 10; i++)
                {
                    cout << " ";
                    if (i % 150 == 0)
                    {
                        p += 1;
                        gotoxy(0, p);
                    }
                }
                print_list(head);
                gotoxy(WARNING_X, WARNING_Y);
                cout << "              ";
                gotoxy(DEFAULT_X, DEFAULT_Y);
            };
                   break;
            }
        }


    }
    return 0;
}