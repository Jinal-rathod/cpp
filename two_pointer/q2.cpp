// removing duplicates from a sorting array

#include <iostream>
#include <vector>
using namespace std;

int find(int arr[], int n)
{
    int j = 0;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] != arr[j])
        {
            j++;
            arr[j] = arr[i];
        }
    }
    return j + 1;
}
int main()
{
    int arr[] = {1, 1, 2, 2, 3, 4, 4, 5};
    int n1 = sizeof(arr) / sizeof(arr[0]);
    int n = find(arr, n1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}