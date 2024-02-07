#include <iostream>
#include <fstream>
#include <string.h>


void write_to_xml_file(const std::string& file_path) {
    bool w_closed = false; //Закрыто главное окно

    std::ofstream file(file_path);
    file << "<?xml version=\"1.0\" encoding=\"utf - 8\"?>" << std::endl;
    file << "<root>" << std::endl;

    int n = 1; //Счётчик студентов

    while (!w_closed && n < 5) { //Тут я поставил ограничение на количество действий, но следует заканчивать при закрытии главного окна

        std::string string_to_write = "Ivanov Iviuhkgchan"; //ФИО Студента

        bool action = true; //Происходит какое-то действие
        bool closed = false; //Конкретный студент закончил тестирование

        file << "   <student" << n << ">" << string_to_write << std::endl;

        int k = 1; //Счётчик действий



        while (!closed && k < 4) { //То же, что и в предыдущем while

            if (action) {

                int time = 0;
                bool val = true;
                std::string value = "some value";
                std::string button = "some button";

                file << "       <action" << k << ">" << std::endl;
                file << "           <time>" << time << "</time>" << std::endl;
                file << "           <button>" << button << "</button>" << std::endl;

                if (val) //В случае, если что-то вписано
                    file << "           <value>" << value << "</value>" << std::endl;
            }
            file << "       </action" << k << ">" << std::endl;
            k++;
        }

        file << "   </student" << n << ">" << std::endl;

        n++;

    }

    file << "</root>" << std::endl;
}

int main() {
    write_to_xml_file("new.xml");
}