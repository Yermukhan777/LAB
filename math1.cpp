#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double radius;
    double PI = 3.14;
    cout << "Enter radius of circle: ";
    cin >> radius;

    double area = PI * pow(radius, 2);
    double circumference = 2 * PI * radius;

    cout << "Area: " << area << "\nCircumference: " << circumference << endl;
    return 0;
}
