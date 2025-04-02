// Write a program to check if a number is positive, negative and zero.

#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;
    if (num > 0)
    {
        cout << "It's a positive number." << endl;
    }
    else if (num < 0)
    {
        cout << "It's a negaive number." << endl;
    }
    else
    {
        cout << "It's a zero." << endl;
    }
}