#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {1, 2, 3, 1, 5, 6, 2, 8};
    int cur = 0;
    int max = 0;
    int k;
    cin >> k;
    for (int i = 0; i < k; i++)
    {
        cur += arr[i];
    }
    for (int i = k; i < arr.size(); i++)
    {
        cur += arr[i];
        cur -= arr[i - k];
        if (max < cur)
        {
            max = cur;
        }
    }
    cout << max << endl;
    return 0;
}