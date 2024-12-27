// revares array and print the array (Befor : a[0]=12  After : a[0]=8).

#include <iostream>
using namespace std;

void isRvs(int n, int arr[])
{
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int num;
    cin >> num;
    int arr[num];
    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }
    isRvs(num, arr);
    return 0;
}