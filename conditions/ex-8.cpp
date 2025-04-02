// Write a program to check if a character is an uppercase or lowercase letters.

#include <iostream>
using namespace std;

int main()
{
    char ch;
    cin >> ch;
    if (ch >= 'a' && ch <= 'z')
    {
        cout << "Character is an lowercase." << endl;
    }
    else
    {
        cout << "Character is an uppercase." << endl;
    }
}