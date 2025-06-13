#include <iostream>
#include <string>
using namespace std;

int main() {
    string firstName, lastName, city;

    cout << "Enter your first name: ";
    getline(cin, firstName); // пользовательский ввод строки

    cout << "Enter your last name: ";
    getline(cin, lastName);

    cout << "Enter your city: ";
    getline(cin, city);

    // Конкатенация строк
    string fullName = firstName + " " + lastName;

    // Вывод данных с использованием спецсимволов
    cout << "\n--- Profile Summary ---\n";
    cout << "Full Name:\t" << fullName << endl;
    cout << "City:\t\t" << city << endl;

    // Работа с длиной строки и доступ по индексу
    cout << "Your first name has " << firstName.length() << " characters.\n";
    if (firstName.length() >= 2) {
        cout << "The second letter of your first name is: " << firstName[1] << endl;
    }

    return 0;
}
