// Write a program to determine whethre a person is eligible to vote based on their age.

#include <iostream>
using namespace std;

int main()
{
    int age;
    cin >> age;
    if (age > 18)
    {
        cout << "Yor are eligible for vote..";
    }
    else
    {
        cout << "Yor are not eligible for vote..";
    }
}