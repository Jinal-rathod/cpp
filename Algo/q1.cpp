// Two Sum

#include <iostream>
using namespace std;

bool isSum(int n, int arr[], int target)
{
    int i = 0;
    int j = n - 1;

    while (i < j)
    {
        int sum = arr[i] + arr[j];
        if (sum == target)
        {
            return true;
        }
        else if (sum < target)
        {
            i++;
        }
        else
        {
            j--;
        }
    }
    return false;
}
int main()
{
    int n, t;
    cin >> n >> t;
    int arr[] = {1, 2, 3, 4, 5};
    cout << isSum(n, arr, t);
    return 0;
}