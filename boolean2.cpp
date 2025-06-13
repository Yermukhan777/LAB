#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    bool isEven = number % 2 == 0;
    cout << "Is even: " << boolalpha << isEven << endl;
    return 0;
}
