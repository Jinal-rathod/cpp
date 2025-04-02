// find upper boundary

#include <iostream>
#include <vector>
using namespace std;

int binaySearching(vector<int> arr, int n, int t)
{
    int start = 0;
    int end = n - 1;
    int result = -1;
    while (start < end)
    {
        int mid = int(start + end) / 2;
        if (arr[mid] == t)
        {
            return mid;
        }
        else if (arr[mid] > t)
        {
            end--;
        }
        else
        {
            result = mid;
            start++;
        }
    }
    return result + 1;
}
int main()
{
    vector<int> arr = {1, 2, 3, 5, 6, 7, 8};
    int n = arr.size();
    int t;
    cin >> t;
    int ans = binaySearching(arr, n, t);
    cout << arr[ans];
    return 0;
}