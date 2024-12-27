// find max value of array

#include <iostream>
using namespace std;

void isMax(int n, int arr[])
{
    int max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    cout << max;
}
int main()
{
    int n;
    cin >> n;
    int arr[5] = {56, 18, 94, 72, 35};
    isMax(n, arr);
    return 0;
}