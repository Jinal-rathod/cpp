// find min element

#include <iostream>
#include <vector>
using namespace std;

int isMin(vector<int> arr, int n)
{
    int min = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    return min;
}
int main()
{
    vector<int> arr = {5, 6, 4, 8, 2, 4, 7};
    int n = arr.size();
    cout << isMin(arr, n);
    return 0;
}
