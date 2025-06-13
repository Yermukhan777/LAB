#include <iostream>
using namespace std;

int main() {
    int iq;
    cout << " Welcome to the IQ test simulator!\n";
    cout << "Enter your IQ score: ";
    cin >> iq;

    // Comparison and logical operators
    if (iq >= 130) {
        cout << " Genius level!\n";
    } else if (iq >= 100 && iq < 130) {
        cout << " Average to above average.\n";
    } else if (iq < 100 && iq >= 70) {
        cout << " Below average, but you're still amazing!\n";
    } else {
        cout << " Please retake the test, something seems off.\n";
    

    return 0;
}
}
