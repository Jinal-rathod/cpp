// user give you array elements find array is sort print true else print false

#include <iostream>
using namespace std;

bool array(int arr[], int n)
{
    for (int i = 0; i < n ; i++)
    {
        if (arr[i] < arr[i + 1])
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}
int main()
{
    int n;
    cout << "Enter array length : ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << array(arr, n);
    return 0;
}