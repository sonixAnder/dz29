#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    vector<string> contacts(2);


    cout << "Введите имя: ";
    getline(cin, contacts[0]);

    cout << "Введите телефон: ";
    getline(cin, contacts[1]);

    cout << "Контакт сохранен:" << endl;
    cout << "Имя: " << contacts[0] << endl;
    cout << "Телефон: " << contacts[1] << endl;

    string searchName;
    cout << "Введите имя для поиска: ";
    getline(cin, searchName);

    if (searchName == contacts[0])
    {
        cout << "Найден контакт:" << endl;
        cout << "Имя: " << contacts[0] << endl;
        cout << "Телефон: " << contacts[1] << endl;
    }
    else
    {
        cout << "Контакт с таким именем не найден." << endl;
    }

    string searchPhone;
    cout << "Введите номер телефона для поиска: ";
    getline(cin, searchPhone);

    if (searchPhone == contacts[1])
    {
        cout << "Найден контакт:" << endl;
        cout << "Имя: " << contacts[0] << endl;
        cout << "Телефон: " << contacts[1] << endl;
    }
    else
    {
        cout << "Контакт с таким номером телефона не найден." << endl;
    }

    return 0;
}
