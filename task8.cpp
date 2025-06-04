#include <iostream>
using namespace std;

int main() {
    float weight, height;

    cout << "Enter your weight in kilograms: ";
    cin >> weight;

    cout << "Enter your height in meters: ";
    cin >> height;

    float BMI = weight / (height * height);

    cout << "Your BMI is " << BMI << endl;

    return 0;
}
