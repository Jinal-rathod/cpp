// Rotated Number Pyramid

#include <iostream>
using namespace std;

int main()
{
    int count = 1;
    for (int i = 1; i <= 4; i++)
    {
        for (int k = 4; k > i; k--)
        {
            cout << "  ";
        }
        for (int j = i; j <= count; j++)
        {
            cout << j << " ";
        }
        count += 2;
        cout << endl;
    }
    return 0;
}