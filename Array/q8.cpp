// Sum of the Array

#include <iostream>
using namespace std;

void isSum(int arr[])
{
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum += arr[i];
    }
    cout << sum;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    isSum(arr);
    return 0;
}