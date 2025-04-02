// find target value using linear searching

#include <iostream>
#include <vector>
using namespace std;

int linearSearching(vector<int> arr, int n, int t)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == t)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = arr.size();
    int t;
    cin >> t;
    cout << linearSearching(arr, n, t);
    return 0;
}