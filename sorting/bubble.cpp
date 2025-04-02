#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {5, 9, 4, 2, 7};

    for (int i = 0; i < arr.size() - 1; i++)
    {
        for (int j = 0; j < arr.size() - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j + 1], arr[j]);
            }
        }
    }
    for (int a : arr)
    {
        cout << a << " ";
    }
    return 0;
}
