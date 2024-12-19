//     *
//    * *
//   *   *
//  *     *
// * * * * *

#include <iostream>
using namespace std;

void triangle(int n)
{
    for (int i = n; i >= 1; i--)
    {
        for (int k = 1; k < i; k++)
        {
            cout << " ";
        }
        for (int j = i; j <= n; j++)
        {
            if (j == i || j == n || i == 1)
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
int main()
{
    int num;
    cin >> num;
    triangle(num);
    return 0;
}