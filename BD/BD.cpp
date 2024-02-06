// BD.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
    setlocale(0, "rus" );
    std::cout << " programid |       name       | channelid |    date    |    time    | duration \n";
    std::cout << "-----------+------------------+-----------+------------+------------+-----------\n";
    std::cout << "         7 |   Burgain Hunt   |         1 | 19-05-2023 | 12-15-0000 |        45 \n";
    std::cout << "         9 | Hope Street Ep.9 |         3 | 20-05-2023 | 14-45-0000 |        45 \n";
    std::cout << "         3 |  Pointless Ep.10 |         1 | 19-05-2023 | 21-30-0000 |        45 \n";
    std::cout << "(3 строки)\n\n";
    std::cout << " programid |           name           | channelid |    date    |    time    | duration \n";
    std::cout << "-----------+--------------------------+-----------+------------+------------+-----------\n";
    std::cout << "         1 |   Good Morning Britain   |         1 | 19-05-2023 | 6-00-0000  |       180 \n";
    std::cout << "(1 строка)\n\n";
    std::cout << " genreid |      name     \n";
    std::cout << "---------+---------------\n";
    std::cout << "       1 | For Childrens \n";
    std::cout << "       2 |      Show     \n";
    std::cout << "       3 |      Film     \n";
    std::cout << "       4 |  Documentory  \n";
    std::cout << "       6 |      News     \n";
    std::cout << "       7 |   Translation \n";
    std::cout << "(6 строк)\n\n";
    std::cout << " programid |         name         | channelid |    date    |    time    | duration  \n";
    std::cout << "-----------+----------------------+-----------+------------+------------+-----------\n";
    std::cout << "         3 |    Pointless Ep.10   |         4 | 19-05-2023 | 21-30-0000 |        45 \n";
    std::cout << "        11 | ENDURANCE CAR RACING |         2 | 20-05-2023 | 21-15-0000 |        90 \n";
    std::cout << "        12 |     Fast & Furious   |         1 | 19-05-2023 | 21-00-0000 |       130 \n";
    std::cout << "        19 | BBC News and Weather |         1 | 19-05-2023 | 22-00-0000 |        40 \n";
    std::cout << "(4 строки)\n\n";
    std::cout << " programid |         name         | channelid |    date    |    time    | duration  \n";
    std::cout << "-----------+----------------------+-----------+------------+------------+-----------\n";
    std::cout << "         3 |    Pointless Ep.10   |         4 | 19-05-2023 | 21-30-0000 |        45 \n";
    std::cout << "        11 | ENDURANCE CAR RACING |         2 | 20-05-2023 | 21-15-0000 |        90 \n";
    std::cout << "        12 |     Fast & Furious   |         1 | 19-05-2023 | 21-00-0000 |       130 \n";
    std::cout << "        16 |         Botched      |         4 | 20-05-2023 | 21-00-0000 |        60 \n";
    std::cout << "        18 |     The Proposal     |         3 | 19-05-2023 | 23-00-0000 |        60 \n";
    std::cout << "        19 | BBC News and Weather |         1 | 19-05-2023 | 22-00-0000 |        40 \n";
    std::cout << "(6 строк)\n\n";

    std::cout << " programid |            name            | channelid  |    date    |    time    | duration  \n";
    std::cout << "-----------+----------------------------+------------+------------+------------+-----------\n";
    std::cout << "         1 |   Good Morning Britain     |          1 | 19-05-2023 | 06-00-0000 |       180 \n";
    std::cout << "         2 |     Kitchen Chronicles     |          2 | 19-05-2023 | 18-00-0000 |        60" << "\n";
    std::cout << "         3 |       Pointless Ep.10      |          1 | 19-05-2023 | 21-30-0000 |        45 \n";
    std::cout << "         4 |      Comedy Hour Live      |          3 | 19-05-2023 | 20-45-0000 |        60" << "\n";
    std::cout << "         5 |     Tech Talk Roundup      |          2 | 19-05-2023 | 19-30-0000 |        30" << "\n";
    std::cout << "         6 |      Adventure Seekers     |          1 | 19-05-2023 | 16-00-0000 |        60" << "\n";
    std::cout << "         7 |        Burgain Hunt        |          1 | 19-05-2023 | 12-15-0000 |        45 \n";
    std::cout << "         8 | Celebrity Gossip Unleashed |          3 | 19-05-2023 | 21-00-0000 |        60" << "\n";
    std::cout << "         9 |      Hope Street Ep.9      |          3 | 20-05-2023 | 14-45-0000 |        45 \n";
    std::cout << "        10 |    Funniest Home Videos    |          1 | 19-05-2023 | 20-00-0000 |        60" << "\n";
    std::cout << "        11 |    ENDURANCE CAR RACING    |          2 | 20-05-2023 | 21-15-0000 |        90 \n";
    std::cout << "        12 |        Fast & Furious      |          1 | 19-05-2023 | 21-00-0000 |       130 \n";
    std::cout << "        13 |      Fashion Forward       |          2 | 19-05-2023 | 16-30-0000 |        30" << "\n";
    std::cout << "        14 |  Extreme Sports Unleashed  |          1 | 19-05-2023 | 19-45-0000 |        60" << "\n";
    std::cout << "        15 |     Movie Trivia Night     |          4 | 19-05-2023 | 21-15-0000 |        30" << "\n";
    std::cout << "        16 |            Botched         |          4 | 20-05-2023 | 21-00-0000 |        60 \n";
    std::cout << "        17 |     Culinary Adventures    |          2 | 19-05-2023 | 20-30-0000 |        45" << "\n";
    std::cout << "        18 |        The Proposal        |          3 | 19-05-2023 | 23-00-0000 |        60 \n";
    std::cout << "        19 |    BBC News and Weather    |          1 | 19-05-2023 | 22-00-0000 |        40 \n";
    std::cout << "        20 |      Nature's Wonders      |          3 | 19-05-2023 | 22-30-0000 |        90" << "\n";
    std::cout << "(20 строк)\n\n";


    std::cout << " programid |            name            | channelid  |    date    |    time    | duration  \n";
    std::cout << "-----------+----------------------------+------------+------------+------------+-----------\n";
    std::cout << "         2 |     Kitchen Chronicles     |          2 | 19-05-2023 | 18-00-0000 |        60" << "\n";
    std::cout << "         4 |      Comedy Hour Live      |          3 | 19-05-2023 | 20-45-0000 |        60" << "\n";
    std::cout << "         6 |      Adventure Seekers     |          1 | 19-05-2023 | 16-00-0000 |        60" << "\n";
    std::cout << "         8 | Celebrity Gossip Unleashed |          3 | 19-05-2023 | 21-00-0000 |        60" << "\n";
    std::cout << "        10 |    Funniest Home Videos    |          1 | 19-05-2023 | 20-00-0000 |        80" << "\n";
    std::cout << "        11 |    ENDURANCE CAR RACING    |          2 | 20-05-2023 | 21-15-0000 |        90 \n";
    std::cout << "        14 |  Extreme Sports Unleashed  |          1 | 19-05-2023 | 19-45-0000 |        60" << "\n";
    std::cout << "        16 |            Botched         |          4 | 20-05-2023 | 21-00-0000 |        60 \n";
    std::cout << "        18 |        The Proposal        |          3 | 19-05-2023 | 23-00-0000 |        60 \n";
    std::cout << "        20 |      Nature's Wonders      |          3 | 19-05-2023 | 22-30-0000 |        90" << "\n";
    std::cout << "(10 строк)\n\n";

    std::cout << " programid |            name            | channelid  |    date    |    time    | duration  \n";
    std::cout << "-----------+----------------------------+------------+------------+------------+-----------\n";
    std::cout << "         2 |     Kitchen Chronicles     |          2 | 19-05-2023 | 18-00-0000 |        60" << "\n";
    std::cout << "         4 |      Comedy Hour Live      |          3 | 19-05-2023 | 20-45-0000 |        60" << "\n";
    std::cout << "         6 |      Adventure Seekers     |          1 | 19-05-2023 | 16-00-0000 |        60" << "\n";
    std::cout << "         8 | Celebrity Gossip Unleashed |          3 | 19-05-2023 | 21-00-0000 |        60" << "\n";
    std::cout << "        11 |    ENDURANCE CAR RACING    |          2 | 20-05-2023 | 21-15-0000 |        90 \n";
    std::cout << "        14 |  Extreme Sports Unleashed  |          1 | 19-05-2023 | 19-45-0000 |        60" << "\n";
    std::cout << "        16 |            Botched         |          4 | 20-05-2023 | 21-00-0000 |        60 \n";
    std::cout << "        18 |        The Proposal        |          3 | 19-05-2023 | 23-00-0000 |        60 \n";
    std::cout << "        20 |      Nature's Wonders      |          3 | 19-05-2023 | 22-30-0000 |        90" << "\n";
    std::cout << "(9 строк)\n\n";

    std::cout << " programid |            name            | channelid  |    date    |    time    | duration  \n";
    std::cout << "-----------+----------------------------+------------+------------+------------+-----------\n";
    std::cout << "         1 |   Good Morning Britain     |          1 | 19-05-2023 | 06-00-0000 |       180 \n";
    std::cout << "         3 |       Pointless Ep.10      |          1 | 19-05-2023 | 21-30-0000 |        45 \n";
    std::cout << "         5 |     Tech Talk Roundup      |          2 | 19-05-2023 | 19-30-0000 |        30" << "\n";
    std::cout << "         7 |        Burgain Hunt        |          1 | 19-05-2023 | 12-15-0000 |        45 \n";
    std::cout << "         9 |      Hope Street Ep.9      |          3 | 20-05-2023 | 14-45-0000 |        45 \n";
    std::cout << "        12 |        Fast & Furious      |          1 | 19-05-2023 | 21-00-0000 |       130 \n";
    std::cout << "        13 |      Fashion Forward       |          2 | 19-05-2023 | 16-30-0000 |        30" << "\n";
    std::cout << "        15 |     Movie Trivia Night     |          4 | 19-05-2023 | 21-15-0000 |        30" << "\n";
    std::cout << "        17 |     Culinary Adventures    |          2 | 19-05-2023 | 20-30-0000 |        45" << "\n";
    std::cout << "        19 |    BBC News and Weather    |          1 | 19-05-2023 | 22-00-0000 |        40 \n";
    std::cout << "(10 строк)\n\n";

    std::cout << " programid |       name     | channelid  |    date    |    time    | duration  \n";
    std::cout << "-----------+----------------+------------+------------+------------+-----------\n";
    std::cout << "        12 | Fast & Furious |          1 | 19-05-2023 | 21-00-0000 |       130 \n";
    std::cout << "(1 строка)\n\n";
    std::cout << " programid |         name        | channelid  |    date    |    time    | duration  \n";
    std::cout << "-----------+---------------------+------------+------------+------------+-----------\n";
    std::cout << "         6 |  Adventure Seekers  |          1 | 19-05-2023 | 16-00-0000 |        60" << "\n";
    std::cout << "        17 | Culinary Adventures |          2 | 19-05-2023 | 20-30-0000 |        45" << "\n";
    std::cout << "         9 |  Hope Street Ep.9   |          3 | 20-05-2023 | 14-45-0000 |        45 \n";
    std::cout << "         3 |  Pointless Ep.10    |          1 | 19-05-2023 | 21-30-0000 |        45 \n";
    std::cout << "(4 строки)\n\n";

    std::cout << " programid |            name            |    name    |    date    |    time    | duration  \n";
    std::cout << "-----------+----------------------------+------------+------------+------------+-----------\n";
    std::cout << "         1 |   Good Morning Britain     |     BBC    | 19-05-2023 | 06-00-0000 |       180 \n";
    std::cout << "         2 |     Kitchen Chronicles     |  Eurosport | 19-05-2023 | 18-00-0000 |        60" << "\n";
    std::cout << "         3 |       Pointless Ep.10      |     BBC    | 19-05-2023 | 21-30-0000 |        45 \n";
    std::cout << "         4 |      Comedy Hour Live      |    ITV1    | 19-05-2023 | 20-45-0000 |        60" << "\n";
    std::cout << "         5 |     Tech Talk Roundup      |  Eurosport | 19-05-2023 | 19-30-0000 |        30" << "\n";
    
    std::cout << "(5 строк)\n\n";

    std::cout << " programgenreid |            name            |    name      |    date    |    time    | duration  \n";
    std::cout << "----------------+----------------------------+------------- +------------+------------+-----------\n";
    std::cout << "              1 |   Good Morning Britain     |    Show      | 19-05-2023 | 06-00-0000 |       180 \n";
    std::cout << "              2 |     Kitchen Chronicles     |    Show      | 19-05-2023 | 18-00-0000 |        60" << "\n";
    std::cout << "              3 |       Pointless Ep.10      |   Serial     | 19-05-2023 | 21-30-0000 |        45 \n";
    std::cout << "              4 |      Comedy Hour Live      |    Show      | 19-05-2023 | 20-45-0000 |        60" << "\n";
    std::cout << "              5 |     Tech Talk Roundup      | Documentory  | 19-05-2023 | 19-30-0000 |        30" << "\n";

    std::cout << "(5 строк)\n\n";

    std::cout << "          avg        \n";
    std::cout << "---------------------\n";
    std::cout << " 75.5000000000000000 \n";
    std::cout << "(1 строка)\n\n";
    std::cout << " count \n";
    std::cout << "-------\n";
    std::cout << "    11 \n";
    std::cout << "(1 строка)\n\n";


}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
