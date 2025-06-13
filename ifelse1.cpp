#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;

    if (age < 13)
        cout << "Child";
    else if (age < 20)
        cout << "Teenager";
    else
        cout << "Adult";
    return 0;
}
