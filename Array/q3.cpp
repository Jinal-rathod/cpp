// find min value of array

#include <iostream>
using namespace std;

void isMin(int n, int arr[])
{
    int min = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    cout << min;
}
int main()
{
    int n;
    cin >> n;
    int arr[5] = {56, 18, 94, 72, 15};
    isMin(n, arr);
    return 0;
}