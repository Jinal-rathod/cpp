// 1 _ _ 4
// 5 6 _ 8
// 4 _ 2 1
// 8 _ _ 5

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
        for (int j = 0; j < col; j++)
        {
            if (j == 0)
            {
                cout << A[i][j] << " ";
            }
            if (j == 1 || j == 2)
            {
                if (i == j)
                {
                    cout << A[i][j] << " ";
                }
                else
                {
                    cout << "_ ";
                }
            }
            if (j == 3)
            {
                cout << A[i][j] << " ";
            }
        }
        cout << endl;
    }

    return 0;
}