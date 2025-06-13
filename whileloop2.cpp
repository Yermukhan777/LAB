#include <iostream>
using namespace std;

int main() {
    int secret = 7, guess;
    while (guess != secret) {
        cout << "Guess the number: ";
        cin >> guess;
    }
    cout << "Correct!";
    return 0;
}
