
#include <iostream> // библеотечный файл ввода - вывода
#include <string> // модуль для работы со строками
using namespace std; // пространство имён

int main()
{
    string name; // объявление строковой переменной
    cout << "What is your name? "; // вывод на экран запрос имени
    getline(cin, name); // cin читает поток данных до ближайшего разделителя,
    // метод getline - всю строчку целиком.
    cout << "Hello, " << name << "!\n"; // вывод на экран приветсвия
}
