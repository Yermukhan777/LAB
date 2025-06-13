#include <iostream>
#include <string>
#include <cstring> // для C-style strcmp
using namespace std;

int main() {
    char correctPassword[] = "code123";
    char enteredPassword[50];

    cout << "Enter password: ";
    cin.getline(enteredPassword, 50); // C-style ввод

    // сравнение C-строк
    if (strcmp(correctPassword, enteredPassword) == 0) {
        cout << "Access granted.\n";

        // ввод имени и возраста
        string name;
        int age;

        cout << "Enter your name: ";
        cin.ignore(); // очистка буфера
        getline(cin, name);

        cout << "Enter your age: ";
        cin >> age;

        // преобразование чисел в строку (через to_string)
        string ageInfo = "Your age is " + to_string(age);
        cout << "Welcome, " + name + ". " + ageInfo << endl;

    } else {
        cout << "Incorrect password.\n";
    }

    return 0;
}
