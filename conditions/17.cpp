// Write a program to calculate the roots of a equation using if-else conditions.

/*
Enter coefficients a, b, and c of the quadratic equation (ax^2 + bx + c = 0):
1 -5 6
The roots are real and distinct.
Root 1 = 3
Root 2 = 2
Enter coefficients a, b, and c of the quadratic equation (ax^2 + bx + c = 0):
1 -4 4
The root is real and repeated.
Root = 2
Enter coefficients a, b, and c of the quadratic equation (ax^2 + bx + c = 0):
1 2 5
The roots are complex.
Root 1 = -1 + 2i
Root 2 = -1 - 2i
*/

#include <iostream>
#include <cmath>  // For sqrt() function
using namespace std;

int main() {
    float a, b, c, D, x1, x2;

    // Input coefficients a, b, and c
    cout << "Enter coefficients a, b, and c of the quadratic equation (ax^2 + bx + c = 0):" << endl;
    cin >> a >> b >> c;

    // Check if 'a' is zero to avoid division by zero (it's not a quadratic equation if a = 0)
    if (a == 0) {
        cout << "This is not a quadratic equation (a cannot be zero)." << endl;
        return 0;
    }

    // Calculate the discriminant (D)
    D = b * b - 4 * a * c;

    // Check the discriminant and calculate roots accordingly
    if (D > 0) {
        // Two real and distinct roots
        x1 = (-b + sqrt(D)) / (2 * a);
        x2 = (-b - sqrt(D)) / (2 * a);
        cout << "The roots are real and distinct." << endl;
        cout << "Root 1 = " << x1 << endl;
        cout << "Root 2 = " << x2 << endl;
    }
    else if (D == 0) {
        // One real root (repeated root)
        x1 = -b / (2 * a);
        cout << "The root is real and repeated." << endl;
        cout << "Root = " << x1 << endl;
    }
    else {
        // Complex roots
        float realPart = -b / (2 * a);
        float imaginaryPart = sqrt(-D) / (2 * a);
        cout << "The roots are complex." << endl;
        cout << "Root 1 = " << realPart << " + " << imaginaryPart << "i" << endl;
        cout << "Root 2 = " << realPart << " - " << imaginaryPart << "i" << endl;
    }

    return 0;
}
