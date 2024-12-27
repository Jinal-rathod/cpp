// Enter index and find thier array

#include <iostream>
using namespace std;

int isArray(int n, int arr[])
{
    for (int i = 0; i < 7; i++)
    {
        if (i == n)
        {
            cout << arr[i];
        }
    }
}
int main()
{
    int num;
    cout << "Enter index (ender 6) : ";
    cin >> num;
    int arr[] = {5, 4, 3, 8, 6, 1, 8};
    isArray(num, arr);
    return 0;
}