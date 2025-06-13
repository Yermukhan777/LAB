#include <iostream>
using namespace std;

int main() {
    string password;
    cout << "Enter password: ";
    cin >> password;

    if (password == "admin123")
        cout << "Access granted";
    else
        cout << "Access denied";
    return 0;
}
