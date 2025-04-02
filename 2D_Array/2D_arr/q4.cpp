// print daigonal elemetes of array

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    int row = matrix.size();
    int col = matrix[0].size();
    for (int i = 0; i < row; i++)
    {
        cout << matrix[i][i] << " ";
    }
    cout << endl;
    return 0;
}
