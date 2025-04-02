// Finding subarrays with a given sum

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 3, 2, 5, 7, 2};
    int target = 14;
    int n = sizeof(arr) / sizeof(arr[0]);

    int i = 0;
    int c = 0;

    for (int j = 0; j < n; j++)
    {
        c += arr[j];
        while (c > target && i <= j)
        {
            c -= arr[i];
            i++;
        }

        if (c == target)
        {
            for (int k = i; k <= j; k++)
            {
                cout << arr[k] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}