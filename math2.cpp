#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a = 1, b = -3, c = 2;
    double discriminant = pow(b, 2) - 4*a*c;

    if (discriminant >= 0) {
        double root1 = (-b + sqrt(discriminant)) / (2*a);
        double root2 = (-b - sqrt(discriminant)) / (2*a);
        cout << "Roots: " << root1 << " and " << root2 << endl;
    } else {
        cout << "No real roots." << endl;
    }
    return 0;
}
