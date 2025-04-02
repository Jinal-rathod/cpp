// find target value using binary searching

#include <iostream>
#include <vector>
using namespace std;

int binaySearching(vector<int> arr, int n, int t)
{
    int start = 0;
    int end = n - 1;

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
            start++;
        }
    }
    return -1;
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8};
    int n = arr.size();
    int t;
    cin >> t;
    cout << binaySearching(arr, n, t);
    return 0;
}