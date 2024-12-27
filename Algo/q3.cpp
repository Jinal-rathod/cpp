// Remove Nth Node From End of List

#include <iostream>
using namespace std;

void isRemove(int n, int arr[], int t)
{
    for (int i = 0; i < n; i++)
    {
        if (i == t)
        {
            i++;
        }
        cout << arr[i] << " ";
    }
}
int main()
{
    int n, t;
    cin >> n >> t;
    int arr[] = {1, 2, 3, 4, 5};
    isRemove(n, arr, t);
    return 0;
}