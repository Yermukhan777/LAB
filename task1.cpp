#include <iostream>
using namespace std;

int main() {
    int balance = 10000;
    int deposit, withdraw;

    cout << " Welcome to Simple Bank \n";
    cout << "Your current balance is: " << balance << "₸\n";

    cout << "\nEnter amount to deposit: ";
    cin >> deposit;
    balance += deposit; // Assignment operator +=

    cout << "Enter amount to withdraw: ";
    cin >> withdraw;

    // Comparison and Logical operator
    if (withdraw <= balance && withdraw > 0) {
        balance -= withdraw; // Assignment operator -=
        cout << " Withdrawal successful!\n";
    } else {
        cout << " Insufficient balance or invalid amount.\n";
    }

    cout << " Final balance: " << balance << "₸\n";
    return 0;
}
