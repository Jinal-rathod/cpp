#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {7, 6, 5, 4, 3};

    for (int i = 0; i < arr.size() - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
    }

    for (int a : arr)
    {
        cout << a;
    }
    return 0;
}