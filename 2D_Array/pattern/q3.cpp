// 1 2 3 4
// 5 _ _ 8
// 4 _ _ 1
// 8 7 6 5

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int>> A = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {4, 3, 2, 1},
        {8, 7, 6, 5}};

    int row = A.size();
    int col = A[0].size();
    int k = 3;

    for (int i = 0; i < row; i++)
    {
        for (int j = col - 1; j >= 0; j--)
        {
            if (i == 3 || i == 0 || j == 0 || j == 3)
            {
                cout << A[i][k - j] << " ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
    return 0;
}
