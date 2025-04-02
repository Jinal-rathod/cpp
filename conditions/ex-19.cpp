// Write a program to determine whether a number is positive and even or positive and odd.

#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;
    if (num > 0 && num % 2 == 0)
    {
        cout << "Number is positive and even.";
    }
    else if (num > 0 && num % 2 == 1)
    {
        cout << "Number is positive and odd.";
    }
    else
    {
        cout << "Number is not even odd or positive.";
    }
}