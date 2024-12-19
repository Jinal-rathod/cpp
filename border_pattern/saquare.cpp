// * * * * *
// *       *
// *       *
// *       *
// * * * * *

#include <iostream>
using namespace std;

void s_border(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j == 1 || j == n || i == 1 || i == n)
            {
                cout << j << " ";
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
    s_border(num);
    return 0;
}