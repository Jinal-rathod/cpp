// find all daigonal
/*
00 01 02
10 11 12
20 21 22
*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    int n = matrix.size();

    for (int i = 0; i < n; i++)
    {
        int r = 0, c = i;
        while (r < n && c >= 0)
        {
            cout << matrix[r][c] << " ";
            r++;
            c--;
        }
        cout << endl;
    }
    for (int i = 1; i < n; i++)
    {
        int r = i, c = n - 1;
        while (r < n && c >= 0)
        {
            cout << matrix[r][c] << " ";
            r++;
            c--;
        }
        cout << endl;
    }
    return 0;
}