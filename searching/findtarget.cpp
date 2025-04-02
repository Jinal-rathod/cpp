// find target

#include <iostream>
#include <vector>
using namespace std;

int findPeak(vector<int> arr, int t, int i, int j)
{
    int start = i;
    int end = j - 1;
    int result = -1;
    while (start < end)
    {
        int mid = int(start + end) / 2;
        if (arr[mid] == t)
        {
            end = mid - 1;
        }
        else
        {
            result = mid;
            start = mid + 1;
        }
    }
    return result;
}
int main()
{
    vector<int> arr = {10, 20, 30, 40, 1, 2, 3, 4};
    int t = 10;
    cout << findPeak(arr, t, 0, arr.size());
    return 0;
}