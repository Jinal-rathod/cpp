// Hourglass Pattern

#include <iostream>
using namespace std;

int main()
{
    for (int i = 4; i >= 1; i--)
    {
        for (int k = 4; k > i; k--)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
    for (int i = 1; i <= 4; i++)
    {
        for (int k = 4; k > i; k--)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
    return 0;
}