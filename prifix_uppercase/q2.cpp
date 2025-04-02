// find longest prefix charcter in string array

#include <iostream>
#include <climits>
using namespace std;

void isprefix(string arr[], int n)
{
    int min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i].length() < min)
        {
            min = arr[i].length();
            cout << min << endl;
        }
    }
    string prefix = "";
    for (int i = 0; i < min; i++)
    {
        char current = arr[0][i];
        for (int j = 1; j < n; j++)
        {
            if (arr[j][i] != current)
            {
                cout << prefix << endl;
                return;
            }
        }
        prefix += current;
    }
    cout << prefix << endl;
}
int main()
{
    string arr[] = {"flower", "flow", "flight"};
    int n = sizeof(arr) / sizeof(arr[0]);
    isprefix(arr, n);
    return 0;
}