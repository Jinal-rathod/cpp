//     *
//    * *
//   *   *
//  *     *
// *       *
//  *     *
//   *   *
//    * *
//     *

#include <iostream>
using namespace std;

void upper(int n)
{
    for (int i = n; i >= 1; i--)
    {
        for (int k = 1; k < i; k++)
        {
            cout << " ";
        }
        for (int j = i; j <= n; j++)
        {
            if (j == i || j == n)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}
void lower(int n)
{
    for (int i = 1; i <= n - 1; i++)
    {
        for (int k = 1; k < i; k++)
        {
            cout << " ";
        }
        for (int j = i; j <= n - 1; j++)
        {
            if (j == i || j == n - 1)
            {
                cout << " *";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

int main()
{
    int num;
    cin >> num;
    upper(num);
    lower(num);
    return 0;
}