// * * * * * * * * * *
// *                 *
// *                 *
// *                 *
// * * * * * * * * * *

#include <iostream>
using namespace std;

void r_border(int n)
{
    for (int i = 1; i <= n/2; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j == 1 || j == n || i == 1 || i == n/2)
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
    r_border(num);
    return 0;
}
