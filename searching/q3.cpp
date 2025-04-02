// find target value using linear searching and recursion

#include <iostream>
#include <vector>
using namespace std;

void linearSearching(vector<int> arr, int n, int t)
{
    int i = 0;
    while (i < n)
    {
        if (arr[i] == t)
        {
            cout << i;
            return;
        }
        else
        {
            i++;
        }
    }
    linearSearching(arr, n, t);
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = arr.size();
    int t;
    cin >> t;
    if (t >= 0 && t <= 10)
    {
        linearSearching(arr, n, t);
    }
    else
    {
        cout << "-1";
    }
    return 0;
}