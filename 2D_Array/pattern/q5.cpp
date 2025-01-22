// 1 2 3 4
// _ 6 _ _
// _ _ 2 _
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
        for (int j = 0; j < col; j++)
        {
            if (i == 0)
            {
                cout << A[i][j] << " ";
            }
            if (i == 1 || i == 2)
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
            if (i == 3)
            {
                cout << A[i][j] << " ";
            }
        }
        cout << endl;
    }

    return 0;
}