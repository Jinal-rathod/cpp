// find daigonal and then find max element

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    int max = matrix[0][0];
    int row = matrix.size();
    int col = matrix[0].size();
    for (int i = 0; i < row; i++)
    {
        if (max < matrix[i][i])
        {
            max = matrix[i][i];
        }
    }

    for (int i = 0; i < row; i++)
    {
        if (max < matrix[i][col - i - 1])
        {
            max = matrix[i][col - i - 1];
        }
    }
    cout << max << endl;
    return 0;
}