// Write a program to find the absolute value of a number.

#include <iostream>
using namespace std;

int main() {

    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (num < 0) {
        num = -num;
        cout << "The absolute value is: " << num; 
    }
}

/*          
#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    double num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "The absolute value is: " << abs(num) << endl;
}
*/

