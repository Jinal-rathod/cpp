// sum of Array and find the thier two Array index

#include <iostream>
using namespace std;

void print(int arr[], int target)
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = i - 1; j < 5; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                cout << i << " " << j;
                return;
            }
        }
    }
}
int main()
{
    int target;
    cin >> target;
    int arr[5] = {10, 2, 32, 4, 58};
    print(arr, target);
    return 0;
}