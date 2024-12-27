// Enter array and find thier index

#include <iostream>
using namespace std;

int isArray(int n, int arr[])
{
    for (int i = 0; i < 7; i++)
    {
        if (arr[i] == n)
        {
            return i;
        }
    }
    return 0;
}
int main()
{
    int num;
    cout << "Enter arrry elements : ";
    cin >> num;
    int arr[] = {5, 4, 3, 8, 6, 1, 9};
    cout << isArray(num, arr);
    return 0;
}