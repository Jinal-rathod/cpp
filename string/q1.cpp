#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int n = str.length(); // find string length
    cout << n << endl;
    for (char c : str)
    {
        cout << c << " ";
    }
    return 0;
}
