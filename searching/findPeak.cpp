// find the peak element in the array

#include <iostream>
#include <vector>
using namespace std;

int findPeak(vector<int> arr, int i, int j)
{
    int start = i;
    int end = j - 1;
    int result;
    while (start < end)
    {
        int mid = int(start + end) / 2;
        if (arr[mid] < arr[0])
        {
            end = mid - 1;
        }
        else
        {
            result = mid;
            start = mid + 1;
        }
    }
    return arr[result];
}
int main()
{
    vector<int> arr = {10, 20, 30, 40, 1, 2, 3, 4};
    cout << findPeak(arr, 0, arr.size());
    return 0;
}