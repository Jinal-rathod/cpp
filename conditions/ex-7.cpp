// Write a program to determine whether a year is a leap year or not.

#include <iostream>
using namespace std;

int main()
{
    int year;
    cin >> year;
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
    {
        cout << "It's leap year";
    }
    else
    {
        cout << "It's not leap year";
    }
}
