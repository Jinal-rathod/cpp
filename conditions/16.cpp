// Write a program to calculate electricity bill based on given slab rates.
/*
Enter the number of units consumed: 50
Total electricity bill: ₹350
Enter the number of units consumed: 150
Total electricity bill: ₹850
Enter the number of units consumed: 250
Total electricity bill: ₹1350
Enter the number of units consumed: 350
Total electricity bill: ₹1850
*/

#include <iostream>
using namespace std;

int main() {
    float units, bill = 0.0;
    cout << "Enter the number of units consumed: ";
    cin >> units;

    // Calculate the bill based on the slab rates
    if (units <= 100) {
        bill = units * 5;  // ₹5 per unit for the first 100 units
    } else if (units <= 200) {
        bill = 100 * 5 + (units - 100) * 7;  // ₹5 per unit for first 100, ₹7 for next 100
    } else if (units <= 300) {
        bill = 100 * 5 + 100 * 7 + (units - 200) * 10;  // ₹5 for first 100, ₹7 for next 100, ₹10 for next 100
    } else {
        bill = 100 * 5 + 100 * 7 + 100 * 10 + (units - 300) * 15;  // ₹5, ₹7, ₹10, ₹15 for above 300
    }

    // Add fixed charge
    bill += 50;  // Fixed charge of ₹50

    // Output the final bill
    cout << "Total electricity bill: ₹" << bill << endl;

    return 0;
}
