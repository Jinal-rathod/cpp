// ledder : count all steps (condition : you can only know to jump 1 or 2 steps)

#include <iostream>
#include <vector>
using namespace std;

int ledder(int n)
{
    if (n == 0)
    {
        return 1;
    }
    if (n == 1)
    {
        return 1;
    }
    return ledder(n - 1) + ledder(n - 2);
}
int main()
{
    int n;
    cin >> n;
    cout << ledder(n);
    return 0;
}