#include <iostream>
using namespace std;

int main() {
    int num;
    while (true) {
        cout << "Enter number (0 to stop): ";
        cin >> num;
        if (num == 0)
            break;
    }
    cout << "Loop stopped.";
    return 0;
}
