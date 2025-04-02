// finding pair with a given sum

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int t = 15;

    int i = 0;
    int j = arr.size() - 1;

    while (i < j)
    {
        int sum = arr[i] + arr[j];
        if (sum == t)
        {
            cout << arr[i] << " " << arr[j] << endl;
            break;
        }
        else if (sum < t)
        {
            i++;
        }
        else
        {
            j--;
        }
    }

    return 0;
}