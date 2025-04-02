// find max element

#include <iostream>
#include <vector>
using namespace std;

int isMax(vector<int> arr, int n)
{
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    return max;
}
int main()
{
    vector<int> arr = {1, 5, 6, 4, 8, 2, 4, 7};
    int n = arr.size();
    cout << isMax(arr, n);
    return 0;
}
