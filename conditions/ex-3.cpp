// Write a program to check a whether a number is even or odd using if-else.

#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;
    if (num % 2 == 0)
    {
        cout << "It's a even number." << endl;
    }
    else
    {
        cout << "It's a odd number." << endl;
    }
}