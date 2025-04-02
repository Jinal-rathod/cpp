// print tribonacci series
#include <iostream>
#include <vector>
using namespace std;

int tribonacci(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    if (n == 2)
    {
        return 1;
    }
    return tribonacci(n - 1) + tribonacci(n - 2) + tribonacci(n - 3);
}
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        cout << tribonacci(i) << " ";
    }
    return 0;
}