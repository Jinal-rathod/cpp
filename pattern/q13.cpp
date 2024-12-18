//  Palindrome triangle

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
        for (int j = count-1; j >= i ; j--)
        {
            cout << j << " ";
        }
        count += 2;
        cout << endl;
    }
    return 0;
}